---Instantiation of a basic line set component in 2D using FVector2f for line positions.
---@class UBasic2DTriangleSetComponent : UBasicTriangleSetComponentBase
local UBasic2DTriangleSetComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UBasic2DTriangleSetComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UBasic2DTriangleSetComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UBasic2DTriangleSetComponent:AddAssetUserDataOfClass(InUserDataClass) end

