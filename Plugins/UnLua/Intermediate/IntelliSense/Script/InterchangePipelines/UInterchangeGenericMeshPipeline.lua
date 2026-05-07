---Hide drop down will make sure the class is not showing in the class picker
---@class UInterchangeGenericMeshPipeline : UInterchangePipelineBase
---@field public CommonMeshesProperties TWeakObjectPtr<UInterchangeGenericCommonMeshesProperties> @Common Meshes Properties Settings Pointer
---@field public CommonSkeletalMeshesAndAnimationsProperties TWeakObjectPtr<UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties> @Common SkeletalMeshes And Animations Properties Settings Pointer
---@field public bImportStaticMeshes boolean @If enabled, imports all static mesh assets found in the sources.
---@field public bCombineStaticMeshes boolean @If enabled, all translated static mesh nodes will be imported as a single static mesh.
---@field public LodGroup string @The LOD group that will be assigned to this mesh.
---@field public bAutoComputeLODScreenSizes boolean @If enabled, LOD Screen Sizes would be auto-computed.
---@field public LODScreenSizes TArray<number> @This setting is only used if the Auto Compute LOD Screen Sizes setting is disabled.
---@field public bCollision boolean @If enabled, custom collision will be imported. If enabled and there is no custom collision, a generic collision will be automatically generated. If disabled, no collision will be created or imported.
---@field public bImportCollisionAccordingToMeshName boolean @If enabled, meshes with certain prefixes will be imported as collision primitives for the mesh with the corresponding unprefixed name. Supported prefixes are: UBX_ Box collision UCP_ Capsule collision USP_ Sphere collision UCX_ Convex collision
---@field public bOneConvexHullPerUCX boolean @If enabled, each UCX collision mesh will be imported as a single convex hull. If disabled, a UCX mesh will be decomposed into its separate pieces and a convex hull generated for each.
---@field public Collision EInterchangeMeshCollision @Type used to generate a collision when no custom collisions are present in the file.
---@field public bForceCollisionPrimitiveGeneration boolean @Sets whether to generate collision shapes even if the provided mesh data doesn't match the requested collision shape very well
---@field public bBuildNanite boolean @If enabled, imported meshes will be rendered by Nanite at runtime. Make sure your meshes and materials meet the requirements for Nanite.
---@field public bBuildReversedIndexBuffer boolean @If enabled, builds a reversed index buffer for each static mesh.
---@field public bGenerateLightmapUVs boolean @If enabled, generates lightmap UVs for each static mesh.
---@field public bGenerateDistanceFieldAsIfTwoSided boolean @Determines whether to generate the distance field treating every triangle hit as a front face. When enabled, prevents the distance field from being discarded due to the mesh being open, but also lowers distance field ambient occlusion quality.
---@field public bSupportFaceRemap boolean @If enabled, imported static meshes are set up for use with physical material masks.
---@field public MinLightmapResolution integer @When generating lightmaps, determines the amount of padding used to pack UVs. Set this value to the lowest-resolution lightmap you expect to use with the imported meshes.
---@field public SrcLightmapIndex integer @Specifies the index of the UV channel that will be used as the source when generating lightmaps.
---@field public DstLightmapIndex integer @Specifies the index of the UV channel that will store generated lightmap UVs.
---@field public BuildScale3D FVector @The local scale applied when building the mesh.
---@field public DistanceFieldResolutionScale number @Scale to apply to the mesh when allocating the distance field volume texture. The default scale is 1, which assumes that the mesh will be placed unscaled in the world.
---@field public DistanceFieldReplacementMesh TWeakObjectPtr<UStaticMesh> @If set, replaces the distance field for all imported meshes with the distance field of the specified Static Mesh.
---@field public MaxLumenMeshCards integer @The maximum number of Lumen mesh cards to generate for this mesh. More cards means that the surface will have better coverage, but will result in increased runtime overhead. Set this to 0 to disable mesh card generation for this mesh. The default is 12.
---@field public bImportSkeletalMeshes boolean @If enabled, imports all skeletal mesh assets found in the sources.
---@field public SkeletalMeshImportContentType EInterchangeSkeletalMeshContentType @Determines what types of information are imported for skeletal meshes.
---@field public LastSkeletalMeshImportContentType EInterchangeSkeletalMeshContentType @The value of the content type during the last import. This cannot be edited and is set only on successful import or reimport.
---@field public bImportMorphTargets boolean @If enabled, imports all morph target shapes found in the source.
---@field public bMergeMorphTargetsWithSameName boolean @If enabled, all morph target shapes with the same name will be merge together. Turn it to false if you want to control those morph with different values.
---@field public bImportVertexAttributes boolean @If enabled, creates named vertex attributes for secondary vertex color data.
---@field public bUpdateSkeletonReferencePose boolean @Enable this option to update the reference pose of the Skeleton (of the mesh). The reference pose of the mesh is always updated.
---@field public bCreatePhysicsAsset boolean @If enabled, create new PhysicsAsset if one doesn't exist.
---@field public PhysicsAsset TWeakObjectPtr<UPhysicsAsset> @If set, use the specified PhysicsAsset. If not set and the Create Physics Asset setting is not enabled, the importer will not generate or set any physics asset.
---@field public bUseHighPrecisionSkinWeights boolean @If enabled, imported skin weights use 16 bits instead of 8 bits.
---@field public ThresholdPosition number @Threshold value that is used to decide whether two vertex positions are equal.
---@field public ThresholdTangentNormal number @Threshold value that is used to decide whether two normals, tangents, or bi-normals are equal.
---@field public ThresholdUV number @Threshold value that is used to decide whether two UVs are equal.
---@field public MorphThresholdPosition number @Threshold to compare vertex position equality when computing morph target deltas.
---@field public BoneInfluenceLimit integer @The maximum number of bone influences to allow each vertex in this mesh to use. If set higher than the limit determined by the project settings, it has no effect. If set to 0, the value is taken from the DefaultBoneInfluenceLimit project setting.
---@field public bImportGeometryCaches boolean @If enabled, imports all geometry cache assets found in the sources.
---@field public bFlattenTracks boolean @Whether or not to merge all vertex animation into one track
---@field public CompressedPositionPrecision number @Precision used for compressing vertex positions (lower = better result but less compression, higher = more lossy compression but smaller size)
---@field public CompressedTextureCoordinatesNumberOfBits integer @Bit-precision used for compressing texture coordinates (hight = better result but less compression, lower = more lossy compression but smaller size)
---@field public bOverrideTimeRange boolean @If enabled, override the imported animation range. Otherwise, the imported range is automatically set to the range of non-empty animated frames
---@field public FrameStart integer
---@field public FrameEnd integer
---@field public MotionVectors EInterchangeMotionVectorsHandling
---@field public bApplyConstantTopologyOptimizations boolean @Force the preprocessor to only do optimization once instead of when the preprocessor decides. This may lead to some problems with certain meshes but makes sure motion blur always works if the topology is constant.
---@field public bStoreImportedVertexNumbers boolean @Store the imported vertex numbers. This lets you know the vertex numbers inside the DCC. The values of each vertex number will range from 0 to 7 for a cube. Even if the number of positions might be 24.
---@field public bOptimizeIndexBuffers boolean @Optimizes index buffers for each unique frame, to allow better cache coherency on the GPU. Very costly and time-consuming process, recommended to OFF.
local UInterchangeGenericMeshPipeline = {}

---@param InbCombineSkeletalMeshes boolean
function UInterchangeGenericMeshPipeline:SetCombineSkeletalMeshes(InbCombineSkeletalMeshes) end

---@return boolean
function UInterchangeGenericMeshPipeline:GetCombineSkeletalMeshes() end

