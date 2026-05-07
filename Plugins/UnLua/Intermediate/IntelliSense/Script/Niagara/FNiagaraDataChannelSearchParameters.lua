---Parameters used when retrieving a specific set of Data Channel Data to read or write.
---Many Data Channel types will have multiple internal sets of data and these parameters control which the Channel should return to users for access.
---An example of this would be the Islands Data Channel type which will subdivide the world and have a different set of data for each sub division.
---It will return to users the correct data for their location based on these parameters.
---@class FNiagaraDataChannelSearchParameters
---@field public OwningComponent USceneComponent @In cases where there is an owning component such as an object spawning from itself etc, then we pass that component in. Some handlers may only use it's location but others may make use of more data.
---@field public Location FVector @In cases where there is no owning component for data being read or written to a data channel, we simply pass in a location. We can also use this when bOverrideLocaiton is set.
---@field public bOverrideLocation boolean @If true, even if an owning component is set, the data channel should use the Location value rather than the component location. If this is false, the NDC will get any location needed from the owning component.
local FNiagaraDataChannelSearchParameters = {}
