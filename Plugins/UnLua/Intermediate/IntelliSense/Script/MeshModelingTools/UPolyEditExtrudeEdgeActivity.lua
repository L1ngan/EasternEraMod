---Extrudes boundary edges.
---@class UPolyEditExtrudeEdgeActivity : UInteractiveToolActivity
---@field private Settings UPolyEditExtrudeEdgeActivityProperties
---@field private ActivityContext UPolyEditActivityContext
---@field private ExtrudeFrameProxy UTransformProxy @Support for gizmos.
---@field private ExtrudeFrameGizmo UCombinedTransformGizmo
---@field private SingleDirectionProxy UTransformProxy
---@field private SingleDirectionGizmo UCombinedTransformGizmo
---@field private PreviewGeometry UPreviewGeometry @Used for drawing the boundaries of the new faces to make them look similar to the rest of the mesh.
local UPolyEditExtrudeEdgeActivity = {}

