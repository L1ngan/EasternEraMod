---A box generally used for simple collision. Bounds are rendered as lines in the editor.
---@class UBoxComponent : UShapeComponent
---@field protected BoxExtent FVector @The extents (radii dimensions) of the box *
local UBoxComponent = {}

---Change the box extent size. This is the unscaled size, before component scale is applied.
---@param InBoxExtent FVector
---@param bUpdateOverlaps boolean @[opt] 
function UBoxComponent:SetBoxExtent(InBoxExtent, bUpdateOverlaps) end

---
---@return FVector
function UBoxComponent:GetUnscaledBoxExtent() end

---
---@return FVector
function UBoxComponent:GetScaledBoxExtent() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UBoxComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UBoxComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UBoxComponent:AddAssetUserDataOfClass(InUserDataClass) end

