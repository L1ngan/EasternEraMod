---Base Tool for mesh sculpting tools, provides some shared functionality
---@class UMeshSculptToolBase : UMeshSurfacePointTool
---@field public BrushProperties USculptBrushProperties @Properties that control brush size/etc
---@field public GizmoProperties UWorkPlaneProperties @Properties for 3D workplane / gizmo
---@field protected BrushOpPropSets TMap<integer, UMeshSculptBrushOpProps>
---@field protected SecondaryBrushOpPropSets TMap<integer, UMeshSculptBrushOpProps>
---@field public ViewProperties UMeshEditingViewProperties
---@field public ActiveOverrideMaterial UMaterialInstanceDynamic
---@field protected BrushIndicator UBrushStampIndicator
---@field protected bIsVolumetricIndicator boolean
---@field protected BrushIndicatorMaterial UMaterialInstanceDynamic
---@field protected BrushIndicatorMesh UPreviewMesh
---@field public PlaneTransformGizmo UCombinedTransformGizmo @plane gizmo
---@field public PlaneTransformProxy UTransformProxy
local UMeshSculptToolBase = {}

