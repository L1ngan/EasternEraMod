---@class ULineSetComponent : UMeshComponent
---@field private LineMaterial UMaterialInterface
---@field private Bounds FBoxSphereBounds
---@field private bBoundsDirty boolean
local ULineSetComponent = {}

---Specify material which handles lines
---@param InLineMaterial UMaterialInterface
function ULineSetComponent:SetLineMaterial(InLineMaterial) end

---Clear the line set
function ULineSetComponent:Clear() end

---Add lines to be rendered using the component.
---@param InStart TArray_FVector_
---@param InEnd TArray_FVector_
---@param InColor FColor @[opt] 
---@param InThickness number @[opt] 
---@param InDepthBias number @[opt] 
---@return integer
function ULineSetComponent:AddLines(InStart, InEnd, InColor, InThickness, InDepthBias) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function ULineSetComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function ULineSetComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function ULineSetComponent:AddAssetUserDataOfClass(InUserDataClass) end

