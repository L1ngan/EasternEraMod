---Struct containing information about what interfaces are implemented in this blueprint
---@class FBPInterfaceDescription
---@field public Interface TSubclassOf<UInterface> @Reference to the interface class we're adding to this blueprint
---@field public Graphs TArray<UEdGraph> @References to the graphs associated with the required functions for this interface
local FBPInterfaceDescription = {}
