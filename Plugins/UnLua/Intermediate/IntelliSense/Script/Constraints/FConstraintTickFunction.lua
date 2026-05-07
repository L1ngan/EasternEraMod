---FConstraintTickFunction
---Represents the interface of constraint as a tick function. This allows both to evaluate a constraint in the
---UE ticking system but also to handle dependencies between parents/children and constraints between themselves
---using the tick prerequisites system.
---@class FConstraintTickFunction : FTickFunction
local FConstraintTickFunction = {}
