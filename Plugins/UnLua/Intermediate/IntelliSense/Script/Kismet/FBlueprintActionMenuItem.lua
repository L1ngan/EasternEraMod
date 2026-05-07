---Wrapper around a UBlueprintNodeSpawner, which takes care of specialized
---node spawning. This class should not be sub-classed, any special handling
---should be done inside a UBlueprintNodeSpawner subclass, which will be
---invoked from this class (separated to divide ui and node-spawning).
---@class FBlueprintActionMenuItem : FEdGraphSchemaAction
local FBlueprintActionMenuItem = {}
