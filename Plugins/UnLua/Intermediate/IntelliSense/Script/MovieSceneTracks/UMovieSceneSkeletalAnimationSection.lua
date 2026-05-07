---Movie scene section that control skeletal animation
---@class UMovieSceneSkeletalAnimationSection : UMovieSceneSection
---@field public Params FMovieSceneSkeletalAnimationParams
---@field public StartLocationOffset FVector @Location offset applied before the matched offset
---@field public StartRotationOffset FRotator @Location offset applied after the matched offset
---@field public MatchedBoneName string
---@field public MatchedLocationOffset FVector @Location offset determined by matching
---@field public MatchedRotationOffset FRotator @Rotation offset determined by matching
---@field public bMatchWithPrevious boolean
---@field public bMatchTranslation boolean
---@field public bMatchIncludeZHeight boolean
---@field public bMatchRotationYaw boolean
---@field public bMatchRotationPitch boolean
---@field public bMatchRotationRoll boolean
---@field public bDebugForceTickPose boolean
---@field public bShowSkeleton boolean @Whether to show the underlying skeleton for this section.
---@field public MixedAnimationTarget FInstancedStruct
---@field public MixedAnimationPriority integer
local UMovieSceneSkeletalAnimationSection = {}

