---Chooses a method for actors to update overlap state (objects it is touching) on initialization, currently only used during level streaming.
---@class EActorUpdateOverlapsMethod
---@field public UseConfigDefault integer
---@field public AlwaysUpdate integer
---@field public OnlyUpdateMovable integer
---@field public NeverUpdate integer
---@field public EActorUpdateOverlapsMethod_MAX integer
local EActorUpdateOverlapsMethod = {}
