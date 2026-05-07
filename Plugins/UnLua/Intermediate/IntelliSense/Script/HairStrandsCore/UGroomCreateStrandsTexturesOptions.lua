---@class UGroomCreateStrandsTexturesOptions : UObject
---@field public Layout EHairTextureLayout @Resolution of the output texture maps (tangent, coverage, ...)
---@field public Resolution integer @Resolution of the output texture maps (tangent, coverage, ...)
---@field public TraceType EStrandsTexturesTraceType @Direction in which the tracing will be done: either from the mesh's surface to the outside, or from the mesh's surface to the inside.
---@field public TraceDistance number @Distance from the mesh surface until hair are projected onto the mesh.
---@field public MeshType EStrandsTexturesMeshType @Select which mesh should be used for tracing
---@field public StaticMesh UStaticMesh @Mesh on which the groom strands will be projected on. If non empty and if the skeletal mesh entry is empty, the static mesh will be used for generating the textures.
---@field public SkeletalMesh USkeletalMesh @Mesh on which the groom strands will be projected on. If non empty, the skeletal mesh will be used for generating the textures.
---@field public LODIndex integer @LOD of the mesh, on which the texture projection is done
---@field public SectionIndex integer @Section of the mesh, on which the texture projection is done
---@field public UVChannelIndex integer @UV channel to use
---@field public GroupIndex TArray<integer> @Groom index which should be baked into the textures. When the array is empty, all groups will be included (Default).
---@field public Dilation integer @Number pixels expanded by the post-process dilation (0..64).
---@field public GeneratedTextures TArray<UTexture2D> @Generated texure.
local UGroomCreateStrandsTexturesOptions = {}

