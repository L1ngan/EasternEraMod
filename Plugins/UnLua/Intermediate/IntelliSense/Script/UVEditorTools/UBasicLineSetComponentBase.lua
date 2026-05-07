---Base class for component specific functionality independent of the type of line stored in the component.
---@class UBasicLineSetComponentBase : UMeshComponent
---@field protected LineMaterial UMaterialInterface
---@field protected Bounds FBoxSphereBounds
---@field protected bBoundsDirty boolean
---@field protected Color FColor
---@field protected Size number
---@field protected DepthBias number
local UBasicLineSetComponentBase = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UBasicLineSetComponentBase:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UBasicLineSetComponentBase:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UBasicLineSetComponentBase:AddAssetUserDataOfClass(InUserDataClass) end

