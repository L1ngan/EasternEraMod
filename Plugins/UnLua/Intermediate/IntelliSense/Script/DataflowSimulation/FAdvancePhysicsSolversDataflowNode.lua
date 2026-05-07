---Advance the simulation physics solver in time
---@class FAdvancePhysicsSolversDataflowNode : FDataflowSimulationNode
---@field public SimulationTime FDataflowSimulationTime @Delta time to use to advance the solver
---@field public PhysicsSolvers TArray<FDataflowSimulationProperty> @Physics solvers to advance in time
local FAdvancePhysicsSolversDataflowNode = {}
