---Base class for component specific functionality independent of the type of line stored in the component.
---@class UBasicTriangleSetComponentBase : UMeshComponent
---@field protected TriangleMaterial UMaterialInterface
---@field protected Bounds FBoxSphereBounds
---@field protected bBoundsDirty boolean
---@field protected Color FColor
---@field protected Normal FVector3f
local UBasicTriangleSetComponentBase = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UBasicTriangleSetComponentBase:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UBasicTriangleSetComponentBase:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UBasicTriangleSetComponentBase:AddAssetUserDataOfClass(InUserDataClass) end

