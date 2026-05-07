---Represents one component instance with a mapping back to the Client instance. The should be a 1 to 1 relationship between those and the actual Component instances. (equal count)
---@class FISMComponentInstance
---@field public ClientIndex integer @Client Index in the AISMPartitionActor
---@field public InstanceIndex integer @Instance Index in the FISMClientData struct
---@field public InstanceSubIndex integer @Instance Index in the FISMClientInstance struct
local FISMComponentInstance = {}
