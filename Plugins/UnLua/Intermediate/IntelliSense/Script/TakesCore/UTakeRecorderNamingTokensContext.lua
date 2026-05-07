---Context object which may be passed to NamingTokens evaluations from within TakeRecorder.
---This is stored under TakesCore rather than the TakeRecorderNamingTokensModule for dependency management. Multiple
---Take modules need access to the context but don't need access to the NamingTokens themselves and would result
---in circular referencing.
---@class UTakeRecorderNamingTokensContext : UObject
---@field public TakeMetaData TWeakObjectPtr<UTakeMetaData> @MetaData specifically for this context. Setting this prevents having to perform a global lookup.
---@field public Actor TWeakObjectPtr<AActor> @The specific actor for this context. @@todo NamingTokens - Determine if we should be retrieving the {actor} a different way.
---@field public AudioInputDeviceChannel integer @The audio device channel for this context. @@todo NamingTokens - Determine if we should be retrieving the {channel} a different way.
local UTakeRecorderNamingTokensContext = {}

