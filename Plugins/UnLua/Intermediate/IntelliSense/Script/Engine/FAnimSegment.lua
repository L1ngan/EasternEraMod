---this is anim segment that defines what animation and how *
---@class FAnimSegment
---@field public CachedPlayLength number
---@field protected AnimReference UAnimSequenceBase @Anim Reference to play - only allow AnimSequence or AnimComposite *
---@field public StartPos number @Start Pos within this AnimCompositeBase
---@field public AnimStartTime number @Time to start playing AnimSequence at.
---@field public AnimEndTime number @Time to end playing the AnimSequence at.
---@field public AnimPlayRate number @Playback speed of this animation. If you'd like to reverse, set -1
---@field public LoopingCount integer
local FAnimSegment = {}
