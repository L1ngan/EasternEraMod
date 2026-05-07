---AnimNotifies marked as BranchingPoints will create these markers on their Begin/End times.
---      They create stopping points when the Montage is being ticked to dispatch events.
---@class FBranchingPointMarker
---@field public NotifyIndex integer
---@field public TriggerTime number
---@field public NotifyEventType integer
local FBranchingPointMarker = {}
