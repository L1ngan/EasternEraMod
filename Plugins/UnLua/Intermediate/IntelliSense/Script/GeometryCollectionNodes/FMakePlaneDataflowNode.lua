---Make a plane
---@class FMakePlaneDataflowNode : FDataflowNode
---@field private BasePoint FVector @Base point
---@field private Normal FVector @Normal vector
---@field private DebugDrawRenderSettings FDataflowNodeDebugDrawSettings @DebugDraw settings
---@field private PlaneSizeMultiplier number
---@field private Plane FPlane @Output mesh
local FMakePlaneDataflowNode = {}
