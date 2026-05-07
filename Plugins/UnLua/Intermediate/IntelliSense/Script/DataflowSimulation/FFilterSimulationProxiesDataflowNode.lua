---Filter simulation proxies from context
---@class FFilterSimulationProxiesDataflowNode : FDataflowSimulationNode
---@field public SimulationProxies TArray<FDataflowSimulationProperty> @Simulation proxies coming from the context and filtered with the groups
---@field public FilteredProxies TArray<FDataflowSimulationProperty> @Simulation proxies coming from the context and filtered with the groups
---@field public SimulationGroups TArray<string> @Simulation groups to filter the output solvers properties
local FFilterSimulationProxiesDataflowNode = {}
