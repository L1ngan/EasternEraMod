---@class USkeletalMeshImportTestFunctions : UImportTestFunctionsBase
local USkeletalMeshImportTestFunctions = {}

---Check whether the vertex of the given index is at the expected position
---@param Mesh USkeletalMesh
---@param LodIndex integer
---@param VertexIndex integer
---@param ExpectedVertexPosition FVector
---@return FInterchangeTestFunctionResult
function USkeletalMeshImportTestFunctions.CheckVertexIndexPosition(Mesh, LodIndex, VertexIndex, ExpectedVertexPosition) end

---Check whether the vertex of the given index is at the expected normal
---@param Mesh USkeletalMesh
---@param LodIndex integer
---@param VertexIndex integer
---@param ExpectedVertexNormal FVector
---@return FInterchangeTestFunctionResult
function USkeletalMeshImportTestFunctions.CheckVertexIndexNormal(Mesh, LodIndex, VertexIndex, ExpectedVertexNormal) end

---Check whether the vertex of the given index is at the expected normal
---@param Mesh USkeletalMesh
---@param LodIndex integer
---@param VertexIndex integer
---@param ExpectedVertexColor FColor
---@return FInterchangeTestFunctionResult
function USkeletalMeshImportTestFunctions.CheckVertexIndexColor(Mesh, LodIndex, VertexIndex, ExpectedVertexColor) end

---Check whether the mesh has the expected number of UV channels
---@param Mesh USkeletalMesh
---@param LodIndex integer
---@param ExpectedNumberOfUVChannels integer
---@return FInterchangeTestFunctionResult
function USkeletalMeshImportTestFunctions.CheckUVChannelCount(Mesh, LodIndex, ExpectedNumberOfUVChannels) end

---Check whether the given section in the built render data for the given LOD has the expected number of triangles
---@param Mesh USkeletalMesh
---@param LodIndex integer
---@param SectionIndex integer
---@param ExpectedNumberOfTriangles integer
---@return FInterchangeTestFunctionResult
function USkeletalMeshImportTestFunctions.CheckTriangleCountInSection(Mesh, LodIndex, SectionIndex, ExpectedNumberOfTriangles) end

---Check whether the static mesh given socket index has the expected name
---@param Mesh USkeletalMesh
---@param SocketIndex integer
---@param ExpectedSocketName string
---@return FInterchangeTestFunctionResult
function USkeletalMeshImportTestFunctions.CheckSocketName(Mesh, SocketIndex, ExpectedSocketName) end

---Check whether the static mesh given socket index has the expected location
---@param Mesh USkeletalMesh
---@param SocketIndex integer
---@param ExpectedSocketLocation FVector
---@return FInterchangeTestFunctionResult
function USkeletalMeshImportTestFunctions.CheckSocketLocation(Mesh, SocketIndex, ExpectedSocketLocation) end

---Check whether the static mesh expected number of sockets were imported
---@param Mesh USkeletalMesh
---@param ExpectedSocketCount integer
---@return FInterchangeTestFunctionResult
function USkeletalMeshImportTestFunctions.CheckSocketCount(Mesh, ExpectedSocketCount) end

---Check that the specified bone name is skinned with the expected number of vertices
---@param Mesh USkeletalMesh
---@param BoneName string
---@param bTestFirstAlternateProfile boolean
---@param ExpectedSkinnedVertexCount integer
---@return FInterchangeTestFunctionResult
function USkeletalMeshImportTestFunctions.CheckSkinnedVertexCountForBone(Mesh, BoneName, bTestFirstAlternateProfile, ExpectedSkinnedVertexCount) end

---Check whether the material name for the given section in the render data for the given LOD is as expected
---@param Mesh USkeletalMesh
---@param LodIndex integer
---@param SectionIndex integer
---@param ExpectedMaterialName string
---@return FInterchangeTestFunctionResult
function USkeletalMeshImportTestFunctions.CheckSectionMaterialName(Mesh, LodIndex, SectionIndex, ExpectedMaterialName) end

---Check whether the imported material slot name for the given section in the render data for the given LOD is as expected
---@param Mesh USkeletalMesh
---@param LodIndex integer
---@param SectionIndex integer
---@param ExpectedImportedMaterialSlotName string
---@return FInterchangeTestFunctionResult
function USkeletalMeshImportTestFunctions.CheckSectionImportedMaterialSlotName(Mesh, LodIndex, SectionIndex, ExpectedImportedMaterialSlotName) end

---Check whether the built render data for the given mesh LOD has the expected number of sections
---@param Mesh USkeletalMesh
---@param LodIndex integer
---@param ExpectedNumberOfSections integer
---@return FInterchangeTestFunctionResult
function USkeletalMeshImportTestFunctions.CheckSectionCount(Mesh, LodIndex, ExpectedNumberOfSections) end

---Check whether the vertex count in the built render data for the given LOD is as expected
---@param Mesh USkeletalMesh
---@param LodIndex integer
---@param ExpectedNumberOfRenderVertices integer
---@return FInterchangeTestFunctionResult
function USkeletalMeshImportTestFunctions.CheckRenderVertexCount(Mesh, LodIndex, ExpectedNumberOfRenderVertices) end

---Check whether the triangle count in the built render data for the given LOD is as expected
---@param Mesh USkeletalMesh
---@param LodIndex integer
---@param ExpectedNumberOfRenderTriangles integer
---@return FInterchangeTestFunctionResult
function USkeletalMeshImportTestFunctions.CheckRenderTriangleCount(Mesh, LodIndex, ExpectedNumberOfRenderTriangles) end

---Check whether the imported morph target name is as expected
---@param Mesh USkeletalMesh
---@param MorphTargetIndex integer
---@param ExpectedMorphTargetName string
---@return FInterchangeTestFunctionResult
function USkeletalMeshImportTestFunctions.CheckMorphTargetName(Mesh, MorphTargetIndex, ExpectedMorphTargetName) end

---Check whether the mesh has the expected number of morph targets
---@param Mesh USkeletalMesh
---@param ExpectedNumberOfMorphTargets integer
---@return FInterchangeTestFunctionResult
function USkeletalMeshImportTestFunctions.CheckMorphTargetCount(Mesh, ExpectedNumberOfMorphTargets) end

---Check whether the mesh has the expected number of material slots
---@param Mesh USkeletalMesh
---@param ExpectedNumberOfMaterialSlots integer
---@return FInterchangeTestFunctionResult
function USkeletalMeshImportTestFunctions.CheckMaterialSlotCount(Mesh, ExpectedNumberOfMaterialSlots) end

---Check whether the mesh has the expected number of LODs
---@param Mesh USkeletalMesh
---@param ExpectedNumberOfLods integer
---@return FInterchangeTestFunctionResult
function USkeletalMeshImportTestFunctions.CheckLodCount(Mesh, ExpectedNumberOfLods) end

---Check whether the expected number of skeletal meshes are imported
---@param Meshes TArray_USkeletalMesh_
---@param ExpectedNumberOfImportedSkeletalMeshes integer
---@return FInterchangeTestFunctionResult
function USkeletalMeshImportTestFunctions.CheckImportedSkeletalMeshCount(Meshes, ExpectedNumberOfImportedSkeletalMeshes) end

---Check that the bone of the specified index has the expected position
---@param Mesh USkeletalMesh
---@param BoneIndex integer
---@param ExpectedBonePosition FVector
---@return FInterchangeTestFunctionResult
function USkeletalMeshImportTestFunctions.CheckBonePosition(Mesh, BoneIndex, ExpectedBonePosition) end

---Check whether the mesh has the expected number of bones
---@param Mesh USkeletalMesh
---@param ExpectedNumberOfBones integer
---@return FInterchangeTestFunctionResult
function USkeletalMeshImportTestFunctions.CheckBoneCount(Mesh, ExpectedNumberOfBones) end

