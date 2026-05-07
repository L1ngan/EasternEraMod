---@class UCrowdManager : UCrowdManagerBase
---@field protected MyNavData ANavigationData
---@field protected AvoidanceConfig TArray<FCrowdAvoidanceConfig> @obstacle avoidance params
---@field protected SamplingPatterns TArray<FCrowdAvoidanceSamplingPattern> @obstacle avoidance params
---@field protected MaxAgents integer @max number of agents supported by crowd
---@field protected MaxAgentRadius number @max radius of agent that can be added to crowd
---@field protected MaxAvoidedAgents integer @max number of neighbor agents for velocity avoidance
---@field protected MaxAvoidedWalls integer @max number of wall segments for velocity avoidance
---@field protected NavmeshCheckInterval number @how often should agents check their position after moving off navmesh?
---@field protected PathOptimizationInterval number @how often should agents try to optimize their paths?
---@field protected SeparationDirClamp number @clamp separation force to left/right when neighbor is behind (dot between forward and dirToNei, -1 = disabled)
---@field protected PathOffsetRadiusMultiplier number @agent radius multiplier for offsetting path around corners
---@field protected bResolveCollisions boolean @should crowd simulation resolve collisions between agents? if not, this will be handled by their movement components
local UCrowdManager = {}

