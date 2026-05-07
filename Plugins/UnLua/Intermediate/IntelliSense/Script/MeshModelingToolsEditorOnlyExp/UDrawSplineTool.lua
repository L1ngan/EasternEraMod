---@class UDrawSplineTool : UInteractiveTool
---@field private Settings UDrawSplineToolProperties
---@field private ClickOrDragBehavior USingleClickOrDragInputBehavior
---@field private PlaneMechanic UConstructionPlaneMechanic
---@field private PreviewActor AActor @The preview actor is either a APreviewGeometryActor with a spline, or a duplicate of some target blueprint actor so that we can see the effects of the drawn spline immediately.
---@field private PreviousTargetActor AActor @Used to restore visibility of previous actor when switching to a different one, and to avoid switching  target actors if the new value is invalid (e.g., user clicked the preview actor with the actor picker)
local UDrawSplineTool = {}

