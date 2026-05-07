---Settings for level sequences
---@class ULevelSequenceProjectSettings : UDeveloperSettings
---@field public bDefaultLockEngineToDisplayRate boolean @0: Playback locked to playback frames 1: Unlocked playback with sub frame interpolation
---@field public DefaultDisplayRate string @Specifies default display frame rate for newly created level sequences; also defines frame locked frame rate where sequences are set to be frame locked. Examples: 30 fps, 120/1 (120 fps), 30000/1001 (29.97), 0.01s (10ms).
---@field public DefaultTickResolution string @Specifies default tick resolution for newly created level sequences. Examples: 30 fps, 120/1 (120 fps), 30000/1001 (29.97), 0.01s (10ms).
---@field public DefaultClockSource EUpdateClockSource @Specifies default clock source for newly created level sequences. Examples: 0: Tick, 1: Platform, 2: Audio, 3: RelativeTimecode, 4: Timecode, 5: Custom
local ULevelSequenceProjectSettings = {}

