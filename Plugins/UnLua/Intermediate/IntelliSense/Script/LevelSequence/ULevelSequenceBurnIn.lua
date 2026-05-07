---Base class for level sequence burn ins
---@class ULevelSequenceBurnIn : UUserWidget
---@field protected FrameInformation FLevelSequencePlayerSnapshot @Snapshot of frame information.
---@field protected LevelSequenceActor ALevelSequenceActor @The actor to get our burn in frames from
local ULevelSequenceBurnIn = {}

---Called when this burn in is receiving its settings
---@param InSettings UObject
function ULevelSequenceBurnIn:SetSettings(InSettings) end

---Get the settings class to use for this burn in
---@return TSubclassOf_ULevelSequenceBurnInInitSettings_
function ULevelSequenceBurnIn:GetSettingsClass() end

