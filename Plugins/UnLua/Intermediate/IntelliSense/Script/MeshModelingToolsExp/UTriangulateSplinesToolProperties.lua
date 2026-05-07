---Parameters for controlling the spline triangulation
---@class UTriangulateSplinesToolProperties : UInteractiveToolPropertySet
---@field public ErrorTolerance number @How far to allow the triangulation boundary can deviate from the spline curve before we add more vertices
---@field public FlattenMethod EFlattenCurveMethod @Whether and how to flatten the curves. If curves are flattened, they can also be offset and combined
---@field public CombineMethod ECombineCurvesMethod @Whether or how to combine the curves
---@field public Thickness number @If > 0, Extrude the triangulation by this amount
---@field public bFlipResult boolean @Whether to flip the facing direction of the generated mesh
---@field public OpenCurves EOffsetOpenCurvesMethod @How to handle open curves: Either offset them, or treat them as closed curves
---@field public CurveOffset number @How much offset to apply to curves
---@field public OffsetClosedCurves EOffsetClosedCurvesMethod @Whether and how to apply offset to closed curves
---@field public EndShapes EOpenCurveEndShapes @The shape of the ends of offset curves
---@field public JoinMethod EOffsetJoinMethod @The shape of joins between segments of an offset curve
---@field public MiterLimit number @How far a miter join can extend before it is replaced by a square join
local UTriangulateSplinesToolProperties = {}

