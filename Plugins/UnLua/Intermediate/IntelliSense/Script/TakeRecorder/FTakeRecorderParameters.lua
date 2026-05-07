---Structure housing all configurable parameters for a take recorder instance
---@class FTakeRecorderParameters
---@field public User FTakeRecorderUserParameters
---@field public Project FTakeRecorderProjectParameters
---@field public TakeRecorderMode ETakeRecorderMode
---@field public StartFrame FFrameNumber
---@field public bDisableRecordingAndSave boolean @Option to disable recording and saving of data. This can be used in a scenario where multiple clients are running take recorder, but only certain ones are set to process and save the data.
---@field public bOpenSequencer boolean @If sequencer should open when starting a recording.
local FTakeRecorderParameters = {}
