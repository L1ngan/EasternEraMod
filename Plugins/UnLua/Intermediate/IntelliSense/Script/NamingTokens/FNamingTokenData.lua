---@class FNamingTokenData
---@field public TokenKey string @The key of the token to use. This is what the text must match in order to be evaluated. Brackets are automatically added and do not need to be included.
---@field public DisplayName string @The friendly display name of the token.
---@field public Description string @A description of the token.
---@field public FunctionName string @The function to use to evaluate the token. Only needed for blueprint implementations.
local FNamingTokenData = {}
