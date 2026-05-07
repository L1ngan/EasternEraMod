---A camera modifier that plays camera animation sequences.
---@class UCameraAnimationCameraModifier : UCameraModifier
---@field protected ActiveAnimations TArray<FActiveCameraAnimationInfo> @List of active camera animation instances
---@field protected NextInstanceSerialNumber integer @Next serial number to use for a camera animation instance
local UCameraAnimationCameraModifier = {}

---Stops the given camera animation instance.
---@param Handle FCameraAnimationHandle
---@param bImmediate boolean @[opt] 
function UCameraAnimationCameraModifier:StopCameraAnimation(Handle, bImmediate) end

---Stop playing all instances of the given camera animation sequence.
---@param Sequence UCameraAnimationSequence
---@param bImmediate boolean @[opt] 
function UCameraAnimationCameraModifier:StopAllCameraAnimationsOf(Sequence, bImmediate) end

---Stop all camera animation instances.
---@param bImmediate boolean @[opt] 
function UCameraAnimationCameraModifier:StopAllCameraAnimations(bImmediate) end

---Play a new camera animation sequence.
---@param Sequence UCameraAnimationSequence
---@param Params FCameraAnimationParams
---@return FCameraAnimationHandle
function UCameraAnimationCameraModifier:PlayCameraAnimation(Sequence, Params) end

---Returns whether the given camera animation is playing.
---@param Handle FCameraAnimationHandle
---@return boolean
function UCameraAnimationCameraModifier:IsCameraAnimationActive(Handle) end

---@param PlayerController APlayerController
---@return UCameraAnimationCameraModifier
function UCameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromPlayerController(PlayerController) end

---@param WorldContextObject UObject
---@param ControllerID integer
---@return UCameraAnimationCameraModifier
function UCameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromID(WorldContextObject, ControllerID) end

---@param WorldContextObject UObject
---@param PlayerIndex integer
---@return UCameraAnimationCameraModifier
function UCameraAnimationCameraModifier.GetCameraAnimationCameraModifier(WorldContextObject, PlayerIndex) end

