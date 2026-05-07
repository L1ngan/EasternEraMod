---Base class for a Blueprint camera director evaluator.
---@class UBlueprintCameraDirectorEvaluator : UObject
local UBlueprintCameraDirectorEvaluator = {}

---@param DeltaTime number
---@param ChildSlotName string
---@return boolean
function UBlueprintCameraDirectorEvaluator:RunChildCameraDirector(DeltaTime, ChildSlotName) end

---@param DeltaTime number
---@param EvaluationContextOwner UObject
---@param Params FBlueprintCameraDirectorEvaluationParams
function UBlueprintCameraDirectorEvaluator:RunCameraDirector(DeltaTime, EvaluationContextOwner, Params) end

---@param ChildEvaluationContextOwner UObject
---@param ChildSlotName string
---@return boolean
function UBlueprintCameraDirectorEvaluator:RemoveChildEvaluationContext(ChildEvaluationContextOwner, ChildSlotName) end

---Gets the shared evaluation context data.
---@return FBlueprintCameraEvaluationDataRef
function UBlueprintCameraDirectorEvaluator:GetInitialContextResult() end

---Gets the evaluation context data for a sub-set of camera rigs.
---@param Condition ECameraEvaluationDataCondition
---@return FBlueprintCameraEvaluationDataRef
function UBlueprintCameraDirectorEvaluator:GetConditionalContextResult(Condition) end

---A utility function that tries to find if an actor owns the evaluation context.
---Handles the situation where the evaluation context is an actor component (like a
---UGameplayCameraComponent) or an actor itself.
---@param ActorClass TSubclassOf_AActor_
---@return AActor
function UBlueprintCameraDirectorEvaluator:FindEvaluationContextOwnerActor(ActorClass) end

---Deactivates the given camera rig prefab in the visual layer.
---@param CameraRigPrefab UCameraRigAsset
function UBlueprintCameraDirectorEvaluator:DeactivatePersistentVisualCameraRig(CameraRigPrefab) end

---Deactivates the given camera rig prefab in the global layer.
---@param CameraRigPrefab UCameraRigAsset
function UBlueprintCameraDirectorEvaluator:DeactivatePersistentGlobalCameraRig(CameraRigPrefab) end

---Deactivates the given camera rig prefab in the base layer.
---@param CameraRigPrefab UCameraRigAsset
function UBlueprintCameraDirectorEvaluator:DeactivatePersistentBaseCameraRig(CameraRigPrefab) end

---@param EvaluationContextOwner UObject
---@param Params FBlueprintCameraDirectorDeactivateParams
function UBlueprintCameraDirectorEvaluator:DeactivateCameraDirector(EvaluationContextOwner, Params) end

---@param ChildEvaluationContextOwner UObject
---@return string
function UBlueprintCameraDirectorEvaluator:AddChildEvaluationContext(ChildEvaluationContextOwner) end

---Activates the given camera rig prefab in the visual layer.
---@param CameraRigPrefab UCameraRigAsset
function UBlueprintCameraDirectorEvaluator:ActivatePersistentVisualCameraRig(CameraRigPrefab) end

---Activates the given camera rig prefab in the global layer.
---@param CameraRigPrefab UCameraRigAsset
function UBlueprintCameraDirectorEvaluator:ActivatePersistentGlobalCameraRig(CameraRigPrefab) end

---Activates the given camera rig prefab in the base layer.
---@param CameraRigPrefab UCameraRigAsset
function UBlueprintCameraDirectorEvaluator:ActivatePersistentBaseCameraRig(CameraRigPrefab) end

---Specifies a camera rig to be active this frame, via a proxy which is later resolved
---via the proxy table of the Blueprint camera director.
---@param CameraRigProxy UCameraRigProxyAsset
---@param bForceNewInstance boolean @[opt] 
function UBlueprintCameraDirectorEvaluator:ActivateCameraRigViaProxy(CameraRigProxy, bForceNewInstance) end

---Specifies a camera rig to be active this frame.
---@param CameraRig UCameraRigAsset
---@param bForceNewInstance boolean @[opt] 
function UBlueprintCameraDirectorEvaluator:ActivateCameraRig(CameraRig, bForceNewInstance) end

---@param EvaluationContextOwner UObject
---@param Params FBlueprintCameraDirectorActivateParams
function UBlueprintCameraDirectorEvaluator:ActivateCameraDirector(EvaluationContextOwner, Params) end

