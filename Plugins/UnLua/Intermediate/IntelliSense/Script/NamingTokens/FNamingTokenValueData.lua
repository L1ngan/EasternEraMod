---@class FNamingTokenValueData
---@field public TokenKey string @The token key.
---@field public ProvidedNamespace string @The namespace of the token, if it was originally provided during evaluation.
---@field public TokenValue string @The evaluated token text.
---@field public bWasEvaluated boolean @If the token was able to be evaluated.
local FNamingTokenValueData = {}
