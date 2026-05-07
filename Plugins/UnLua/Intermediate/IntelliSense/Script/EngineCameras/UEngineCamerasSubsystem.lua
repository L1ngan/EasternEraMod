---World subsystem that holds global objects for handling camera animation sequences.
---@class UEngineCamerasSubsystem : UWorldSubsystem
local UEngineCamerasSubsystem = {}

---Stops the given camera animation instance.
---@param PlayerController APlayerController
---@param Handle FCameraAnimationHandle
---@param bImmediate boolean @[opt] 
function UEngineCamerasSubsystem:StopCameraAnimation(PlayerController, Handle, bImmediate) end

---Stop playing all instances of the given camera animation sequence.
---@param PlayerController APlayerController
---@param Sequence UCameraAnimationSequence
---@param bImmediate boolean @[opt] 
function UEngineCamerasSubsystem:StopAllCameraAnimationsOf(PlayerController, Sequence, bImmediate) end

---Stop all camera animation instances.
---@param PlayerController APlayerController
---@param bImmediate boolean @[opt] 
function UEngineCamerasSubsystem:StopAllCameraAnimations(PlayerController, bImmediate) end

---Play a new camera animation sequence.
---@param PlayerController APlayerController
---@param Sequence UCameraAnimationSequence
---@param Params FCameraAnimationParams
---@return FCameraAnimationHandle
function UEngineCamerasSubsystem:PlayCameraAnimation(PlayerController, Sequence, Params) end

---Returns whether the given camera animation is playing.
---@param PlayerController APlayerController
---@param Handle FCameraAnimationHandle
---@return boolean
function UEngineCamerasSubsystem:IsCameraAnimationActive(PlayerController, Handle) end

