---Settings for how to assemble UTakePreset.
---These settings belong into UTakeRecorderSettings but those are in TakeRecorder, which depends on TakesCore.
---DisplayName is important so these settings are displayed in the same category as UTakeRecorderSettings.
---@class UTakePresetSettings : UObject
---@field private TargetRecordClass FTakeRecorderTargetRecordClassProperty @The class that recorded sequences should have.
local UTakePresetSettings = {}

