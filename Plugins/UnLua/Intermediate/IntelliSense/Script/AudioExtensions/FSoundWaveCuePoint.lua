---Struct defining a cue point in a sound wave asset
---@class FSoundWaveCuePoint
---@field public CuePointID integer @Unique identifier for the wave cue point
---@field public Label string @The label for the cue point
---@field public FramePosition integer @The frame position of the cue point
---@field public FrameLength integer @The frame length of the cue point (non-zero if it's a region)
---@field protected bIsLoopRegion boolean @intentionally kept private. only USoundFactory should modify this value on import
local FSoundWaveCuePoint = {}
