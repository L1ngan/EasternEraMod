---Remove FBranchingPoint when VER_UE4_MONTAGE_BRANCHING_POINT_REMOVAL is removed.
---@class FBranchingPoint : FAnimLinkableElement
---@field public EventName string
---@field public TriggerTimeOffset number @An offset from the DisplayTime to the actual time we will trigger the notify, as we cannot always trigger it exactly at the time the user wants
local FBranchingPoint = {}
