---@class FTranslationContextInfo
---@field public Key string @The key specified in LOCTEXT
---@field public Context string @What file and line this translation is from
---@field public Changes TArray<FTranslationChange> @List of previous versions of the source text for this context
local FTranslationContextInfo = {}
