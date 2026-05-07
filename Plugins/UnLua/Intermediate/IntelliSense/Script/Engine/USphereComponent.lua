---A sphere generally used for simple collision. Bounds are rendered as lines in the editor.
---@class USphereComponent : UShapeComponent
---@field protected SphereRadius number @The radius of the sphere *
local USphereComponent = {}

---Change the sphere radius. This is the unscaled radius, before component scale is applied.
---@param InSphereRadius number
---@param bUpdateOverlaps boolean @[opt] 
function USphereComponent:SetSphereRadius(InSphereRadius, bUpdateOverlaps) end

---
---@return number
function USphereComponent:GetUnscaledSphereRadius() end

---Get the scale used by this shape. This is a uniform scale that is the minimum of any non-uniform scaling.
---@return number
function USphereComponent:GetShapeScale() end

---
---@return number
function USphereComponent:GetScaledSphereRadius() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function USphereComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function USphereComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function USphereComponent:AddAssetUserDataOfClass(InUserDataClass) end

