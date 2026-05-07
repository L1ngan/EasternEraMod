---Properties of representation of an 'agent' (or Pawn) used by AI navigation/pathfinding.
---@class FNavAgentProperties : FMovementProperties
---@field public AgentRadius number @Radius of the capsule used for navigation/pathfinding.
---@field public AgentHeight number @Total height of the capsule used for navigation/pathfinding.
---@field public AgentStepHeight number @Step height to use, or -1 for default value from navdata's config.
---@field public NavWalkingSearchHeightScale number @Scale factor to apply to height of bounds when searching for navmesh to project to when nav walking
---@field public PreferredNavData FSoftClassPath @Type of navigation data used by agent, null means "any"
local FNavAgentProperties = {}
