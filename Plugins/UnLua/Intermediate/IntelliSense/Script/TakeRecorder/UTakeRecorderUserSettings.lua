---Universal take recorder settings that apply to a whole take
---@class UTakeRecorderUserSettings : UObject
---@field public Settings FTakeRecorderUserParameters @User settings that should be passed to a recorder instance
---@field public PresetSaveDir FDirectoryPath @The default location in which to save take presets
---@field public LastOpenedPreset TSoftObjectPtr<UTakePreset> @Soft reference to the preset last opened on the take recording UI
---@field public bIsSequenceOpen boolean @Whether the sequence editor is open for the take recorder
---@field public bShowUserSettingsOnUI boolean @Whether the sequence editor is open for the take recorder
local UTakeRecorderUserSettings = {}

