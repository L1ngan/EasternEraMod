---Structure containing information on a SoundMix to activate passively.
---@class FPassiveSoundMixModifier
---@field public SoundMix USoundMix @The SoundMix to activate
---@field public MinVolumeThreshold number @Minimum volume level required to activate SoundMix. Below this value the SoundMix will not be active.
---@field public MaxVolumeThreshold number @Maximum volume level required to activate SoundMix. Above this value the SoundMix will not be active.
local FPassiveSoundMixModifier = {}
