# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/chenway/Documents/test/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/chenway/Documents/test/build

# Utility rule file for ros_test_generate_messages_nodejs.

# Include the progress variables for this target.
include ros_test/CMakeFiles/ros_test_generate_messages_nodejs.dir/progress.make

ros_test/CMakeFiles/ros_test_generate_messages_nodejs: /home/chenway/Documents/test/devel/share/gennodejs/ros/ros_test/msg/pixel_point0.js


/home/chenway/Documents/test/devel/share/gennodejs/ros/ros_test/msg/pixel_point0.js: /opt/ros/kinetic/lib/gennodejs/gen_nodejs.py
/home/chenway/Documents/test/devel/share/gennodejs/ros/ros_test/msg/pixel_point0.js: /home/chenway/Documents/test/src/ros_test/msg/pixel_point0.msg
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/chenway/Documents/test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating Javascript code from ros_test/pixel_point0.msg"
	cd /home/chenway/Documents/test/build/ros_test && ../catkin_generated/env_cached.sh /usr/bin/python2 /opt/ros/kinetic/share/gennodejs/cmake/../../../lib/gennodejs/gen_nodejs.py /home/chenway/Documents/test/src/ros_test/msg/pixel_point0.msg -Iros_test:/home/chenway/Documents/test/src/ros_test/msg -Istd_msgs:/opt/ros/kinetic/share/std_msgs/cmake/../msg -p ros_test -o /home/chenway/Documents/test/devel/share/gennodejs/ros/ros_test/msg

ros_test_generate_messages_nodejs: ros_test/CMakeFiles/ros_test_generate_messages_nodejs
ros_test_generate_messages_nodejs: /home/chenway/Documents/test/devel/share/gennodejs/ros/ros_test/msg/pixel_point0.js
ros_test_generate_messages_nodejs: ros_test/CMakeFiles/ros_test_generate_messages_nodejs.dir/build.make

.PHONY : ros_test_generate_messages_nodejs

# Rule to build all files generated by this target.
ros_test/CMakeFiles/ros_test_generate_messages_nodejs.dir/build: ros_test_generate_messages_nodejs

.PHONY : ros_test/CMakeFiles/ros_test_generate_messages_nodejs.dir/build

ros_test/CMakeFiles/ros_test_generate_messages_nodejs.dir/clean:
	cd /home/chenway/Documents/test/build/ros_test && $(CMAKE_COMMAND) -P CMakeFiles/ros_test_generate_messages_nodejs.dir/cmake_clean.cmake
.PHONY : ros_test/CMakeFiles/ros_test_generate_messages_nodejs.dir/clean

ros_test/CMakeFiles/ros_test_generate_messages_nodejs.dir/depend:
	cd /home/chenway/Documents/test/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/chenway/Documents/test/src /home/chenway/Documents/test/src/ros_test /home/chenway/Documents/test/build /home/chenway/Documents/test/build/ros_test /home/chenway/Documents/test/build/ros_test/CMakeFiles/ros_test_generate_messages_nodejs.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : ros_test/CMakeFiles/ros_test_generate_messages_nodejs.dir/depend

