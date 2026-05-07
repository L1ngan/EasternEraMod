---A component that hosts a camera system.
---@class UGameplayCameraSystemComponent : USceneComponent
---@field public AutoActivateForPlayer integer @If AutoActivate is set, auto-activates the camera system for the given player. This sets this actor as the view target, and is equivalent to calling ActivateCameraSystem on BeginPlay.
---@field public bSetPlayerControllerRotation boolean @If enabled, sets the evaluated camera orientation as the player controller rotation every frame. This is set on the player controller that this component was activated for.
---@field private WeakPlayerController TWeakObjectPtr<APlayerController>
---@field private EditorSpriteTextureScale number @Sprite scaling for the editor.
local UGameplayCameraSystemComponent = {}

---@param InstanceID FCameraRigInstanceID
---@param bImmediately boolean @[opt] 
function UGameplayCameraSystemComponent:StopCameraModifierRig(InstanceID, bImmediately) end

---@param CameraRig UCameraRigAsset
---@param OrderKey integer @[opt] 
---@return FCameraRigInstanceID
function UGameplayCameraSystemComponent:StartVisualCameraModifierRig(CameraRig, OrderKey) end

---@param CameraRig UCameraRigAsset
---@param OrderKey integer @[opt] 
---@return FCameraRigInstanceID
function UGameplayCameraSystemComponent:StartGlobalCameraModifierRig(CameraRig, OrderKey) end

---Returns whether this component's actor is set as the view target for the given player.
---@param PlayerController APlayerController
---@return boolean
function UGameplayCameraSystemComponent:IsCameraSystemActiveForPlayController(PlayerController) end

---Removes this component's actor from being the view target.
---@param NextViewTarget AActor @[opt] 
function UGameplayCameraSystemComponent:DeactivateCameraSystem(NextViewTarget) end

---Sets this component's actor as the view target for the given player.
---@param PlayerIndex integer
function UGameplayCameraSystemComponent:ActivateCameraSystemForPlayerIndex(PlayerIndex) end

---Sets this component's actor as the view target for the given player.
---@param PlayerController APlayerController
function UGameplayCameraSystemComponent:ActivateCameraSystemForPlayerController(PlayerController) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UGameplayCameraSystemComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UGameplayCameraSystemComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UGameplayCameraSystemComponent:AddAssetUserDataOfClass(InUserDataClass) end

