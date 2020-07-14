#include <ros/ros.h>
#include <cv_bridge/cv_bridge.h>
#include <image_transport/image_transport.h>
#include <sensor_msgs/image_encodings.h>

#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp> //新式 C++风格图像处理函数
#include <opencv2/highgui/highgui.hpp> //C++风格的显示、滑动条鼠标及输入输出相关
#include <opencvtest/pixel_point0.h>
#include <iostream>
using namespace std;

vector<int> hsvorange =     {1,     10,     25,     43,     255, 45, 255}; //预设颜色的 HSV 三通道范围,其中 0 号元素作颜色序号,用来标识各种颜色,可按照自己需求和颜色表自由添加
vector<int> hsvpurple =     {2,     130,    160,    43,     255, 45, 255}; //预设颜色的 HSV 三通道范围,其中 0 号元素作颜色序号,用来标识各种颜色,可按照自己需求和颜色表自由添加
vector<int> hsvgreen =      {3,     40,     80,      43,    255, 45, 255}; //预设颜色的 HSV 三通道范围,其中 0 号元素作颜色序号,用来标识各种颜色,可按照自己需求和颜色表自由添加
vector<int> hsvyellow =     {4,     30,     40,     43,     255, 45, 255}; //预设颜色的 HSV 三通道范围,其中 0 号元素作颜色序号,用来标识各种颜色,可按照自己需求和颜色表自由添加
vector<int> hsvred =        {5,     0,      10,     43,     255, 45, 255}; //预设颜色的 HSV 三通道范围,其中 0 号元素作颜色序号,用来标识各种颜色,可按照自己需求和颜色表自由添加
vector<int> hsvblue =       {6,     90,     130,     43,    255, 45, 255}; //预设颜色的 HSV 三通道范围,其中 0 号元素作颜色序号,用来标识各种颜色,可按照自己需求和颜色表自由添加

static const string OPENCV_WINDOW = "color _distinguish";
static const string OPENCV_WINDOW_1 = "binary";
cv::Mat binary;

vector<cv::Vec4i> hierarcy;
class cube //构建类,存储颜色名称和对应 hsv 三通道范围
{
public:
    cube(const string name, vector<int> hsv)
    {
        this->name = name;
        this->HSV = hsv;
    }
    vector<int> &getHSV()
    {
        return this->HSV;
    }
    vector<vector<cv::Point>> &getContours()
    {
        return this->contours;
    }

private:
    string name;
    vector<vector<cv::Point>> contours;
    vector<int> HSV;
};
//可按照自己需求自由添加
cube orange("orange", hsvorange);
cube purple("purple", hsvpurple);
cube green("green", hsvgreen);
cube yellow("yellow", hsvyellow);
cube red("red", hsvred);
cube blue("blue",hsvblue);

class ImageConverter
{
private:
    ros::NodeHandle nh_;
    image_transport::ImageTransport it_;
    image_transport::Subscriber image_sub_;
    image_transport::Publisher image_pub_;
    ros::Publisher center_point_pub_;
    opencvtest::pixel_point0 msgs;

public:
    ImageConverter()
        : it_(nh_) // 初始化列表//
    {
        image_sub_ = it_.subscribe("/usb_cam/image_raw", 1, &ImageConverter::imageCb,
                                   this);
        //订阅节点,该节点在 USB_cam/image_raw 中发布。
        center_point_pub_ = nh_.advertise<opencvtest::pixel_point0>("pixel_center_axis", 1000);
        //话题名称和接受队列缓存消息条数;
        cv::namedWindow(OPENCV_WINDOW);
    }
    ~ImageConverter()
    {
        cv::destroyWindow(OPENCV_WINDOW);
    }
    void process(cv_bridge::CvImagePtr &cv_ptr, cube &color)
    {
        cv::Mat drawmap = cv_ptr->image.clone(); //画布
        cv::Mat clone = cv_ptr->image.clone();
        int num = color.getHSV()[0];

        int j = 0;
        //默认读入的颜色空间为 RGB,首先转换成 HSV。
        cv::cvtColor(clone, clone, CV_BGR2HSV);
        //在图片中查找相关颜色,并转换成二值图
        cv::inRange(clone, cv::Scalar(color.getHSV()[1], color.getHSV()[3], color.getHSV()[5]), cv::Scalar(color.getHSV()[2], color.getHSV()[4], color.getHSV()[6]), clone); //inrange 可实现二值化
        //完全拷贝,把 colone 中的所有信息拷贝到 bianary 中
        binary = clone.clone();
        //中值滤波操作
        cv::medianBlur(binary, binary, 25);
        //轮廓的查找,只提取最外面的轮廓,将轮廓中的所有点的编码转换成点
        cv::findContours(binary, color.getContours(), hierarcy, CV_RETR_EXTERNAL,
                         CV_CHAIN_APPROX_NONE);
        if (color.getContours().size() == 0)
            return;
        vector<cv::Rect> rect;
        for (int i = 0; i < color.getContours().size(); i++)
        {
            rect.push_back(cv::boundingRect(color.getContours()[i]));
            if (rect[i].area() > 5000 && rect[i].area() < 13000)
            //根据实际情况调整范围,只有满足规定大小范围内的矩形才能被判断为物块
            //图像最外边界, 即用于筛选
            {
                cv::rectangle(drawmap, rect[i], cv::Scalar(0, 0, 255), 3);
                
                //画外接蓝色正方形
                switch (num)
                {
                case 1: //orange
                    msgs.orange_u.push_back(0.5 * (rect[i].tl().x + rect[i].br().x));
                    //计算有色物块图像的中心像素坐标
                    msgs.orange_v.push_back(0.5 * (rect[i].tl().y + rect[i].br().y));
                    cv::circle(drawmap, cv::Point2d(msgs.orange_u[j], msgs.orange_v[j]), 1, cv::Scalar(255, 0, 0), 15); //可视化计算得的中心点坐标
                    j++;
                    break;
                case 2: //purple
                    msgs.purple_u.push_back(0.5 * (rect[i].tl().x + rect[i].br().x));
                    //计算有色物块图像的中心像素坐标
                    msgs.purple_v.push_back(0.5 * (rect[i].tl().y + rect[i].br().y));
                    cv::circle(drawmap, cv::Point2d(msgs.purple_u[j], msgs.purple_v[j]), 1, cv::Scalar(255, 0, 0), 15); //可视化计算得的中心点坐标
                    j++;
                    break;
                case 3: //green
                    msgs.green_u.push_back(0.5 * (rect[i].tl().x + rect[i].br().x));
                    //计算有色物块图像的中心像素坐标
                    msgs.green_v.push_back(0.5 * (rect[i].tl().y + rect[i].br().y));
                    cv::circle(drawmap, cv::Point2d(msgs.green_u[j], msgs.green_v[j]), 1, cv::Scalar(255, 0, 0), 15); //可视化计算得的中心点坐标
                    j++;
                    break;
                case 4: //yellow
                    msgs.yellow_u.push_back(0.5 * (rect[i].tl().x + rect[i].br().x));
                    //计算有色物块图像的中心像素坐标
                    msgs.yellow_v.push_back(0.5 * (rect[i].tl().y + rect[i].br().y));
                    cv::circle(drawmap, cv::Point2d(msgs.yellow_u[j], msgs.yellow_v[j]), 1, cv::Scalar(255, 0, 0), 15); //可视化计算得的中心点坐标
                    j++;
                    break;
                case 5: //red
                    msgs.red_u.push_back(0.5 * (rect[i].tl().x + rect[i].br().x));
                    //计算有色物块图像的中心像素坐标
                    msgs.red_v.push_back(0.5 * (rect[i].tl().y + rect[i].br().y));
                    cv::circle(drawmap, cv::Point2d(msgs.red_u[j], msgs.red_v[j]), 1, cv::Scalar(255, 0, 0), 15); //可视化计算得的中心点坐标
                    j++;
                    break;
                case 6: //blue
                    msgs.blue_u.push_back(0.5 * (rect[i].tl().x + rect[i].br().x));
                    //计算有色物块图像的中心像素坐标
                    msgs.blue_v.push_back(0.5 * (rect[i].tl().y + rect[i].br().y));
                    cv::circle(drawmap, cv::Point2d(msgs.blue_u[j], msgs.blue_v[j]), 1, cv::Scalar(255, 0, 0), 15); //可视化计算得的中心点坐标
                    j++;
                    break;
                default:
                    break;
                }
            }
        }
        cv::imshow(OPENCV_WINDOW, drawmap);
        cv::imshow(OPENCV_WINDOW_1, binary);
        cv::waitKey(1);
        image_pub_.publish(cv_ptr->toImageMsg());
    }
    void imageCb(const sensor_msgs::ImageConstPtr &msg)
    {
        cv_bridge::CvImagePtr cv_ptr;
        try
        {
            cv_ptr = cv_bridge::toCvCopy(msg, sensor_msgs::image_encodings::BGR8);
            //转化为 opencv 格式图像,返回指针
        }
        catch (cv_bridge::Exception &e)
        {
            ROS_ERROR("cv_bridge exception: %s", e.what());
            return;
        }
        //deal with image
        process(cv_ptr, orange);
        process(cv_ptr, purple);
        process(cv_ptr, yellow);
        process(cv_ptr, green);
        process(cv_ptr, red);
        process(cv_ptr, blue);
        cout << msgs << endl;
        //cout 指令使得终端显示你的自定义消息内的值
        center_point_pub_.publish(msgs);
        //发布消息
        msgs.orange_u.clear();
        //清理消息,为更新 msgs 做准备
        msgs.orange_v.clear();

        msgs.purple_u.clear();
        //清理消息,为更新 msgs 做准备
        msgs.purple_v.clear();

        msgs.green_u.clear();
        //清理消息,为更新 msgs 做准备
        msgs.green_v.clear();

        msgs.yellow_u.clear();
        //清理消息,为更新 msgs 做准备
        msgs.yellow_v.clear();

        msgs.red_u.clear();
        //清理消息,为更新 msgs 做准备
        msgs.red_v.clear();

        msgs.blue_u.clear();
        //清理消息,为更新 msgs 做准备
        msgs.blue_v.clear();
    }
};

int main(int argc, char **argv)
{
    ros::init(argc, argv, "color_distinguish");
    ImageConverter ic;
    ros::spin();
    return 0;
}