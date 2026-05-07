---Instantiation of a basic line set component in 3D using FVector3f for line positions.
---@class UBasic3DTriangleSetComponent : UBasicTriangleSetComponentBase
local UBasic3DTriangleSetComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UBasic3DTriangleSetComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UBasic3DTriangleSetComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UBasic3DTriangleSetComponent:AddAssetUserDataOfClass(InUserDataClass) end

