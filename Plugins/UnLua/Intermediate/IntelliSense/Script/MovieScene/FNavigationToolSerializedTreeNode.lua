---@class FNavigationToolSerializedTreeNode
---@field private LocalIndex integer @Index of this tree node relative to the parent node children items. Can be used as means of ordering.
---@field private GlobalIndex integer @Index of this tree node in the owning tree
---@field private ParentIndex integer @Absolute Index of the Parent Node in the owning tree. If INDEX_NONE, it means Parent is Root.
---@field private ChildrenIndices TArray<integer> @Absolute indices of the children in the owning tree
local FNavigationToolSerializedTreeNode = {}
