---A recording source that detects camera switching and creates a camera cut track
---@class UTakeRecorderCameraCutSource : UTakeRecorderSource
---@field private World UWorld
---@field private RootLevelSequence ULevelSequence @The root or uppermost level sequence that this source is being recorded into. Set during PreRecording, null after PostRecording.
local UTakeRecorderCameraCutSource = {}

