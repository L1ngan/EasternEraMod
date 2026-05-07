---Utility struct to store class overrides for components.
---@class FBPComponentClassOverride
---@field public ComponentName string @The component name an override is being specified for.
---@field public ComponentClass TSubclassOf<UObject> @The class to use when constructing the component.
local FBPComponentClassOverride = {}
