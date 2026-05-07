---Allows an animation channel to be hosted by multiple controls
---@class FRigUnit_SetChannelHosts : FRigUnit_DynamicHierarchyBaseMutable
---@field public Channel FRigElementKey @* The channel to receive more hosts
---@field public Hosts TArray<FRigElementKey> @* The hosts to add to the channel
local FRigUnit_SetChannelHosts = {}
