---A spot light component emits a directional cone shaped light (Eg a Torch).
---@class USpotLightComponent : UPointLightComponent
---@field public InnerConeAngle number @Degrees.
---@field public OuterConeAngle number @Degrees.
local USpotLightComponent = {}

---@param NewOuterConeAngle number
function USpotLightComponent:SetOuterConeAngle(NewOuterConeAngle) end

---@param NewInnerConeAngle number
function USpotLightComponent:SetInnerConeAngle(NewInnerConeAngle) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function USpotLightComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function USpotLightComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function USpotLightComponent:AddAssetUserDataOfClass(InUserDataClass) end

