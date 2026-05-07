---Subclass to define naming tokens to use for a specific tool or project.
---@class UNamingTokens : UObject
---@field protected CustomTokens TArray<FNamingTokenData> @User defined tokens.
---@field protected CurrentEvaluationData FNamingTokensEvaluationData @Cached shared data for this evaluation.
---@field protected Namespace string @The namespace to identify this token.
---@field private TestTokenInput string @Enter a sample string using your tokens to output an evaluated result to TestTokenResult.
---@field private TestTokenResult string @An evaluated text result of your token data.
local UNamingTokens = {}

---Template function for us to dynamically create subclass graphs from matching this signature.
---@return string
function UNamingTokens:ProcessTokenTemplateFunction() end

---Called prior to evaluation. Allows consistent data to be set up for each token evaluation.
---This is important if the data is temporally sensitive and could change between evaluating
---multiple tokens in a string, such as a high resolution timer.
---@param InEvaluationData FNamingTokensEvaluationData
function UNamingTokens:OnPreEvaluate(InEvaluationData) end

---Called after evaluation. Used so any cleanup can occur.
function UNamingTokens:OnPostEvaluate() end

---Retrieve the current datetime. By default, this uses shared data so results are consistent across runs.
---@return FDateTime
function UNamingTokens:GetCurrentDateTime() end

