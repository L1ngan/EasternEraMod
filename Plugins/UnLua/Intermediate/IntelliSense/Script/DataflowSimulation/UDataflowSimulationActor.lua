---@class UDataflowSimulationActor : UInterface
local UDataflowSimulationActor = {}

---Pre simulation callback function that can be implemented in C++ or Blueprint.
---@param SimulationTime number
---@param DeltaTime number
function UDataflowSimulationActor:PreDataflowSimulationTick(SimulationTime, DeltaTime) end

---Post simulation callback function that can be implemented in C++ or Blueprint.
---@param SimulationTime number
---@param DeltaTime number
function UDataflowSimulationActor:PostDataflowSimulationTick(SimulationTime, DeltaTime) end

