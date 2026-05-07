---An implementation of IToolHostCustomizationAPI meant to be used with modeling tools editor mode.
---Mostly it just forwards the relevant requests to the mode toolkit, which changes its accept/cancel/complete
---overlay buttons temporarily (until the next click of those buttons).
---@class UModelingToolsHostCustomizationAPI : UObject
local UModelingToolsHostCustomizationAPI = {}

