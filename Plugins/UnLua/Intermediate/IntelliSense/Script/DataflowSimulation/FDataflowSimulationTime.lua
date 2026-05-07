---Get the dataflow simulation time
---@class FDataflowSimulationTime
---@field public DeltaTime number @Delta time in seconds coming from the context
---@field public CurrentTime number @Current time in seconds coming from the context
---@field public TimeOffset number @Time offset that will need to be added to the current time to compute the sub-stepping
local FDataflowSimulationTime = {}
