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

# Include any dependencies generated for this target.
include dobot/CMakeFiles/DobotClient_P2P.dir/depend.make

# Include the progress variables for this target.
include dobot/CMakeFiles/DobotClient_P2P.dir/progress.make

# Include the compile flags for this target's objects.
include dobot/CMakeFiles/DobotClient_P2P.dir/flags.make

dobot/CMakeFiles/DobotClient_P2P.dir/src/gohome.cpp.o: dobot/CMakeFiles/DobotClient_P2P.dir/flags.make
dobot/CMakeFiles/DobotClient_P2P.dir/src/gohome.cpp.o: /home/chenway/Documents/test/src/dobot/src/gohome.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chenway/Documents/test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object dobot/CMakeFiles/DobotClient_P2P.dir/src/gohome.cpp.o"
	cd /home/chenway/Documents/test/build/dobot && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DobotClient_P2P.dir/src/gohome.cpp.o -c /home/chenway/Documents/test/src/dobot/src/gohome.cpp

dobot/CMakeFiles/DobotClient_P2P.dir/src/gohome.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DobotClient_P2P.dir/src/gohome.cpp.i"
	cd /home/chenway/Documents/test/build/dobot && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chenway/Documents/test/src/dobot/src/gohome.cpp > CMakeFiles/DobotClient_P2P.dir/src/gohome.cpp.i

dobot/CMakeFiles/DobotClient_P2P.dir/src/gohome.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DobotClient_P2P.dir/src/gohome.cpp.s"
	cd /home/chenway/Documents/test/build/dobot && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chenway/Documents/test/src/dobot/src/gohome.cpp -o CMakeFiles/DobotClient_P2P.dir/src/gohome.cpp.s

dobot/CMakeFiles/DobotClient_P2P.dir/src/gohome.cpp.o.requires:

.PHONY : dobot/CMakeFiles/DobotClient_P2P.dir/src/gohome.cpp.o.requires

dobot/CMakeFiles/DobotClient_P2P.dir/src/gohome.cpp.o.provides: dobot/CMakeFiles/DobotClient_P2P.dir/src/gohome.cpp.o.requires
	$(MAKE) -f dobot/CMakeFiles/DobotClient_P2P.dir/build.make dobot/CMakeFiles/DobotClient_P2P.dir/src/gohome.cpp.o.provides.build
.PHONY : dobot/CMakeFiles/DobotClient_P2P.dir/src/gohome.cpp.o.provides

dobot/CMakeFiles/DobotClient_P2P.dir/src/gohome.cpp.o.provides.build: dobot/CMakeFiles/DobotClient_P2P.dir/src/gohome.cpp.o


# Object files for target DobotClient_P2P
DobotClient_P2P_OBJECTS = \
"CMakeFiles/DobotClient_P2P.dir/src/gohome.cpp.o"

# External object files for target DobotClient_P2P
DobotClient_P2P_EXTERNAL_OBJECTS =

/home/chenway/Documents/test/devel/lib/dobot/DobotClient_P2P: dobot/CMakeFiles/DobotClient_P2P.dir/src/gohome.cpp.o
/home/chenway/Documents/test/devel/lib/dobot/DobotClient_P2P: dobot/CMakeFiles/DobotClient_P2P.dir/build.make
/home/chenway/Documents/test/devel/lib/dobot/DobotClient_P2P: /opt/ros/kinetic/lib/libroscpp.so
/home/chenway/Documents/test/devel/lib/dobot/DobotClient_P2P: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
/home/chenway/Documents/test/devel/lib/dobot/DobotClient_P2P: /usr/lib/x86_64-linux-gnu/libboost_signals.so
/home/chenway/Documents/test/devel/lib/dobot/DobotClient_P2P: /opt/ros/kinetic/lib/librosconsole.so
/home/chenway/Documents/test/devel/lib/dobot/DobotClient_P2P: /opt/ros/kinetic/lib/librosconsole_log4cxx.so
/home/chenway/Documents/test/devel/lib/dobot/DobotClient_P2P: /opt/ros/kinetic/lib/librosconsole_backend_interface.so
/home/chenway/Documents/test/devel/lib/dobot/DobotClient_P2P: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
/home/chenway/Documents/test/devel/lib/dobot/DobotClient_P2P: /usr/lib/x86_64-linux-gnu/libboost_regex.so
/home/chenway/Documents/test/devel/lib/dobot/DobotClient_P2P: /opt/ros/kinetic/lib/libxmlrpcpp.so
/home/chenway/Documents/test/devel/lib/dobot/DobotClient_P2P: /opt/ros/kinetic/lib/libroscpp_serialization.so
/home/chenway/Documents/test/devel/lib/dobot/DobotClient_P2P: /opt/ros/kinetic/lib/librostime.so
/home/chenway/Documents/test/devel/lib/dobot/DobotClient_P2P: /opt/ros/kinetic/lib/libcpp_common.so
/home/chenway/Documents/test/devel/lib/dobot/DobotClient_P2P: /usr/lib/x86_64-linux-gnu/libboost_system.so
/home/chenway/Documents/test/devel/lib/dobot/DobotClient_P2P: /usr/lib/x86_64-linux-gnu/libboost_thread.so
/home/chenway/Documents/test/devel/lib/dobot/DobotClient_P2P: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
/home/chenway/Documents/test/devel/lib/dobot/DobotClient_P2P: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
/home/chenway/Documents/test/devel/lib/dobot/DobotClient_P2P: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
/home/chenway/Documents/test/devel/lib/dobot/DobotClient_P2P: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/chenway/Documents/test/devel/lib/dobot/DobotClient_P2P: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so
/home/chenway/Documents/test/devel/lib/dobot/DobotClient_P2P: dobot/CMakeFiles/DobotClient_P2P.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/chenway/Documents/test/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/chenway/Documents/test/devel/lib/dobot/DobotClient_P2P"
	cd /home/chenway/Documents/test/build/dobot && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DobotClient_P2P.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
dobot/CMakeFiles/DobotClient_P2P.dir/build: /home/chenway/Documents/test/devel/lib/dobot/DobotClient_P2P

.PHONY : dobot/CMakeFiles/DobotClient_P2P.dir/build

dobot/CMakeFiles/DobotClient_P2P.dir/requires: dobot/CMakeFiles/DobotClient_P2P.dir/src/gohome.cpp.o.requires

.PHONY : dobot/CMakeFiles/DobotClient_P2P.dir/requires

dobot/CMakeFiles/DobotClient_P2P.dir/clean:
	cd /home/chenway/Documents/test/build/dobot && $(CMAKE_COMMAND) -P CMakeFiles/DobotClient_P2P.dir/cmake_clean.cmake
.PHONY : dobot/CMakeFiles/DobotClient_P2P.dir/clean

dobot/CMakeFiles/DobotClient_P2P.dir/depend:
	cd /home/chenway/Documents/test/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/chenway/Documents/test/src /home/chenway/Documents/test/src/dobot /home/chenway/Documents/test/build /home/chenway/Documents/test/build/dobot /home/chenway/Documents/test/build/dobot/CMakeFiles/DobotClient_P2P.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : dobot/CMakeFiles/DobotClient_P2P.dir/depend

