---A single instance of a given mesh in a Nanite Assembly.
---@class FNaniteAssemblyNode
---@field public ParentIndex integer @The index of this node's parent node
---@field public PartIndex integer @The index of the assembly part mesh this node instances
---@field public Transform FMatrix44f @The local transform of the node
local FNaniteAssemblyNode = {}
