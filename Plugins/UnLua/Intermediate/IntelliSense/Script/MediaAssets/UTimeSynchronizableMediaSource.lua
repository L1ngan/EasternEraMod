---Base class for media sources that can be synchronized with the engine's timecode.
---@class UTimeSynchronizableMediaSource : UBaseMediaSource
---@field public bUseTimeSynchronization boolean @Synchronize the media with the engine's timecode. The media player has be able to read timecode. The media player will try to play the corresponding frame, base on the frame's timecode value.
---@field public FrameDelay integer @When using Time Synchronization, how many frame back should it read. Capped at 4 frames due to the potential issues with buffer sizes. Framelocked modes don't support this feature.
---@field public TimeDelay number @When not using Time Synchronization, how far back it time should it read.
---@field public bAutoDetectInput boolean @Whether to autodetect the input or not.
local UTimeSynchronizableMediaSource = {}

