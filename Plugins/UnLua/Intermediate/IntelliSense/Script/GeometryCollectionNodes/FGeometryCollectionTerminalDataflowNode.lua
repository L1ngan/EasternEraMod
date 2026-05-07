---* Geometry Collection asset terminal node
---* Deprecated (5.6) - Use version 2 of the same node that only support material interface array as materials input
---@class FGeometryCollectionTerminalDataflowNode : FDataflowTerminalNode
---@field public Collection FManagedArrayCollection
---@field public Materials TArray<UMaterial> @Materials array to use for this asset
---@field public MaterialInstances TArray<UMaterialInterface>
---@field public InstancedMeshes TArray<FGeometryCollectionAutoInstanceMesh> @array of instanced meshes
local FGeometryCollectionTerminalDataflowNode = {}
