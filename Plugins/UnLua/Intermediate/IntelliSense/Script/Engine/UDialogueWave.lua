---@class UDialogueWave : UObject
---@field public bMature boolean @true if this dialogue is considered to contain mature/adult content.
---@field public bOverride_SubtitleOverride boolean
---@field public SpokenText string @A localized version of the text that is actually spoken phonetically in the audio.
---@field public SubtitleOverride string @A localized version of the subtitle text that should be displayed for this audio. By default this will be the same as the Spoken Text.
---@field public VoiceActorDirection string @Provides general notes to the voice actor intended to direct their performance, as well as contextual information to the translator.
---@field public ContextMappings TArray<FDialogueContextMapping> @Mappings between dialogue contexts and associated soundwaves.
---@field public LocalizationGUID FGuid
local UDialogueWave = {}

