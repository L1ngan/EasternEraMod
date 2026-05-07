---Builder in charge of building a MetaSound Source
---@class UMetaSoundSourceBuilder : UMetaSoundBuilderBase
local UMetaSoundSourceBuilder = {}

---Sets the MetaSound's SampleRate override
---@param SampleRate integer
function UMetaSoundSourceBuilder:SetSampleRateOverride(SampleRate) end

---Sets the MetaSound's Quality level
---@param Quality string
function UMetaSoundSourceBuilder:SetQuality(Quality) end

---Sets the output audio format of the source
---@param OutputFormat EMetaSoundOutputAudioFormat
---@param OutResult EMetaSoundBuilderResult @[out] 
function UMetaSoundSourceBuilder:SetFormat(OutputFormat, OutResult) end

---Sets the MetaSound's BlockRate override
---@param BlockRate number
function UMetaSoundSourceBuilder:SetBlockRateOverride(BlockRate) end

---Returns whether or not live updates are both globally enabled (via cvar) and are enabled on this builder's last built sound, which may or may not still be playing.
---@return boolean
function UMetaSoundSourceBuilder:GetLiveUpdatesEnabled() end

---@param Parent UObject
---@param AudioComponent UAudioComponent
---@param OnCreateGenerator Delegate
---@param bLiveUpdatesEnabled boolean @[opt] 
function UMetaSoundSourceBuilder:Audition(Parent, AudioComponent, OnCreateGenerator, bLiveUpdatesEnabled) end

