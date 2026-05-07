---Used to provide an extended particle system component to allow collision to function in the preview window.
---@class UCascadeParticleSystemComponent : UParticleSystemComponent
local UCascadeParticleSystemComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UCascadeParticleSystemComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UCascadeParticleSystemComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UCascadeParticleSystemComponent:AddAssetUserDataOfClass(InUserDataClass) end

