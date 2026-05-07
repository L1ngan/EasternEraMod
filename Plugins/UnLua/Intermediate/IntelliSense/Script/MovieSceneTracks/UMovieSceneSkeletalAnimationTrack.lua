---Handles animation of skeletal mesh actors
---@class UMovieSceneSkeletalAnimationTrack : UMovieSceneCommonAnimationTrack
---@field public bUseLegacySectionIndexBlend boolean
---@field public SwapRootBone ESwapRootBone @If on the root bone transform will be swapped to the specified root
local UMovieSceneSkeletalAnimationTrack = {}

---@param InValue ESwapRootBone
function UMovieSceneSkeletalAnimationTrack:SetSwapRootBone(InValue) end

---@return ESwapRootBone
function UMovieSceneSkeletalAnimationTrack:GetSwapRootBone() end

