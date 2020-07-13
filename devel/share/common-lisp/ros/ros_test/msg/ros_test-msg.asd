
(cl:in-package :asdf)

(defsystem "ros_test-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "pixel_point0" :depends-on ("_package_pixel_point0"))
    (:file "_package_pixel_point0" :depends-on ("_package"))
  ))