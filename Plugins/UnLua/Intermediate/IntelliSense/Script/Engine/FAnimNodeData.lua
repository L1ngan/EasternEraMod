---Any constant/folded class data an anim node can be accessed via this struct
---@class FAnimNodeData
---@field private AnimClassInterface TScriptInterface<UAnimClassInterface> @The class we are part of
---@field private Entries TArray<integer> @Flags & Indices for table entries. Used to look up indices from NodePropertyIndex->FoldedDataIndex. If the MSB is set for an entry it is assumed to be on an instance, if not, it is assumed to be stored on the class.
---@field private NodeIndex integer @The index of the node for this constant data block in the class that it is held in. INDEX_NONE if this node is not in a generated class or is per-instance data.
---@field private Flags integer @Common flags for this node
local FAnimNodeData = {}
