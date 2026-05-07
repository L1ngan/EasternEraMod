---Container for describing various types of netdrivers available to the engine
---The engine will try to construct a netdriver of a given type and, failing that,
---the fallback version.
---@class FNetDriverDefinition
---@field public DefName string @Unique name of this net driver definition
---@field public DriverClassName string @Class name of primary net driver
---@field public DriverClassNameFallback string @Class name of the fallback net driver if the main net driver class fails to initialize
---@field public MaxChannelsOverride integer
local FNetDriverDefinition = {}
