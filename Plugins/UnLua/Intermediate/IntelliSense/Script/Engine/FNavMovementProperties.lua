---Struct to hold properties a user might set for navigation movement
---@class FNavMovementProperties
---@field public FixedPathBrakingDistance number @Braking distance override used with acceleration driven path following (bUseAccelerationForPaths)
---@field public bUpdateNavAgentWithOwnersCollision boolean @If set to true, NavAgentProperties' radius and height will be updated with Owner's collision capsule size
---@field public bUseAccelerationForPaths boolean @If set, pathfollowing will control character movement via acceleration values. If false, it will set velocities directly.
---@field public bUseFixedBrakingDistanceForPaths boolean @If set, FixedPathBrakingDistance will be used for path following deceleration
---@field public bStopMovementAbortPaths boolean @If set, StopActiveMovement call will abort current path following request
local FNavMovementProperties = {}
