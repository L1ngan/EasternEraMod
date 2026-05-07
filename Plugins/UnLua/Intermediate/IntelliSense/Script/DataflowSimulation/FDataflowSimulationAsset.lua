---Dataflow simulation asset (should be in the interface children)
---@class FDataflowSimulationAsset
---@field public DataflowAsset UDataflow @Simulation dataflow asset used to advance in time on Pt
---@field public SimulationGroups TSet<string> @Simulation groups used to filter within the simulation nodes
local FDataflowSimulationAsset = {}
