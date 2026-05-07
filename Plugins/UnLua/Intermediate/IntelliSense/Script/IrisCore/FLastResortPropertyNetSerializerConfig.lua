---Any property that doesn't have any other option will end up using this.
---As the name suggests it's a last resort.
---- Cannot support delta compression in a meaningful way.
---- Must allocate memory to store quantized state.
---@class FLastResortPropertyNetSerializerConfig : FNetSerializerConfig
---@field public Property Unknown
---@field public bExcludeFromDefaultStateHash boolean
local FLastResortPropertyNetSerializerConfig = {}
