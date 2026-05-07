---@class ULatticeControlPointsMechanic : UInteractionMechanic
---@field protected PreviewGeometryActor APreviewGeometryActor @Used for displaying points/segments
---@field protected DrawnControlPoints UPointSetComponent
---@field protected DrawnLatticeEdges ULineSetComponent
---@field protected PointTransformProxy UTransformProxy @Support for gizmo. Since the points aren't individual components, we don't actually use UTransformProxy for the transform forwarding- we just use it for the callbacks.
---@field protected PointTransformGizmo UCombinedTransformGizmo
---@field protected MarqueeMechanic URectangleMarqueeMechanic @Support for selection
local ULatticeControlPointsMechanic = {}

