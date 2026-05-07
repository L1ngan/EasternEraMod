---Append Array of Meshes to Collection
---@class FAppendMeshesToCollectionDataflowNode : FDataflowNode
---@field public Collection FManagedArrayCollection @Meshes will be appended to this collection
---@field public AddedSelection FDataflowTransformSelection @Selection of added transforms
---@field public Meshes TArray<UDynamicMesh> @Dynamic Meshes to append
---@field public ParentIndex integer @Index of parent bone for appended meshes. If invalid, meshes will be appended to a root node.
local FAppendMeshesToCollectionDataflowNode = {}
