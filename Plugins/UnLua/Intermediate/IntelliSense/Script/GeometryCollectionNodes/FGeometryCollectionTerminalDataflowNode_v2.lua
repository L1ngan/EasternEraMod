---* Geometry Collection asset terminal node
---@class FGeometryCollectionTerminalDataflowNode_v2 : FDataflowTerminalNode
---@field private Collection FManagedArrayCollection
---@field private Materials TArray<UMaterialInterface> @Materials to set on this asset
---@field private InstancedMeshes TArray<FGeometryCollectionAutoInstanceMesh> @array of instanced meshes
---@field private RootProxyMeshes TArray<FDataflowRootProxyMesh>
local FGeometryCollectionTerminalDataflowNode_v2 = {}
