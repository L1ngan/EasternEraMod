---@class FPerSkeletonAnimationSharingSetup
---@field public Skeleton USkeleton @Skeleton compatible with the animation sharing setup
---@field public SkeletalMesh USkeletalMesh @Skeletal mesh used to setup skeletal mesh components
---@field public BlendAnimBlueprint TSubclassOf<UAnimSharingTransitionInstance> @Animation blueprint used to perform the blending between states
---@field public AdditiveAnimBlueprint TSubclassOf<UAnimSharingAdditiveInstance> @Animation blueprint used to apply additive animation on top of other states
---@field public StateProcessorClass TSubclassOf<UAnimationSharingStateProcessor> @Interface class used when determining which state an actor is in
---@field public bEnableMaterialParameterCaching boolean @Whether or not to enable material parameter caching on the skeletal mesh components created for each state
---@field public AnimationStates TArray<FAnimationStateEntry> @Definition of different animation states
local FPerSkeletonAnimationSharingSetup = {}
