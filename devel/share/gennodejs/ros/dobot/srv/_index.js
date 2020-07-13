
"use strict";

let SetHOMECmd = require('./SetHOMECmd.js')
let SetCPCmd = require('./SetCPCmd.js')
let SetPTPCmd = require('./SetPTPCmd.js')
let GetDeviceSN = require('./GetDeviceSN.js')
let SetIOPWM = require('./SetIOPWM.js')
let GetDeviceName = require('./GetDeviceName.js')
let SetEndEffectorSuctionCup = require('./SetEndEffectorSuctionCup.js')
let SetCPParams = require('./SetCPParams.js')
let GetAlarmsState = require('./GetAlarmsState.js')
let GetPTPCoordinateParams = require('./GetPTPCoordinateParams.js')
let SetIODO = require('./SetIODO.js')
let ClearAllAlarmsState = require('./ClearAllAlarmsState.js')
let GetIODO = require('./GetIODO.js')
let SetHOMEParams = require('./SetHOMEParams.js')
let SetARCCmd = require('./SetARCCmd.js')
let SetPTPJointParams = require('./SetPTPJointParams.js')
let SetTRIGCmd = require('./SetTRIGCmd.js')
let GetPTPCommonParams = require('./GetPTPCommonParams.js')
let GetEndEffectorGripper = require('./GetEndEffectorGripper.js')
let GetIOPWM = require('./GetIOPWM.js')
let SetJOGJointParams = require('./SetJOGJointParams.js')
let GetEndEffectorSuctionCup = require('./GetEndEffectorSuctionCup.js')
let SetColorSensor = require('./SetColorSensor.js')
let GetPTPJumpParams = require('./GetPTPJumpParams.js')
let GetPTPJointParams = require('./GetPTPJointParams.js')
let GetIODI = require('./GetIODI.js')
let SetJOGCoordinateParams = require('./SetJOGCoordinateParams.js')
let GetInfraredSensor = require('./GetInfraredSensor.js')
let SetQueuedCmdStopExec = require('./SetQueuedCmdStopExec.js')
let SetJOGCommonParams = require('./SetJOGCommonParams.js')
let GetEndEffectorLaser = require('./GetEndEffectorLaser.js')
let SetQueuedCmdClear = require('./SetQueuedCmdClear.js')
let SetIOMultiplexing = require('./SetIOMultiplexing.js')
let SetWAITCmd = require('./SetWAITCmd.js')
let GetJOGCoordinateParams = require('./GetJOGCoordinateParams.js')
let SetEndEffectorGripper = require('./SetEndEffectorGripper.js')
let SetQueuedCmdStartExec = require('./SetQueuedCmdStartExec.js')
let GetColorSensor = require('./GetColorSensor.js')
let GetCPCmd = require('./GetCPCmd.js')
let SetPTPJumpParams = require('./SetPTPJumpParams.js')
let SetJOGCmd = require('./SetJOGCmd.js')
let SetEndEffectorParams = require('./SetEndEffectorParams.js')
let SetQueuedCmdForceStopExec = require('./SetQueuedCmdForceStopExec.js')
let GetJOGCommonParams = require('./GetJOGCommonParams.js')
let SetInfraredSensor = require('./SetInfraredSensor.js')
let GetIOMultiplexing = require('./GetIOMultiplexing.js')
let GetHOMEParams = require('./GetHOMEParams.js')
let SetPTPCommonParams = require('./SetPTPCommonParams.js')
let SetDeviceName = require('./SetDeviceName.js')
let GetDeviceVersion = require('./GetDeviceVersion.js')
let GetCPParams = require('./GetCPParams.js')
let SetCmdTimeout = require('./SetCmdTimeout.js')
let GetEndEffectorParams = require('./GetEndEffectorParams.js')
let SetARCParams = require('./SetARCParams.js')
let SetPTPCoordinateParams = require('./SetPTPCoordinateParams.js')
let SetEndEffectorLaser = require('./SetEndEffectorLaser.js')
let SetEMotor = require('./SetEMotor.js')
let GetARCParams = require('./GetARCParams.js')
let GetJOGJointParams = require('./GetJOGJointParams.js')
let GetIOADC = require('./GetIOADC.js')
let GetPose = require('./GetPose.js')

module.exports = {
  SetHOMECmd: SetHOMECmd,
  SetCPCmd: SetCPCmd,
  SetPTPCmd: SetPTPCmd,
  GetDeviceSN: GetDeviceSN,
  SetIOPWM: SetIOPWM,
  GetDeviceName: GetDeviceName,
  SetEndEffectorSuctionCup: SetEndEffectorSuctionCup,
  SetCPParams: SetCPParams,
  GetAlarmsState: GetAlarmsState,
  GetPTPCoordinateParams: GetPTPCoordinateParams,
  SetIODO: SetIODO,
  ClearAllAlarmsState: ClearAllAlarmsState,
  GetIODO: GetIODO,
  SetHOMEParams: SetHOMEParams,
  SetARCCmd: SetARCCmd,
  SetPTPJointParams: SetPTPJointParams,
  SetTRIGCmd: SetTRIGCmd,
  GetPTPCommonParams: GetPTPCommonParams,
  GetEndEffectorGripper: GetEndEffectorGripper,
  GetIOPWM: GetIOPWM,
  SetJOGJointParams: SetJOGJointParams,
  GetEndEffectorSuctionCup: GetEndEffectorSuctionCup,
  SetColorSensor: SetColorSensor,
  GetPTPJumpParams: GetPTPJumpParams,
  GetPTPJointParams: GetPTPJointParams,
  GetIODI: GetIODI,
  SetJOGCoordinateParams: SetJOGCoordinateParams,
  GetInfraredSensor: GetInfraredSensor,
  SetQueuedCmdStopExec: SetQueuedCmdStopExec,
  SetJOGCommonParams: SetJOGCommonParams,
  GetEndEffectorLaser: GetEndEffectorLaser,
  SetQueuedCmdClear: SetQueuedCmdClear,
  SetIOMultiplexing: SetIOMultiplexing,
  SetWAITCmd: SetWAITCmd,
  GetJOGCoordinateParams: GetJOGCoordinateParams,
  SetEndEffectorGripper: SetEndEffectorGripper,
  SetQueuedCmdStartExec: SetQueuedCmdStartExec,
  GetColorSensor: GetColorSensor,
  GetCPCmd: GetCPCmd,
  SetPTPJumpParams: SetPTPJumpParams,
  SetJOGCmd: SetJOGCmd,
  SetEndEffectorParams: SetEndEffectorParams,
  SetQueuedCmdForceStopExec: SetQueuedCmdForceStopExec,
  GetJOGCommonParams: GetJOGCommonParams,
  SetInfraredSensor: SetInfraredSensor,
  GetIOMultiplexing: GetIOMultiplexing,
  GetHOMEParams: GetHOMEParams,
  SetPTPCommonParams: SetPTPCommonParams,
  SetDeviceName: SetDeviceName,
  GetDeviceVersion: GetDeviceVersion,
  GetCPParams: GetCPParams,
  SetCmdTimeout: SetCmdTimeout,
  GetEndEffectorParams: GetEndEffectorParams,
  SetARCParams: SetARCParams,
  SetPTPCoordinateParams: SetPTPCoordinateParams,
  SetEndEffectorLaser: SetEndEffectorLaser,
  SetEMotor: SetEMotor,
  GetARCParams: GetARCParams,
  GetJOGJointParams: GetJOGJointParams,
  GetIOADC: GetIOADC,
  GetPose: GetPose,
};
