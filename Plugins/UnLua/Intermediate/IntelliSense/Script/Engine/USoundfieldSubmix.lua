---Sound Submix class meant for use with soundfield formats, such as Ambisonics.
---@class USoundfieldSubmix : USoundSubmixWithParentBase
---@field public SoundfieldEncodingFormat string @Currently used format.
---@field public EncodingSettings USoundfieldEncodingSettingsBase @Which encoding settings to use the sound field.
---@field public SoundfieldEffectChain TArray<USoundfieldEffectBase> @Soundfield effect chain to use for the sound field.
---@field public EncodingSettingsClass TSubclassOf<USoundfieldEncodingSettingsBase>
local USoundfieldSubmix = {}

