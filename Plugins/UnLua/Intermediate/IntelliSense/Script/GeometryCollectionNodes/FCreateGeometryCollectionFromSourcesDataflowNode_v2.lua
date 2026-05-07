---create a geometry collection from a set of geometry sources
---@class FCreateGeometryCollectionFromSourcesDataflowNode_v2 : FDataflowNode
---@field private Sources TArray<FGeometryCollectionSource> @array of geometry sources
---@field private Collection FManagedArrayCollection @Geometry collection newly created
---@field private Materials TArray<UMaterialInterface> @Materials array to use for this asset
---@field private InstancedMeshes TArray<FGeometryCollectionAutoInstanceMesh> @array of instanced meshes
---@field private RootProxyMeshes TArray<FDataflowRootProxyMesh> @corresponding source proxies
local FCreateGeometryCollectionFromSourcesDataflowNode_v2 = {}
