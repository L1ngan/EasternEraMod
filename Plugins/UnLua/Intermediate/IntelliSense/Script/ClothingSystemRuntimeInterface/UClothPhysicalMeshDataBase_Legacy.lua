---Deprecated, use FClothPhysicalMeshData instead.
---Simulation mesh points, topology, and spatial parameters defined on that
---topology.
---Created curing asset import or created from a skeletal mesh.
---@class UClothPhysicalMeshDataBase_Legacy : UObject
---@field public Vertices TArray<FVector3f> @Positions of each simulation vertex
---@field public Normals TArray<FVector3f> @Normal at each vertex
---@field public VertexColors TArray<FColor> @Color at each vertex
---@field public Indices TArray<integer> @Indices of the simulation mesh triangles
---@field public InverseMasses TArray<number> @Inverse mass for each vertex in the physical mesh
---@field public BoneData TArray<FClothVertBoneData> @Indices and weights for each vertex, used to skin the mesh to create the reference pose
---@field public NumFixedVerts integer @Number of fixed verts in the simulation mesh (fixed verts are just skinned and do not simulate)
---@field public MaxBoneWeights integer @Maximum number of bone weights of any vetex
---@field public SelfCollisionIndices TArray<integer> @Valid indices to use for self collisions (reduced set of Indices)
local UClothPhysicalMeshDataBase_Legacy = {}

