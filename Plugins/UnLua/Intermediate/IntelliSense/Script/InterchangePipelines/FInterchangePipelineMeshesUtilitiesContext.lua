---* Represents the context UInterchangePipelineMeshesUtilities will use when the client queries data.
---@class FInterchangePipelineMeshesUtilitiesContext
---@field public bConvertStaticMeshToSkeletalMesh boolean @If enabled, all static meshes are converted to skeletal meshes.
---@field public bConvertSkeletalMeshToStaticMesh boolean @If enabled, all skeletal meshes are converted to static meshes.
---@field public bConvertStaticsWithMorphTargetsToSkeletals boolean @If enabled, all static meshes that have morph targets will be imported as skeletal meshes instead.
---@field public bImportMeshesInBoneHierarchy boolean @If enabled, meshes nested in bone hierarchies are imported as meshes instead of being converted to bones. If the meshes are not skinned, they are added to the skeletal mesh and removed from the list of static meshes.
---@field public bQueryGeometryOnlyIfNoInstance boolean @When querying geometry, this flag will not add MeshGeometry if there is a scene node that points to a geometry.
---@field public bIgnoreStaticMeshes boolean @If enabled, all static meshes will be ignored. The mesh utility will not return any static meshes.
---@field public bIgnoreGeometryCaches boolean @If enabled, all geometry caches will be ignored. The mesh utility will not return any geometry caches.
local FInterchangePipelineMeshesUtilitiesContext = {}
