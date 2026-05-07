---@class USourceEffectEnvelopeFollowerPreset : USoundEffectSourcePreset
---@field public Settings FSourceEffectEnvelopeFollowerSettings
local USourceEffectEnvelopeFollowerPreset = {}

---Unregisters an envelope follower listener with the effect.
---@param EnvelopeFollowerListener UEnvelopeFollowerListener
function USourceEffectEnvelopeFollowerPreset:UnregisterEnvelopeFollowerListener(EnvelopeFollowerListener) end

---@param InSettings FSourceEffectEnvelopeFollowerSettings
function USourceEffectEnvelopeFollowerPreset:SetSettings(InSettings) end

---Registers an envelope follower listener with the effect.
---@param EnvelopeFollowerListener UEnvelopeFollowerListener
function USourceEffectEnvelopeFollowerPreset:RegisterEnvelopeFollowerListener(EnvelopeFollowerListener) end

