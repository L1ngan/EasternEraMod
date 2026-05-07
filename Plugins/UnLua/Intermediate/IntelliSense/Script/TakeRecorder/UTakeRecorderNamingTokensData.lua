---Data container object for Take Recorder Naming Tokens. Kept as UObject to assist with transactions.
---@class UTakeRecorderNamingTokensData : UObject
---@field public UserDefinedTokens TMap<FNamingTokenData, string> @Custom tokens entered in by the user, mapped to a user defined value. We use FNamingTokenData rather than an FString for the key so we can support case sensitivity in our map.
---@field public FieldToUndefinedKeys TArray<FTakeRecorderNamingTokensFieldMapping> @Ordered array of FieldName to undefined token keys. These are present if a token evaluation failed to identify them.
---@field public EvaluatedTextValue string @Evaluated text to serve as an example.
local UTakeRecorderNamingTokensData = {}

