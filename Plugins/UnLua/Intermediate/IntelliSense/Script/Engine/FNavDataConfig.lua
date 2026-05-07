---@class FNavDataConfig : FNavAgentProperties
---@field public Name string @Internal/debug name of this agent
---@field public Color FColor @Color used to represent this agent in the editor and for debugging
---@field public DefaultQueryExtent FVector @Rough size of this agent, used when projecting unto navigation mesh
---@field protected NavDataClass TSoftClassPtr<AActor> @Class to use when spawning navigation data instance
local FNavDataConfig = {}
