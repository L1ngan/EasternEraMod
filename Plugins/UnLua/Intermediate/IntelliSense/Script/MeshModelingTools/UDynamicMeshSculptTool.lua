---Dynamic Mesh Sculpt Tool Class
---@class UDynamicMeshSculptTool : UMeshSurfacePointTool
---@field public BrushProperties UDynamicMeshBrushProperties @Properties that control brush size/etc
---@field public SculptProperties UDynamicMeshBrushSculptProperties @Properties that control sculpting
---@field public SculptMaxBrushProperties USculptMaxBrushProperties
---@field public KelvinBrushProperties UKelvinBrushProperties
---@field public RemeshProperties UBrushRemeshProperties @Properties that control dynamic remeshing
---@field public GizmoProperties UFixedPlaneBrushProperties
---@field public ViewProperties UMeshEditingViewProperties
---@field public SculptToolActions UDynamicSculptToolActions
---@field private BrushIndicator UBrushStampIndicator
---@field private BrushIndicatorMaterial UMaterialInstanceDynamic
---@field private BrushIndicatorMesh UPreviewMesh
---@field private PreviewMeshActor AInternalToolFrameworkActor
---@field private DynamicMeshComponent UOctreeDynamicMeshComponent
---@field private ActiveOverrideMaterial UMaterialInstanceDynamic
---@field private PlaneTransformGizmo UCombinedTransformGizmo @plane gizmo
---@field private PlaneTransformProxy UTransformProxy
local UDynamicMeshSculptTool = {}

