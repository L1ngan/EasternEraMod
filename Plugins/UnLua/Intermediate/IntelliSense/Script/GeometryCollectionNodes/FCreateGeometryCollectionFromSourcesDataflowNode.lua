---create a geometry collection from a set of geometry sources
---DEPRECATED 5.6 : use the new node version with a single material array output
---@class FCreateGeometryCollectionFromSourcesDataflowNode : FDataflowNode
---@field public Sources TArray<FGeometryCollectionSource> @array of geometry sources
---@field public Collection FManagedArrayCollection @Geometry collection newly created
---@field public Materials TArray<UMaterial> @Materials array to use for this asset
---@field public MaterialInstances TArray<UMaterialInterface> @Materials array to use for this asset
---@field public InstancedMeshes TArray<FGeometryCollectionAutoInstanceMesh> @array of instanced meshes
local FCreateGeometryCollectionFromSourcesDataflowNode = {}
