---Sound Submix class meant for sending audio to an external endpoint, such as controller haptics or an additional audio device.
---@class UEndpointSubmix : USoundSubmixBase
---@field public EndpointType string @Currently used format.
---@field public EndpointSettingsClass TSubclassOf<UAudioEndpointSettingsBase>
---@field public EndpointSettings UAudioEndpointSettingsBase
local UEndpointSubmix = {}

