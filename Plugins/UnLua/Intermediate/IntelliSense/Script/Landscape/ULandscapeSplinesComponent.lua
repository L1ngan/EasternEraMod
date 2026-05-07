---ULandscapeSplinesComponent
---@class ULandscapeSplinesComponent : UPrimitiveComponent
---@field public SplineResolution number @Resolution of the spline, in distance per point
---@field public SplineColor FColor @Color to use to draw the splines
---@field public ControlPointSprite UTexture2D @Sprite used to draw control points
---@field public SplineEditorMesh UStaticMesh @Mesh used to draw splines that have no mesh
---@field public bShowSplineEditorMesh boolean @Whether we are in-editor and showing spline editor meshes
---@field protected ControlPoints TArray<ULandscapeSplineControlPoint>
---@field protected Segments TArray<ULandscapeSplineSegment>
---@field protected ForeignWorldSplineDataMap TMap<TSoftObjectPtr<UWorld>, FForeignWorldSplineData> @Serialized
---@field protected CookedForeignMeshComponents TArray<UMeshComponent> @References to components owned by landscape splines in other levels for cooked build (uncooked keeps references via ForeignWorldSplineDataMap)
local ULandscapeSplinesComponent = {}

---Get a list of spline mesh components representing this landscape spline (Editor only)
---@return TArray_USplineMeshComponent_
function ULandscapeSplinesComponent:GetSplineMeshComponents() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function ULandscapeSplinesComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function ULandscapeSplinesComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function ULandscapeSplinesComponent:AddAssetUserDataOfClass(InUserDataClass) end

