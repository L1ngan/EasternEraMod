---Sound Submix class meant for sending soundfield-encoded audio to an external endpoint, such as a hardware binaural renderer that supports ambisonics.
---@class USoundfieldEndpointSubmix : USoundSubmixBase
---@field public SoundfieldEndpointType string @Currently used format.
---@field public EndpointSettingsClass TSubclassOf<UAudioEndpointSettingsBase>
---@field public EndpointSettings USoundfieldEndpointSettingsBase
---@field public EncodingSettingsClass TSubclassOf<USoundfieldEncodingSettingsBase>
---@field public EncodingSettings USoundfieldEncodingSettingsBase
---@field public SoundfieldEffectChain TArray<USoundfieldEffectBase>
local USoundfieldEndpointSubmix = {}

