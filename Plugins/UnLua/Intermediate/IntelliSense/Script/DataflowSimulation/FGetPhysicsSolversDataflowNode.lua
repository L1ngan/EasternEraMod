---Get physics solvers from context
---@class FGetPhysicsSolversDataflowNode : FDataflowInvalidNode
---@field public PhysicsSolvers TArray<FDataflowSimulationProperty> @Physics solvers coming from the context and filtered with the groups
---@field public SimulationGroups TArray<string> @Simulation groups to filter the output solvers properties
local FGetPhysicsSolversDataflowNode = {}
