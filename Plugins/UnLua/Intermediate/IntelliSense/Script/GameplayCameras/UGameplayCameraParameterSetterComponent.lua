---@class UGameplayCameraParameterSetterComponent : UActorComponent
---@field public CameraRigReference FCameraRigAssetReference @The camera asset whose parameters to override.
---@field public BlendInTime number @The blend-in time.
---@field public BlendOutTime number @The blend-out time.
---@field public BlendType ECameraVariableSetterBlendType @The blend type.
local UGameplayCameraParameterSetterComponent = {}

---Stop setting parameters.
---@param bImmediately boolean @[opt] 
function UGameplayCameraParameterSetterComponent:StopParameterSetters(bImmediately) end

---Start setting parameters.
function UGameplayCameraParameterSetterComponent:StartParameterSetters() end

---@param OverlappedActor AActor
---@param OtherActor AActor
function UGameplayCameraParameterSetterComponent:OnActorEndOverlap(OverlappedActor, OtherActor) end

---@param OverlappedActor AActor
---@param OtherActor AActor
function UGameplayCameraParameterSetterComponent:OnActorBeginOverlap(OverlappedActor, OtherActor) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UGameplayCameraParameterSetterComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UGameplayCameraParameterSetterComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UGameplayCameraParameterSetterComponent:AddAssetUserDataOfClass(InUserDataClass) end

