---Intended to be wrapped and used by FBlueprintActionMenuItem. Rather than
---sub-classing the menu item, we choose to subclass this instead (for
---different node types). That way, we get the type inference that comes with
---UObjects (and we don't have to continuously compare identification strings).
---@class UBlueprintNodeSpawner : UObject
---@field public NodeClass TSubclassOf<UEdGraphNode> @Holds the node type that this spawner will instantiate.
local UBlueprintNodeSpawner = {}

