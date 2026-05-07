---@class UEnvQueryGenerator : UEnvQueryNode
---@field public OptionName string
---@field public ItemType TSubclassOf<UEnvQueryItemType> @type of generated items
---@field public bAutoSortTests boolean @if set, tests will be automatically sorted for best performance before running query
---@field protected bCanRunAsync boolean @To be overwritten by MassEnvQueryGenerators to indicate that they will run asynchronously.
local UEnvQueryGenerator = {}

