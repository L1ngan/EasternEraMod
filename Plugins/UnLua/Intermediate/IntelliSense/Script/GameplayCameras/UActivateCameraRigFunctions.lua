---Blueprint functions for activating camera rigs in the base/global/visual layers.
---These camera rigs run with a global, shared evaluation context that doesn't provide any
---meaningful initial result. They are activated on the camera system found to be running
---on the given player controller.
---@class UActivateCameraRigFunctions : UBlueprintFunctionLibrary
local UActivateCameraRigFunctions = {}

---Activates the given camera rig prefab in the visual layer.
---@param WorldContextObject UObject
---@param PlayerController APlayerController
---@param CameraRig UCameraRigAsset
function UActivateCameraRigFunctions.ActivatePersistentVisualCameraRig(WorldContextObject, PlayerController, CameraRig) end

---Activates the given camera rig prefab in the global layer.
---@param WorldContextObject UObject
---@param PlayerController APlayerController
---@param CameraRig UCameraRigAsset
function UActivateCameraRigFunctions.ActivatePersistentGlobalCameraRig(WorldContextObject, PlayerController, CameraRig) end

---Activates the given camera rig prefab in the base layer.
---@param WorldContextObject UObject
---@param PlayerController APlayerController
---@param CameraRig UCameraRigAsset
function UActivateCameraRigFunctions.ActivatePersistentBaseCameraRig(WorldContextObject, PlayerController, CameraRig) end

