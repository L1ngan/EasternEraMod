---Base class for component specific functionality independent of the type of point stored in the component.
---@class UBasicPointSetComponentBase : UMeshComponent
---@field protected PointMaterial UMaterialInterface
---@field protected Bounds FBoxSphereBounds
---@field protected bBoundsDirty boolean
---@field protected Color FColor
---@field protected Size number
---@field protected DepthBias number
local UBasicPointSetComponentBase = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UBasicPointSetComponentBase:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UBasicPointSetComponentBase:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UBasicPointSetComponentBase:AddAssetUserDataOfClass(InUserDataClass) end

