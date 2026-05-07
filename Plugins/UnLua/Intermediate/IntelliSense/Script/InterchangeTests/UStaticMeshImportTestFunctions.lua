---@class UStaticMeshImportTestFunctions : UImportTestFunctionsBase
local UStaticMeshImportTestFunctions = {}

---Check whether the mesh description vertex of the given index is at the expected position
---@param Mesh UStaticMesh
---@param LodIndex integer
---@param VertexIndex integer
---@param ExpectedVertexPosition FVector
---@return FInterchangeTestFunctionResult
function UStaticMeshImportTestFunctions.CheckVertexIndexPosition(Mesh, LodIndex, VertexIndex, ExpectedVertexPosition) end

---Check whether the mesh description vertex count for the given LOD is as expected
---@param Mesh UStaticMesh
---@param LodIndex integer
---@param ExpectedNumberOfVertices integer
---@return FInterchangeTestFunctionResult
function UStaticMeshImportTestFunctions.CheckVertexCount(Mesh, LodIndex, ExpectedNumberOfVertices) end

---Check whether the mesh description has the expected number of UV channels
---@param Mesh UStaticMesh
---@param LodIndex integer
---@param ExpectedNumberOfUVChannels integer
---@return FInterchangeTestFunctionResult
function UStaticMeshImportTestFunctions.CheckUVChannelCount(Mesh, LodIndex, ExpectedNumberOfUVChannels) end

---Check whether the given mesh description polygon group of the given LOD has the expected number of triangles
---@param Mesh UStaticMesh
---@param LodIndex integer
---@param PolygonGroupIndex integer
---@param ExpectedNumberOfTriangles integer
---@return FInterchangeTestFunctionResult
function UStaticMeshImportTestFunctions.CheckTriangleCountInPolygonGroup(Mesh, LodIndex, PolygonGroupIndex, ExpectedNumberOfTriangles) end

---Check whether the mesh description has the expected number of triangles for the given LOD
---@param Mesh UStaticMesh
---@param LodIndex integer
---@param ExpectedTotalNumberOfTriangles integer
---@return FInterchangeTestFunctionResult
function UStaticMeshImportTestFunctions.CheckTriangleCount(Mesh, LodIndex, ExpectedTotalNumberOfTriangles) end

---Check whether the mesh description contains any quads or ngons
---@param Mesh UStaticMesh
---@param LodIndex integer
---@param bMeshHasQuadsOrNgons boolean
---@return FInterchangeTestFunctionResult
function UStaticMeshImportTestFunctions.CheckThatMeshHasQuadsOrNgons(Mesh, LodIndex, bMeshHasQuadsOrNgons) end

---Check whether the static mesh given socket index has the expected name
---@param Mesh UStaticMesh
---@param SocketIndex integer
---@param ExpectedSocketName string
---@return FInterchangeTestFunctionResult
function UStaticMeshImportTestFunctions.CheckSocketName(Mesh, SocketIndex, ExpectedSocketName) end

---Check whether the static mesh given socket index has the expected location
---@param Mesh UStaticMesh
---@param SocketIndex integer
---@param ExpectedSocketLocation FVector
---@return FInterchangeTestFunctionResult
function UStaticMeshImportTestFunctions.CheckSocketLocation(Mesh, SocketIndex, ExpectedSocketLocation) end

---Check whether the static mesh expected number of sockets were imported
---@param Mesh UStaticMesh
---@param ExpectedSocketCount integer
---@return FInterchangeTestFunctionResult
function UStaticMeshImportTestFunctions.CheckSocketCount(Mesh, ExpectedSocketCount) end

---Check whether the static mesh expected number of simple collision primitives were imported
---@param Mesh UStaticMesh
---@param ExpectedSphereElementCount integer
---@param ExpectedBoxElementCount integer
---@param ExpectedCapsuleElementCount integer
---@param ExpectedConvexElementCount integer
---@param ExpectedTaperedCapsuleElementCount integer
---@return FInterchangeTestFunctionResult
function UStaticMeshImportTestFunctions.CheckSimpleCollisionPrimitiveCount(Mesh, ExpectedSphereElementCount, ExpectedBoxElementCount, ExpectedCapsuleElementCount, ExpectedConvexElementCount, ExpectedTaperedCapsuleElementCount) end

---Check whether the section index in the built render data for the given LOD is referencing the expected material
---@param Mesh UStaticMesh
---@param LodIndex integer
---@param SectionIndex integer
---@param ExpectedMaterialName string
---@return FInterchangeTestFunctionResult
function UStaticMeshImportTestFunctions.CheckSectionMaterialName(Mesh, LodIndex, SectionIndex, ExpectedMaterialName) end

---Check whether the section index in the built render data for the given LOD is referencing the expected material index
---@param Mesh UStaticMesh
---@param LodIndex integer
---@param SectionIndex integer
---@param ExpectedMaterialIndex integer
---@return FInterchangeTestFunctionResult
function UStaticMeshImportTestFunctions.CheckSectionMaterialIndex(Mesh, LodIndex, SectionIndex, ExpectedMaterialIndex) end

---Check whether the section index in the built render data for the given LOD is referencing the expected imported material slot name
---@param Mesh UStaticMesh
---@param LodIndex integer
---@param SectionIndex integer
---@param ExpectedImportedMaterialSlotName string
---@return FInterchangeTestFunctionResult
function UStaticMeshImportTestFunctions.CheckSectionImportedMaterialSlotName(Mesh, LodIndex, SectionIndex, ExpectedImportedMaterialSlotName) end

---Check whether the render data for the given mesh LOD has the expected number of sections
---@param Mesh UStaticMesh
---@param LodIndex integer
---@param ExpectedNumberOfSections integer
---@return FInterchangeTestFunctionResult
function UStaticMeshImportTestFunctions.CheckSectionCount(Mesh, LodIndex, ExpectedNumberOfSections) end

---Check whether the render data vertex index of the given LOD has the expected vertex normal
---@param Mesh UStaticMesh
---@param LodIndex integer
---@param VertexIndex integer
---@param ExpectedVertexNormal FVector4f
---@return FInterchangeTestFunctionResult
function UStaticMeshImportTestFunctions.CheckRenderVertexIndexNormal(Mesh, LodIndex, VertexIndex, ExpectedVertexNormal) end

---Check whether the render data vertex index of the given LOD has the expected vertex color
---@param Mesh UStaticMesh
---@param LodIndex integer
---@param VertexIndex integer
---@param ExpectedVertexColor FColor
---@return FInterchangeTestFunctionResult
function UStaticMeshImportTestFunctions.CheckRenderVertexIndexColor(Mesh, LodIndex, VertexIndex, ExpectedVertexColor) end

---Check whether the render data vertex count for the given LOD is as expected
---@param Mesh UStaticMesh
---@param LodIndex integer
---@param ExpectedNumberOfRenderVertices integer
---@return FInterchangeTestFunctionResult
function UStaticMeshImportTestFunctions.CheckRenderVertexCount(Mesh, LodIndex, ExpectedNumberOfRenderVertices) end

---Check whether the render data has the expected number of UV channels
---@param Mesh UStaticMesh
---@param LodIndex integer
---@param ExpectedNumberOfUVChannels integer
---@return FInterchangeTestFunctionResult
function UStaticMeshImportTestFunctions.CheckRenderUVChannelCount(Mesh, LodIndex, ExpectedNumberOfUVChannels) end

---Check whether the render data has the expected number of triangles for the given LOD
---@param Mesh UStaticMesh
---@param LodIndex integer
---@param ExpectedTotalNumberOfTriangles integer
---@return FInterchangeTestFunctionResult
function UStaticMeshImportTestFunctions.CheckRenderTriangleCount(Mesh, LodIndex, ExpectedTotalNumberOfTriangles) end

---Check whether the render data contains any vertex colors of the given LOD
---@param Mesh UStaticMesh
---@param LodIndex integer
---@param bExpectedHasVertexColors boolean
---@return FInterchangeTestFunctionResult
function UStaticMeshImportTestFunctions.CheckRenderHasVertexColors(Mesh, LodIndex, bExpectedHasVertexColors) end

---Check whether the mesh description material slot name for the given polygon group in the given LOD is as expected
---@param Mesh UStaticMesh
---@param LodIndex integer
---@param PolygonGroupIndex integer
---@param ExpectedImportedMaterialSlotName string
---@return FInterchangeTestFunctionResult
function UStaticMeshImportTestFunctions.CheckPolygonGroupImportedMaterialSlotName(Mesh, LodIndex, PolygonGroupIndex, ExpectedImportedMaterialSlotName) end

---Check whether the mesh description has the expected number of polygon groups for the given LOD
---@param Mesh UStaticMesh
---@param LodIndex integer
---@param ExpectedNumberOfPolygonGroups integer
---@return FInterchangeTestFunctionResult
function UStaticMeshImportTestFunctions.CheckPolygonGroupCount(Mesh, LodIndex, ExpectedNumberOfPolygonGroups) end

---Check whether the given mesh description polygon group of the given LOD has the expected number of polygons
---@param Mesh UStaticMesh
---@param LodIndex integer
---@param PolygonGroupIndex integer
---@param ExpectedNumberOfPolygons integer
---@return FInterchangeTestFunctionResult
function UStaticMeshImportTestFunctions.CheckPolygonCountInPolygonGroup(Mesh, LodIndex, PolygonGroupIndex, ExpectedNumberOfPolygons) end

---Check whether the mesh description has the expected number of polygons for the given LOD
---@param Mesh UStaticMesh
---@param LodIndex integer
---@param ExpectedNumberOfPolygons integer
---@return FInterchangeTestFunctionResult
function UStaticMeshImportTestFunctions.CheckPolygonCount(Mesh, LodIndex, ExpectedNumberOfPolygons) end

---Check whether the static mesh has the expected Nanite settings
---@param Mesh UStaticMesh
---@param ExpectedNaniteSettings FMeshNaniteSettings
---@return FInterchangeTestFunctionResult
function UStaticMeshImportTestFunctions.CheckNaniteSettings(Mesh, ExpectedNaniteSettings) end

---Check whether the static mesh has the expected number of material slots
---@param Mesh UStaticMesh
---@param ExpectedNumberOfMaterialSlots integer
---@return FInterchangeTestFunctionResult
function UStaticMeshImportTestFunctions.CheckMaterialSlotCount(Mesh, ExpectedNumberOfMaterialSlots) end

---Check whether the static mesh has the expected number of LODs
---@param Mesh UStaticMesh
---@param ExpectedNumberOfLods integer
---@return FInterchangeTestFunctionResult
function UStaticMeshImportTestFunctions.CheckLodCount(Mesh, ExpectedNumberOfLods) end

---Check whether the expected number of static meshes are imported
---@param Meshes TArray_UStaticMesh_
---@param ExpectedNumberOfImportedStaticMeshes integer
---@return FInterchangeTestFunctionResult
function UStaticMeshImportTestFunctions.CheckImportedStaticMeshCount(Meshes, ExpectedNumberOfImportedStaticMeshes) end

---Check whether the static mesh imported material slot name for the given material index is as expected
---@param Mesh UStaticMesh
---@param MaterialIndex integer
---@param ExpectedImportedMaterialSlotName string
---@return FInterchangeTestFunctionResult
function UStaticMeshImportTestFunctions.CheckImportedMaterialSlotName(Mesh, MaterialIndex, ExpectedImportedMaterialSlotName) end

---Check whether the static mesh source model has the expected build settings
---@param Mesh UStaticMesh
---@param LodIndex integer
---@param ExpectedBuildSettings FMeshBuildSettings
---@return FInterchangeTestFunctionResult
function UStaticMeshImportTestFunctions.CheckBuildSettings(Mesh, LodIndex, ExpectedBuildSettings) end

---Check whether the bounding box size is less than given value
---@param Mesh UStaticMesh
---@param LessThanSize FVector
---@return FInterchangeTestFunctionResult
function UStaticMeshImportTestFunctions.CheckBoundingBoxSizeLessThan(Mesh, LessThanSize) end

---Check whether the bounding box size is greater than given value
---@param Mesh UStaticMesh
---@param GreaterThanSize FVector
---@return FInterchangeTestFunctionResult
function UStaticMeshImportTestFunctions.CheckBoundingBoxSizeGreaterThan(Mesh, GreaterThanSize) end

---Check whether the bounding box size is equal to given value
---@param Mesh UStaticMesh
---@param ExpectedSize FVector
---@return FInterchangeTestFunctionResult
function UStaticMeshImportTestFunctions.CheckBoundingBoxSize(Mesh, ExpectedSize) end

---Check whether the static mesh is equivalent to a ground truth asset
---@param Mesh UStaticMesh
---@param MeshToCompare TSoftObjectPtr_UStaticMesh_
---@param bCheckVertexCountEqual boolean @[opt] 
---@param bCheckTriangleCountEqual boolean @[opt] 
---@param bCheckUVChannelCountEqual boolean @[opt] 
---@param bCheckCollisionPrimitiveCountEqual boolean @[opt] 
---@param bCheckVertexPositionsEqual boolean @[opt] 
---@param bCheckNormalsEqual boolean @[opt] 
---@return FInterchangeTestFunctionResult
function UStaticMeshImportTestFunctions.CheckAgainstGroundTruth(Mesh, MeshToCompare, bCheckVertexCountEqual, bCheckTriangleCountEqual, bCheckUVChannelCountEqual, bCheckCollisionPrimitiveCountEqual, bCheckVertexPositionsEqual, bCheckNormalsEqual) end

