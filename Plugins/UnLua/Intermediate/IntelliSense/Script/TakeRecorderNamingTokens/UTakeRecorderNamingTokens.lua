---Naming Tokens for Take Recorder.
---@class UTakeRecorderNamingTokens : UNamingTokens
---@field private TakeMetaData TWeakObjectPtr<UTakeMetaData> @Cached metadata for this run.
---@field private Context UTakeRecorderNamingTokensContext @Cached context for this run. This isn't available globally and requires a context passed to it.
local UTakeRecorderNamingTokens = {}

