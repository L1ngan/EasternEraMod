---Experimental
---Base class used to create generated navlinks proxy.
---The proxy id is used to represent multiple links generated from the same configuration.
---@class UBaseGeneratedNavLinksProxy : UObject
---@field protected LinkProxyId FNavLinkId @The LinkID will be the same for all navlinks using the proxy.
---@field protected Owner UObject @Proxy owner.
local UBaseGeneratedNavLinksProxy = {}

