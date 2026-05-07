---@class USpaceCurveDeformationMechanic : UInteractionMechanic
---@field public ClickBehavior USingleClickInputBehavior @Behaviors used for moving points around and hovering them
---@field public HoverBehavior UMouseHoverBehavior
---@field public TransformProperties USpaceCurveDeformationMechanicPropertySet
---@field protected PreviewGeometryActor APreviewGeometryActor @Used for displaying points/segments
---@field protected RenderPoints UPointSetComponent
---@field protected RenderSegments ULineSetComponent
---@field protected PointTransformProxy UTransformProxy @Support for gizmo. Since the points aren't individual components, we don't actually use UTransformProxy for the transform forwarding- we just use it for the callbacks.
---@field protected PointTransformGizmo UCombinedTransformGizmo
local USpaceCurveDeformationMechanic = {}

