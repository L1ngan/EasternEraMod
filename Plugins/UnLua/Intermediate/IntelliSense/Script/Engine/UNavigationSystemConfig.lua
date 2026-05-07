---@class UNavigationSystemConfig : UObject
---@field public NavigationSystemClass FSoftClassPath
---@field public SupportedAgentsMask FNavAgentSelector @NavigationSystem's properties in Project Settings define all possible supported agents,     but a specific navigation system can choose to support only a subset of agents.
---@field public DefaultAgentName string @If not None indicates which of navigation datas and supported agents are going to be used as the default ones. If navigation agent of this type does not exist or is not enabled then the first available nav data will be used as the default one
---@field protected bIsOverriden boolean @If true it means the navigation system settings are overridden from another source (like a NavConfigOverrideActor)
local UNavigationSystemConfig = {}

