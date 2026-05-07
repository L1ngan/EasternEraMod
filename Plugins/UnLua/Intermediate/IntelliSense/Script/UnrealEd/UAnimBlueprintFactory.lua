---@class UAnimBlueprintFactory : UFactory
---@field public BlueprintType integer @The type of blueprint that will be created
---@field public ParentClass TSubclassOf<UAnimInstance> @The parent class of the created blueprint
---@field public TargetSkeleton USkeleton @The kind of skeleton that animation graphs compiled from the blueprint will animate
---@field public PreviewSkeletalMesh USkeletalMesh @The preview mesh to use with this animation blueprint
---@field public bTemplate boolean @Whether the created blueprint should be a template with no target skeleton
local UAnimBlueprintFactory = {}

