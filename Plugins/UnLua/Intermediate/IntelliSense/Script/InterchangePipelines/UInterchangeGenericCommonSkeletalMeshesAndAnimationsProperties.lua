---@class UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties : UInterchangePipelineBase
---@field public bImportOnlyAnimations boolean @If enabled, only animations are imported from the source. You must also set a valid skeleton.
---@field public Skeleton TWeakObjectPtr<USkeleton> @Skeleton to use for imported asset. When importing a skeletal mesh, leaving this as "None" will create a new skeleton. When importing an animation, this must be specified.
---@field public bImportMeshesInBoneHierarchy boolean @If enabled, meshes nested in bone hierarchies will be imported as meshes instead of being converted to bones. If the meshes are not skinned, they are added to the skeletal mesh and removed from the list of static meshes.
---@field public bUseT0AsRefPose boolean @If enabled, skinned meshes will be rebind using the joints transform pose at frame 0 instead of being import with the bind pose.
---@field public bAddCurveMetadataToSkeleton boolean @Determines whether to automatically add curve metadata to a skeleton. If this setting is disabled, curve metadata will be added to skeletal meshes for morph targets, but no metadata entry will be created for general curves.
---@field public bConvertStaticsWithMorphTargetsToSkeletals boolean @If enabled, all static meshes that have morph targets will be imported as skeletal meshes instead.
local UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties = {}

