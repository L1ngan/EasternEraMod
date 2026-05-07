---Append an element to an array of ManagedArrayCollections.
---@class FDataflowMakeManagedArrayCollectionArrayNode : FDataflowNode
---@field private Array TArray<FManagedArrayCollection> @Array to append to. If no input connection, a new array will be created
---@field private Element FManagedArrayCollection @The element to append.
local FDataflowMakeManagedArrayCollectionArrayNode = {}
