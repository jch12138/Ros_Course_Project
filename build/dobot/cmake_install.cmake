# Install script for directory: /home/chenway/Documents/test/src/dobot

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/chenway/Documents/test/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dobot/srv" TYPE FILE FILES
    "/home/chenway/Documents/test/src/dobot/srv/SetCmdTimeout.srv"
    "/home/chenway/Documents/test/src/dobot/srv/GetDeviceSN.srv"
    "/home/chenway/Documents/test/src/dobot/srv/SetDeviceName.srv"
    "/home/chenway/Documents/test/src/dobot/srv/GetDeviceName.srv"
    "/home/chenway/Documents/test/src/dobot/srv/GetDeviceVersion.srv"
    "/home/chenway/Documents/test/src/dobot/srv/GetPose.srv"
    "/home/chenway/Documents/test/src/dobot/srv/GetAlarmsState.srv"
    "/home/chenway/Documents/test/src/dobot/srv/ClearAllAlarmsState.srv"
    "/home/chenway/Documents/test/src/dobot/srv/SetHOMEParams.srv"
    "/home/chenway/Documents/test/src/dobot/srv/GetHOMEParams.srv"
    "/home/chenway/Documents/test/src/dobot/srv/SetHOMECmd.srv"
    "/home/chenway/Documents/test/src/dobot/srv/SetEndEffectorParams.srv"
    "/home/chenway/Documents/test/src/dobot/srv/GetEndEffectorParams.srv"
    "/home/chenway/Documents/test/src/dobot/srv/SetEndEffectorLaser.srv"
    "/home/chenway/Documents/test/src/dobot/srv/GetEndEffectorLaser.srv"
    "/home/chenway/Documents/test/src/dobot/srv/SetEndEffectorSuctionCup.srv"
    "/home/chenway/Documents/test/src/dobot/srv/GetEndEffectorSuctionCup.srv"
    "/home/chenway/Documents/test/src/dobot/srv/SetEndEffectorGripper.srv"
    "/home/chenway/Documents/test/src/dobot/srv/GetEndEffectorGripper.srv"
    "/home/chenway/Documents/test/src/dobot/srv/SetJOGJointParams.srv"
    "/home/chenway/Documents/test/src/dobot/srv/GetJOGJointParams.srv"
    "/home/chenway/Documents/test/src/dobot/srv/SetJOGCoordinateParams.srv"
    "/home/chenway/Documents/test/src/dobot/srv/GetJOGCoordinateParams.srv"
    "/home/chenway/Documents/test/src/dobot/srv/SetJOGCommonParams.srv"
    "/home/chenway/Documents/test/src/dobot/srv/GetJOGCommonParams.srv"
    "/home/chenway/Documents/test/src/dobot/srv/SetJOGCmd.srv"
    "/home/chenway/Documents/test/src/dobot/srv/SetPTPJointParams.srv"
    "/home/chenway/Documents/test/src/dobot/srv/GetPTPJointParams.srv"
    "/home/chenway/Documents/test/src/dobot/srv/SetPTPCoordinateParams.srv"
    "/home/chenway/Documents/test/src/dobot/srv/GetPTPCoordinateParams.srv"
    "/home/chenway/Documents/test/src/dobot/srv/SetPTPJumpParams.srv"
    "/home/chenway/Documents/test/src/dobot/srv/GetPTPJumpParams.srv"
    "/home/chenway/Documents/test/src/dobot/srv/SetPTPCommonParams.srv"
    "/home/chenway/Documents/test/src/dobot/srv/GetPTPCommonParams.srv"
    "/home/chenway/Documents/test/src/dobot/srv/SetPTPCmd.srv"
    "/home/chenway/Documents/test/src/dobot/srv/SetCPParams.srv"
    "/home/chenway/Documents/test/src/dobot/srv/GetCPParams.srv"
    "/home/chenway/Documents/test/src/dobot/srv/SetCPCmd.srv"
    "/home/chenway/Documents/test/src/dobot/srv/SetARCParams.srv"
    "/home/chenway/Documents/test/src/dobot/srv/GetARCParams.srv"
    "/home/chenway/Documents/test/src/dobot/srv/SetARCCmd.srv"
    "/home/chenway/Documents/test/src/dobot/srv/SetWAITCmd.srv"
    "/home/chenway/Documents/test/src/dobot/srv/SetTRIGCmd.srv"
    "/home/chenway/Documents/test/src/dobot/srv/SetIOMultiplexing.srv"
    "/home/chenway/Documents/test/src/dobot/srv/GetIOMultiplexing.srv"
    "/home/chenway/Documents/test/src/dobot/srv/SetIODO.srv"
    "/home/chenway/Documents/test/src/dobot/srv/GetIODO.srv"
    "/home/chenway/Documents/test/src/dobot/srv/SetIOPWM.srv"
    "/home/chenway/Documents/test/src/dobot/srv/GetIOPWM.srv"
    "/home/chenway/Documents/test/src/dobot/srv/GetIODI.srv"
    "/home/chenway/Documents/test/src/dobot/srv/GetIOADC.srv"
    "/home/chenway/Documents/test/src/dobot/srv/SetEMotor.srv"
    "/home/chenway/Documents/test/src/dobot/srv/GetInfraredSensor.srv"
    "/home/chenway/Documents/test/src/dobot/srv/SetInfraredSensor.srv"
    "/home/chenway/Documents/test/src/dobot/srv/SetColorSensor.srv"
    "/home/chenway/Documents/test/src/dobot/srv/GetColorSensor.srv"
    "/home/chenway/Documents/test/src/dobot/srv/SetQueuedCmdStartExec.srv"
    "/home/chenway/Documents/test/src/dobot/srv/SetQueuedCmdStopExec.srv"
    "/home/chenway/Documents/test/src/dobot/srv/SetQueuedCmdForceStopExec.srv"
    "/home/chenway/Documents/test/src/dobot/srv/SetQueuedCmdClear.srv"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dobot/cmake" TYPE FILE FILES "/home/chenway/Documents/test/build/dobot/catkin_generated/installspace/dobot-msg-paths.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/chenway/Documents/test/devel/include/dobot")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/chenway/Documents/test/devel/share/roseus/ros/dobot")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/chenway/Documents/test/devel/share/common-lisp/ros/dobot")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/chenway/Documents/test/devel/share/gennodejs/ros/dobot")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  execute_process(COMMAND "/usr/bin/python2" -m compileall "/home/chenway/Documents/test/devel/lib/python2.7/dist-packages/dobot")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/chenway/Documents/test/devel/lib/python2.7/dist-packages/dobot")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/chenway/Documents/test/build/dobot/catkin_generated/installspace/dobot.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dobot/cmake" TYPE FILE FILES "/home/chenway/Documents/test/build/dobot/catkin_generated/installspace/dobot-msg-extras.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dobot/cmake" TYPE FILE FILES
    "/home/chenway/Documents/test/build/dobot/catkin_generated/installspace/dobotConfig.cmake"
    "/home/chenway/Documents/test/build/dobot/catkin_generated/installspace/dobotConfig-version.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dobot" TYPE FILE FILES "/home/chenway/Documents/test/src/dobot/package.xml")
endif()

