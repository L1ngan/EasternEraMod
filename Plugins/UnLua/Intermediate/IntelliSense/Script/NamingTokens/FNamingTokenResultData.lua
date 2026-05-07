---Evaluated results from a template file string.
---@class FNamingTokenResultData
---@field public OriginalText string @Original text without any modifications.
---@field public EvaluatedText string @The full text with evaluated tokens.
---@field public TokenValues TArray<FNamingTokenValueData> @The result of individual tokens, in the order they appear in OriginalText.
local FNamingTokenResultData = {}
