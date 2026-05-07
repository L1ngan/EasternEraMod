---@class FNamingTokenFilterArgs
---@field public AdditionalNamespacesToInclude TArray<string> @Namespaces to always be included during evaluation. Namespaces added here won't require the 'namespace' string prefixed to tokens. This does not filter out any namespaces.
---@field public bIncludeGlobal boolean @Include global namespaces.
---@field public bForceCaseSensitive boolean @When false, we fall back to case-insensitive if an exact match isn't found.
---@field public bNativeOnly boolean @When false, we additionally look for blueprint naming tokens.
local FNamingTokenFilterArgs = {}
