---Item describing a state tree override for a state with a specific tag.
---@class FStateTreeReferenceOverrideItem
---@field private StateTag FGameplayTag @Exact tag used to match against a tag on a linked State Tree state.
---@field private StateTreeReference FStateTreeReference @State Tree and parameters to replace the linked state asset with.
local FStateTreeReferenceOverrideItem = {}
