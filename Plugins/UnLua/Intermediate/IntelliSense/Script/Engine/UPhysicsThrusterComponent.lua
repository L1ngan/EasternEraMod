---Used with objects that have physics to apply a force down the negative-X direction
---ie. point X in the direction you want the thrust in.
---@class UPhysicsThrusterComponent : USceneComponent
---@field public ThrustStrength number @Strength of thrust force applied to the base object.
local UPhysicsThrusterComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UPhysicsThrusterComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UPhysicsThrusterComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UPhysicsThrusterComponent:AddAssetUserDataOfClass(InUserDataClass) end

