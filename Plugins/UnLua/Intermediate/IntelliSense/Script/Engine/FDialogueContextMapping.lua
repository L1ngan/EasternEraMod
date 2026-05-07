---@class FDialogueContextMapping
---@field public Context FDialogueContext @The context of the dialogue.
---@field public SoundWave USoundWave @The soundwave to play for this dialogue.
---@field public LocalizationKeyFormat string @The format string to use when generating the localization key for this context. This must be unique within the owner dialogue wave. Available format markers:   * {ContextHash} - A hash generated from the speaker and target voices.
---@field public Proxy UDialogueSoundWaveProxy @Cached object for playing the soundwave with subtitle information included.
local FDialogueContextMapping = {}
