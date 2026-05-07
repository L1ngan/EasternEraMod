---@class UGeomModifier_Pen : UGeomModifier_Edit
---@field public bAutoExtrude boolean @If true, the shape will be automatically extruded into a brush upon completion.
---@field public bCreateConvexPolygons boolean @If true, the tool will try and optimize the resulting triangles into convex polygons before creating the brush.
---@field public bCreateBrushShape boolean @If true, the resulting shape will be turned into an ABrushShape actor.
---@field public ExtrudeDepth integer @How far to extrude the newly created brush if bAutoExtrude is set to true.
---@field public ShapeVertices TArray<FVector> @The vertices that the user has dropped down in the world so far.
---@field public MouseWorldSpacePos FVector @The mouse position, in world space, where the user currently is hovering (snapped to grid if that setting is enabled).
local UGeomModifier_Pen = {}

