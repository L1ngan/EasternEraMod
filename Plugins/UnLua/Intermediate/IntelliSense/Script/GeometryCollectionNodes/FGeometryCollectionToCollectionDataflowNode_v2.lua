---Converts a UGeometryCollection asset to an FManagedArrayCollection
---@class FGeometryCollectionToCollectionDataflowNode_v2 : FDataflowNode
---@field private GeometryCollection UGeometryCollection @Asset input
---@field private Collection FManagedArrayCollection @Geometry collection newly created
---@field private Materials TArray<UMaterialInterface> @Material instances array from the static mesh
---@field private InstancedMeshes TArray<FGeometryCollectionAutoInstanceMesh> @Array of instanced meshes
---@field private RootProxyMeshes TArray<FDataflowRootProxyMesh> @corresponding source proxies
local FGeometryCollectionToCollectionDataflowNode_v2 = {}
