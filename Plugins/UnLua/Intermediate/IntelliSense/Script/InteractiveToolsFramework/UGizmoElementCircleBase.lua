---Abstract base object for circle, torus and arc.
---@class UGizmoElementCircleBase : UGizmoElementLineBase
---@field protected Center FVector @CircleBase center.
---@field protected Axis0 FVector @Axis0 of plane in which circle lies, must perpendicular to normal. Start and end angles for partial circles are relative to this axis.
---@field protected Axis1 FVector @Axis1 of plane in which circle lies, must perpendicular to Axis0.
---@field protected Radius number @Radius of main circle, some derived elements have inner radius (e.g. torus and arc)
---@field protected NumSegments integer @Number of segments for rendering arc.
---@field protected PartialType EGizmoElementPartialType @True when the arc is not full.
---@field protected PartialStartAngle number @Start angle to render for partial torus
---@field protected PartialEndAngle number @End angle to render for partial torus
---@field protected PartialViewDependentMaxCosTol number @For PartialViewDependent, max cosine of angle between the normal and view direction Within this tolerance, the arc will be rendered as full rather than partial
local UGizmoElementCircleBase = {}

