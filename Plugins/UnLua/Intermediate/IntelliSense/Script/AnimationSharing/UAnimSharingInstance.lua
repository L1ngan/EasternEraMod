---@class UAnimSharingInstance : UObject
---@field public RegisteredActors TArray<AActor> @Actors currently registered to be animation driven by the AnimManager using this setup
---@field public StateProcessor UAnimationSharingStateProcessor @(Blueprint)class instance used for determining the state enum value for each registered actor
---@field public UsedAnimationSequences TArray<UAnimSequence>
---@field public StateEnum UEnum @Enum class set up by the user to 'describe' the animation states
---@field public SharingActor AActor @Actor to which all the running SkeletalMeshComponents used for the sharing are attached to
local UAnimSharingInstance = {}

