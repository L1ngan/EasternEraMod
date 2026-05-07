---@class FChaosCrumblingEvent
---@field public Component UPrimitiveComponent @primitive component involved in the crumble event
---@field public Location FVector @World location of the crumbling cluster
---@field public Orientation FQuat @World orientation of the crumbling cluster
---@field public LinearVelocity FVector @Linear Velocity of the crumbling cluster
---@field public AngularVelocity FVector @Angular Velocity of the crumbling cluster
---@field public Mass number @Mass of the crumbling cluster
---@field public LocalBounds FBox @Local bounding box of the crumbling cluster
---@field public Children TArray<integer> @List of children indices released (optional : see geometry collection component bCrumblingEventIncludesChildren)
local FChaosCrumblingEvent = {}
