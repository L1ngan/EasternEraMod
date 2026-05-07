---Move To task node.
---Moves the AI pawn toward the specified Actor or Location blackboard entry using the navigation system.
---@class UBTTask_MoveTo : UBTTask_BlackboardBase
---@field public AcceptableRadius FValueOrBBKey_Float @fixed distance added to threshold between AI and goal location in destination reach test
---@field public FilterClass FValueOrBBKey_Class @"None" will result in default filter being used
---@field public ObservedBlackboardValueTolerance FValueOrBBKey_Float @if task is expected to react to changes to location represented by BB key     this property can be used to tweak sensitivity of the mechanism. Value is     recommended to be less than AcceptableRadius
---@field public bAllowStrafe FValueOrBBKey_Bool
---@field public bAllowPartialPath FValueOrBBKey_Bool @if set, use incomplete path when goal can't be reached
---@field public bTrackMovingGoal FValueOrBBKey_Bool @if set, path to goal actor will update itself when actor moves
---@field public bRequireNavigableEndLocation FValueOrBBKey_Bool @if set, the goal location will need to be navigable
---@field public bProjectGoalLocation FValueOrBBKey_Bool @if set, goal location will be projected on navigation data (navmesh) before using
---@field public bReachTestIncludesAgentRadius FValueOrBBKey_Bool @if set, radius of AI's capsule will be added to threshold between AI and goal location in destination reach test
---@field public bReachTestIncludesGoalRadius FValueOrBBKey_Bool @if set, radius of goal's capsule will be added to threshold between AI and goal location in destination reach test
---@field public bStartFromPreviousPath FValueOrBBKey_Bool @if set, the path request will start from the end of the previous path (if any), and the generated path will be merged with the remaining points of the previous path
---@field public bObserveBlackboardValue boolean
local UBTTask_MoveTo = {}

