---* Add a new UV channel to the collection
---* note that there's a maximum of 8 channels that can be handled by a collection
---@class FAddUVChannelDataflowNode : FDataflowNode
---@field private Collection FManagedArrayCollection @Target Collection
---@field private UVChannel integer @Index of the added UV channel
---@field private DefaultValue FVector2f @Value to initialize the UV with
local FAddUVChannelDataflowNode = {}
