---A component for rendering an arbitrary assortment of triangles. Suitable, for instance, for rendering highlighted faces.
---@class UTriangleSetComponent : UMeshComponent
---@field private Bounds FBoxSphereBounds
---@field private bBoundsDirty boolean
local UTriangleSetComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UTriangleSetComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UTriangleSetComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UTriangleSetComponent:AddAssetUserDataOfClass(InUserDataClass) end

