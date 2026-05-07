---@class FCacheRecorderProjectParameters
---@field public DefaultSlate string @The default name to use for the Slate information
---@field public bCacheTrackRecorderControlsClockTime boolean @If true then take recorder will control the sequencer timing when recording with a fixed editor time step. The delta time is derived by the sequence's target frame rate. This is useful when recording cache data where frame accuracy is important (e.g. Niagara systems), but should be set to false when dealing with data from external sources (e.g. LiveLink).
---@field public RecordingClockSource EUpdateClockSource @The clock source to use when recording
---@field public bStartAtCurrentTimecode boolean @If enabled, track sections will start at the current timecode. Otherwise, 0.
---@field public bRecordTimecode boolean @If enabled, timecode will be recorded into each actor track
---@field public bShowNotifications boolean @Whether to show notification windows or not when recording
local FCacheRecorderProjectParameters = {}
