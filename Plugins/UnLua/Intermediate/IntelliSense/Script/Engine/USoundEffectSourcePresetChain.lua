---Chain of source effect presets that can be shared between referencing sounds.
---@class USoundEffectSourcePresetChain : UObject
---@field public Chain TArray<FSourceEffectChainEntry> @Chain of source effects to use for this sound source.
---@field public bPlayEffectChainTails boolean @Whether to keep the source alive for the duration of the effect chain tails.
local USoundEffectSourcePresetChain = {}

