---@class FVoiceSettings
---@field public ComponentToAttachTo USceneComponent @Optionally attach the voice source to a Scene Component to give the appearance that the voice is coming from that scene component. If this is not set, the voice will not be spatialized.
---@field public AttenuationSettings USoundAttenuation @Optional attenuation settings to attach to this player's voice. This should only be used when ComponentToAttachTo is set.
---@field public SourceEffectChain USoundEffectSourcePresetChain @Optional audio effects to apply to this player's voice.
local FVoiceSettings = {}
