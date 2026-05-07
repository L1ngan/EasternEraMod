---@class UMediaPlayerRecording : USequenceRecordingBase
---@field public RecordingSettings FMediaPlayerRecordingSettings @Whether this MediaPlayer is active and its event will be recorded when the 'Record' button is pressed.
---@field private MediaPlayerToRecord TWeakObjectPtr<UMediaPlayer> @The MediaPlayer we want to record
local UMediaPlayerRecording = {}

