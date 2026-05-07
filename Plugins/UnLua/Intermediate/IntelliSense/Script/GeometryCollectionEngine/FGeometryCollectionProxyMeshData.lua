---@class FGeometryCollectionProxyMeshData
---@field public ProxyMeshes TArray<UStaticMesh> @References to meshes to be used as proxies for rendering when the geometry collection is not broken yet
---@field public MeshTransforms TArray<FTransform3f> @Transform of the mesh relative to the geometry collection it belongs to if an entry is missing or if the arary is empty , those transforms are assume to be identity making any proxy mesh done before 5.6 be fully backward compatible
local FGeometryCollectionProxyMeshData = {}
