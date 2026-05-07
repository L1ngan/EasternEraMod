---@class USoundMix : UObject
---@field public bApplyEQ boolean @Whether to apply the EQ effect
---@field public EQPriority number
---@field public EQSettings FAudioEQEffect
---@field public SoundClassEffects TArray<FSoundClassAdjuster> @Array of changes to be applied to groups.
---@field public InitialDelay number @Initial delay in seconds before the mix is applied.
---@field public FadeInTime number @Time taken in seconds for the mix to fade in.
---@field public Duration number @Duration of mix, negative means it will be applied until another mix is set.
---@field public FadeOutTime number @Time taken in seconds for the mix to fade out.
---@field public bChanged boolean @Transient property used to trigger real-time updates of the active EQ filter for editor previewing
local USoundMix = {}

