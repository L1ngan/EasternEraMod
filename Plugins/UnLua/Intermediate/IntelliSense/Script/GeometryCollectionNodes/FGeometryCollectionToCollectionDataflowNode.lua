---Converts a UGeometryCollection asset to an FManagedArrayCollection
---DEPRECATED 5.6 : use the new version  that only has one material array output
---@class FGeometryCollectionToCollectionDataflowNode : FDataflowNode
---@field public GeometryCollection UGeometryCollection @Asset input
---@field public Collection FManagedArrayCollection @Geometry collection newly created
---@field public Materials TArray<UMaterial> @Materials array to use for this asset
---@field public MaterialInstances TArray<UMaterialInterface> @Material instances array from the static mesh
---@field public InstancedMeshes TArray<FGeometryCollectionAutoInstanceMesh> @Array of instanced meshes
local FGeometryCollectionToCollectionDataflowNode = {}
