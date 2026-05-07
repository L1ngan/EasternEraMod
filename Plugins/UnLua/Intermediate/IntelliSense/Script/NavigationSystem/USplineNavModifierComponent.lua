---Used to assign a chosen NavArea to the nav mesh in the vicinity of a chosen spline.
---A tube is constructed around the spline and intersected with the nav mesh. Set its dimensions with StrokeWidth and StrokeHeight.
---@class USplineNavModifierComponent : UNavModifierComponent
---@field private bUpdateNavDataOnSplineChange boolean @If true, any changes to Spline Components on this actor will cause this component to update the nav mesh. This will be slow if the spline has many points, or the nav mesh is sufficiently large.
---@field private AttachedSpline FComponentReference @The SplineComponent which will modify the nav mesh; it must also be attached to this component's owner actor
---@field private StrokeWidth number @Cross-sectional width of the tube enclosing the spline
---@field private StrokeHeight number @Cross-sectional height of the tube enclosing the spline
---@field private SubdivisionLOD ESubdivisionLOD @Higher LOD will capture finer details in the spline
local USplineNavModifierComponent = {}

---Recalculates bounds, then re-computes the NavModifierVolumes and re-marks the nav mesh.
---Disable UpdateNavDataOnSplineChange and use this to manually update when either the spline or nav mesh is too large to handle rapid updates.
---Does nothing in non-editor builds
function USplineNavModifierComponent:UpdateNavigationWithComponentData() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function USplineNavModifierComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function USplineNavModifierComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function USplineNavModifierComponent:AddAssetUserDataOfClass(InUserDataClass) end

