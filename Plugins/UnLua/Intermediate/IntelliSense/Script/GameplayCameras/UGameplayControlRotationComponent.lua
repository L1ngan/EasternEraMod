---An example component that works with the GameplayCameraComponent to manage a player's
---control rotation when the camera changes or moves in a way that was not initiated
---by the player themselves.
---@class UGameplayControlRotationComponent : UActorComponent
---@field public AxisActions TArray<UInputAction> @The axis input action(s) to read from.
---@field public AxisActionAngularSpeedThreshold number @The angular speed, in degrees per second, past which a change in the player input will thaw a frozen control rotation.
---@field public AxisActionMagnitudeThreshold number @The player input magnitude under which the frozen control rotation is thawed.
---@field public AutoActivateForPlayer integer @If AutoActivate is set, auto-activates control rotation management for the given player. This is equivalent to calling ActivateControlRotationManagement on BeginPlay.
---@field private PlayerController APlayerController
---@field private CameraSystemHost TScriptInterface<UGameplayCameraSystemHost>
local UGameplayControlRotationComponent = {}

---Deactivates management of a player controller's control rotation.
function UGameplayControlRotationComponent:DeactivateControlRotationManagement() end

---Activates management of a player controller's control rotation. The component will set
---the control rotation every frame based on the latest camera system update.
---@param PlayerIndex integer
function UGameplayControlRotationComponent:ActivateControlRotationManagementForPlayerIndex(PlayerIndex) end

---Activates management of a player controller's control rotation. The component will set
---the control rotation every frame based on the latest camera system update.
---@param PlayerController APlayerController
function UGameplayControlRotationComponent:ActivateControlRotationManagementForPlayerController(PlayerController) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UGameplayControlRotationComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UGameplayControlRotationComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UGameplayControlRotationComponent:AddAssetUserDataOfClass(InUserDataClass) end

