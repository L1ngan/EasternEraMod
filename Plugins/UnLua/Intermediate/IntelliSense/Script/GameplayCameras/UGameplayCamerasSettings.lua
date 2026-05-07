---The settings for the Gameplay Cameras runtime.
---@class UGameplayCamerasSettings : UDeveloperSettings
---@field public bAutoBuildInPIE boolean @Build camera assets before using them in PIE, so that they automatically run with the latest user edits.
---@field public DefaultViewRotationMode EGameplayCamerasViewRotationMode @The default view rotation handling mode to use when the game's player controller uses a GameplayCamerasPlayerCameraManager instance as its camera manager.
---@field public CombinedCameraRigNumThreshold integer @The number of camera rigs combined in one frame past which the camera system emits a warning.
---@field public DefaultIKAimingAngleTolerance number @The default angle tolerance to accept an aiming operation.
---@field public DefaultIKAimingDistanceTolerance number @The default distance tolerance to accept an aiming operation.
---@field public DefaultIKAimingMaxIterations integer @The default number of iterations for an aiming operation.
---@field public DefaultIKAimingMinDistance number @The distance below which any IK aiming operation is disabled.
local UGameplayCamerasSettings = {}

