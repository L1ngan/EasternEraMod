---A component that can run a camera asset inside its own camera evaluation context.
---@class UGameplayCameraComponentBase : USceneComponent
---@field public AutoActivateForPlayer integer @If AutoActivate is set, auto-activates this component's camera for the given player. This is equivalent to calling ActivateCameraForPlayerIndex on BeginPlay.
---@field public bSetControlRotationWhenViewTarget boolean @Specifies whether this component should set the player controller's control rotation to the computed point of view's orientation every frame. This is only used when a player controller is associated with this component, and the view target is that component.
---@field public bRunInEditor boolean @Whether to run this camera in editor.
---@field public EditorPreviewCameraRigIndex integer @The camera rig to run in the editor.
---@field private OutputCameraComponent UCineCameraComponent
local UGameplayCameraComponentBase = {}

---Gets the child camera component used as the "output" for the gameplay/procedural camera.
---@return UCineCameraComponent
function UGameplayCameraComponentBase:GetOutputCameraComponent() end

---Gets the shared camera evaluation data for this component's evaluation context.
---@return FBlueprintCameraEvaluationDataRef
function UGameplayCameraComponentBase:GetInitialResult() end

---Gets the camera evaluation data for a given sub-set of camera rigs in this component's evaluation context.
---@param Condition ECameraEvaluationDataCondition
---@return FBlueprintCameraEvaluationDataRef
function UGameplayCameraComponentBase:GetConditionalResult(Condition) end

---Deactivates the camera.
---                          deactivating. If true, any running camera rigs will be frozen or forcibly
---                          removed from the camera system.
---@param bImmediately boolean @[opt] 
function UGameplayCameraComponentBase:DeactivateCamera(bImmediately) end

---Activates the camera for the given player.
---                          and used when the player camera manager is running the camera system.
---                          Must be 'Push' otherwise, when this component runs as a standalone camera
---                          system.
---@param PlayerIndex integer
---@param bSetAsViewTarget boolean @[opt] 
---@param ActivationMode EGameplayCameraComponentActivationMode @[opt] 
function UGameplayCameraComponentBase:ActivateCameraForPlayerIndex(PlayerIndex, bSetAsViewTarget, ActivationMode) end

---Activates the camera for the given player.
---                          and used when the player camera manager is running the camera system.
---                          Must be 'Push' otherwise, when this component runs as a standalone camera
---                          system.
---@param PlayerController APlayerController
---@param bSetAsViewTarget boolean @[opt] 
---@param ActivationMode EGameplayCameraComponentActivationMode @[opt] 
function UGameplayCameraComponentBase:ActivateCameraForPlayerController(PlayerController, bSetAsViewTarget, ActivationMode) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UGameplayCameraComponentBase:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UGameplayCameraComponentBase:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UGameplayCameraComponentBase:AddAssetUserDataOfClass(InUserDataClass) end

