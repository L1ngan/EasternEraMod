---Node for storing an auto-complete tree based on each char in the command.
---@class FAutoCompleteNode
---@field public IndexChar integer @Char for node in the tree
---@field public AutoCompleteListIndices TArray<integer> @Indices into AutoCompleteList for commands that match to this level
local FAutoCompleteNode = {}
