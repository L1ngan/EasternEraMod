---A capsule generally used for simple collision. Bounds are rendered as lines in the editor.
---@class UCapsuleComponent : UShapeComponent
---@field protected CapsuleHalfHeight number @Half-height, from center of capsule to the end of top or bottom hemisphere. This cannot be less than CapsuleRadius.
---@field protected CapsuleRadius number @Radius of cap hemispheres and center cylinder. This cannot be more than CapsuleHalfHeight.
local UCapsuleComponent = {}

---Change the capsule size. This is the unscaled size, before component scale is applied.
---@param InRadius number
---@param InHalfHeight number
---@param bUpdateOverlaps boolean @[opt] 
function UCapsuleComponent:SetCapsuleSize(InRadius, InHalfHeight, bUpdateOverlaps) end

---Set the capsule radius. This is the unscaled radius, before component scale is applied.
---If this capsule collides, updates touching array for owner actor.
---@param Radius number
---@param bUpdateOverlaps boolean @[opt] 
function UCapsuleComponent:SetCapsuleRadius(Radius, bUpdateOverlaps) end

---Set the capsule half-height. This is the unscaled half-height, before component scale is applied.
---If this capsule collides, updates touching array for owner actor.
---@param HalfHeight number
---@param bUpdateOverlaps boolean @[opt] 
function UCapsuleComponent:SetCapsuleHalfHeight(HalfHeight, bUpdateOverlaps) end

---Returns the capsule radius and half-height, ignoring component scaling. Half-height excludes the hemisphere end cap.
---@param OutRadius number @[out] 
---@param OutHalfHeightWithoutHemisphere number @[out] 
function UCapsuleComponent:GetUnscaledCapsuleSize_WithoutHemisphere(OutRadius, OutHalfHeightWithoutHemisphere) end

---Returns the capsule radius and half-height scaled by the component scale. Half-height includes the hemisphere end cap.
---@param OutRadius number @[out] 
---@param OutHalfHeight number @[out] 
function UCapsuleComponent:GetUnscaledCapsuleSize(OutRadius, OutHalfHeight) end

---Returns the capsule radius, ignoring component scaling.
---@return number
function UCapsuleComponent:GetUnscaledCapsuleRadius() end

---Returns the capsule half-height minus radius (to exclude the hemisphere), ignoring component scaling. This excludes the hemisphere end cap.
---From the center of the capsule this is the vertical distance along the straight cylindrical portion to the point just before the curve of top hemisphere begins.
---@return number
function UCapsuleComponent:GetUnscaledCapsuleHalfHeight_WithoutHemisphere() end

---Returns the capsule half-height, ignoring component scaling. This includes the hemisphere end cap.
---@return number
function UCapsuleComponent:GetUnscaledCapsuleHalfHeight() end

---Get the scale used by this shape. This is a uniform scale that is the minimum of any non-uniform scaling.
---@return number
function UCapsuleComponent:GetShapeScale() end

---Returns the capsule radius and half-height scaled by the component scale. Half-height excludes the hemisphere end cap.
---@param OutRadius number @[out] 
---@param OutHalfHeightWithoutHemisphere number @[out] 
function UCapsuleComponent:GetScaledCapsuleSize_WithoutHemisphere(OutRadius, OutHalfHeightWithoutHemisphere) end

---Returns the capsule radius and half-height scaled by the component scale. Half-height includes the hemisphere end cap.
---@param OutRadius number @[out] 
---@param OutHalfHeight number @[out] 
function UCapsuleComponent:GetScaledCapsuleSize(OutRadius, OutHalfHeight) end

---Returns the capsule radius scaled by the component scale.
---@return number
function UCapsuleComponent:GetScaledCapsuleRadius() end

---Returns the capsule half-height minus radius (to exclude the hemisphere), scaled by the component scale.
---From the center of the capsule this is the vertical distance along the straight cylindrical portion to the point just before the curve of top hemisphere begins.
---@return number
function UCapsuleComponent:GetScaledCapsuleHalfHeight_WithoutHemisphere() end

---Returns the capsule half-height scaled by the component scale. This includes both the cylinder and hemisphere cap.
---@return number
function UCapsuleComponent:GetScaledCapsuleHalfHeight() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UCapsuleComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UCapsuleComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UCapsuleComponent:AddAssetUserDataOfClass(InUserDataClass) end

