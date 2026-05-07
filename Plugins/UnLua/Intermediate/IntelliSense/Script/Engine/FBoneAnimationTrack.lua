---Structure encapsulating a single bone animation track.
---@class FBoneAnimationTrack
---@field public InternalTrackData FRawAnimSequenceTrack @Internally stored data representing the animation bone data
---@field public BoneTreeIndex integer @Index corresponding to the bone this track corresponds to within the target USkeleton
---@field public Name string @Name of the bone this track corresponds to
local FBoneAnimationTrack = {}
