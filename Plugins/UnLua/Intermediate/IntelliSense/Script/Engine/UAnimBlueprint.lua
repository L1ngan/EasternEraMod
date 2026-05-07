---An Anim Blueprint is essentially a specialized Blueprint whose graphs control the animation of a Skeletal Mesh.
---It can perform blending of animations, directly control the bones of the skeleton, and output a final pose
---for a Skeletal Mesh each frame.
---@class UAnimBlueprint : UBlueprint
---@field public TargetSkeleton USkeleton @This is the target skeleton asset for anim instances created from this blueprint; all animations referenced by the BP should be compatible with this skeleton.  For advanced use only, it is easy to cause errors if this is modified without updating or replacing all referenced animations.
---@field public Groups TArray<FAnimGroupInfo> @List of animation sync groups
---@field public bIsTemplate boolean @This is an anim blueprint that acts as a set of template functionality without being tied to a specific skeleton. Implies a null TargetSkeleton.
---@field public bUseMultiThreadedAnimationUpdate boolean @Allows this anim Blueprint to update its native update, blend tree, montages and asset players on a worker thread. The compiler will attempt to pick up any issues that may occur with threaded update. For updates to run in multiple threads both this flag and the project setting "Allow Multi Threaded Animation Update" should be set.
---@field public bWarnAboutBlueprintUsage boolean @Selecting this option will cause the compiler to emit warnings whenever a call into Blueprint is made from the animation graph. This can help track down optimizations that need to be made.
---@field public bEnableLinkedAnimLayerInstanceSharing boolean @If true, linked animation layers will be instantiated only once per AnimClass instead of once per AnimInstance, AnimClass and AnimGroup.       Extra instances will be created if two or more active anim graph override the same layer Function
---@field public ParentAssetOverrides TArray<FAnimParentNodeAssetOverride> @Array of overrides to asset containing nodes in the parent that have been overridden
---@field public PoseWatchFolders TArray<UPoseWatchFolder> @Array of active pose watches (pose watches allows us to see the bone pose at a particular point of the anim graph and control debug draw for unselected anim nodes).
---@field public PoseWatches TArray<UPoseWatch>
---@field private PreviewSkeletalMesh TSoftObjectPtr<USkeletalMesh> @The default skeletal mesh to use when previewing this asset - this only applies when you open Persona using this asset
---@field private PreviewAnimationBlueprint TSoftObjectPtr<UAnimBlueprint> @An animation Blueprint to overlay with this Blueprint. When working on layers, this allows this Blueprint to be previewed in the context of another 'outer' anim blueprint. Setting this is the equivalent of running the preview animation blueprint on the preview mesh, then calling SetLayerOverlay with this anim blueprint.
---@field private DefaultBindingClass TSubclassOf<UObject> @The default binding type that any new nodes will use when created
---@field private PreviewAnimationBlueprintApplicationMethod EPreviewAnimationBlueprintApplicationMethod @The method by which a preview animation blueprint is applied, either as an overlay layer, or as a linked instance
---@field private PreviewAnimationBlueprintTag string @The tag to use when applying a preview animation blueprint via LinkAnimGraphByTag
local UAnimBlueprint = {}

