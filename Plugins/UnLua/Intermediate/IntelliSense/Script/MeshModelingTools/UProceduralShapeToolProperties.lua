---@class UProceduralShapeToolProperties : UInteractiveToolPropertySet
---@field public PolygroupMode EMakeMeshPolygroupMode @How PolyGroups are assigned to shape primitives.
---@field public TargetSurface EMakeMeshPlacementType @How the shape is placed in the scene.
---@field public PivotLocation EMakeMeshPivotLocation @Location of pivot within the shape
---@field public Rotation number @Initial rotation of the shape around its up axis, before placement. After placement, use the gizmo to control rotation.
---@field public bAlignToNormal boolean @If true, aligns the shape along the normal of the surface it is placed on.
---@field public bShowGizmo boolean @Show a gizmo to allow the mesh to be repositioned after the initial placement click.
---@field public bShowGizmoOptions boolean
local UProceduralShapeToolProperties = {}

