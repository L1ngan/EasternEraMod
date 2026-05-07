---One or more instances of this component can be added to an actor (e.g. a static mesh actor blueprint),
---and should be placed at geometrically and visually distinct landmarks of the object.
---These 3d points will then be optionally used by any given nodal offset tool implementation to
---make a 3d-2d correspondence with the 2d points detected in the live action media.
---@class UCalibrationPointComponent : UProceduralMeshComponent
---@field public SubPoints TMap<string, FVector> @A way to group many points in a single component
---@field public bVisualizePointsInEditor boolean @Draws a visual representation of the calibration points
---@field public PointVisualizationScale number @Scales up/down the size of the point visualization meshes
---@field public VisualizationShape integer @Shape used to visualize the calibration (sub)points
local UCalibrationPointComponent = {}

---Rebuilds the point visualization.
function UCalibrationPointComponent:RebuildVertices() end

---Namespaces the given subpoint name. Does not check that the subpoint exists.
---@param InSubpointName string
---@param OutNamespacedName string @[out] 
---@return boolean
function UCalibrationPointComponent:NamespacedSubpointName(InSubpointName, OutNamespacedName) end

---Returns the World location of the subpoint (or the component) specified by name
---@param InPointName string
---@param OutLocation FVector @[out] 
---@return boolean
function UCalibrationPointComponent:GetWorldLocation(InPointName, OutLocation) end

---Gathers the namespaced names of the subpoints and the component itself.
---@param OutNamespacedNames TArray_string_ @[out] 
function UCalibrationPointComponent:GetNamespacedPointNames(OutNamespacedNames) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UCalibrationPointComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UCalibrationPointComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UCalibrationPointComponent:AddAssetUserDataOfClass(InUserDataClass) end

