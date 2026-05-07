---A player camera manager that runs the GameplayCameras camera system.
---Setting the view target does the following:
---- Push a new evaluation context for the provided view target actor.
---   - If that actor contains a GameplayCameraComponent, use its evaluation context directly.
---   - If that actor contains a CameraComponent, make an evaluation context that wraps it
---     and runs by simply copying that camera's properties (see FCameraActorCameraEvaluationContext).
---   - For other actors, do as above, but convert the output of the actor's CalcCamera function.
---- The old view target's evaluation context is immediately removed from the evaluation stack.
---  For other way to handle evaluation contexts, call methods directly on the camera system
---  evaluator instead of going through the base APlayerCameraManager class.
---There is only ever one active view target, the "pending" view target isn't used. This is
---because we may be blending between more than two camera rigs that may belong to more than
---two actors.
---@class AGameplayCamerasPlayerCameraManager : APlayerCameraManager
---@field public ViewRotationMode EGameplayCamerasViewRotationMode @The view rotation handling mode to use.
---@field public bOverrideViewRotationMode boolean @Whether the default view rotation mode setting should be overriden.
---@field private OriginalCameraManager APlayerCameraManager
local AGameplayCamerasPlayerCameraManager = {}

---@param InstanceID FCameraRigInstanceID
---@param bImmediately boolean @[opt] 
function AGameplayCamerasPlayerCameraManager:StopCameraModifierRig(InstanceID, bImmediately) end

---Replace the camera manager currently set on the provided controller with this camera manager.
---@param PlayerController APlayerController
function AGameplayCamerasPlayerCameraManager:StealPlayerController(PlayerController) end

---@param CameraRig UCameraRigAsset
---@param OrderKey integer @[opt] 
---@return FCameraRigInstanceID
function AGameplayCamerasPlayerCameraManager:StartVisualCameraModifierRig(CameraRig, OrderKey) end

---@param CameraRig UCameraRigAsset
---@param OrderKey integer @[opt] 
---@return FCameraRigInstanceID
function AGameplayCamerasPlayerCameraManager:StartGlobalCameraModifierRig(CameraRig, OrderKey) end

---Restore an originally stolen camera manager (see StealPlayerController).
function AGameplayCamerasPlayerCameraManager:ReleasePlayerController() end

