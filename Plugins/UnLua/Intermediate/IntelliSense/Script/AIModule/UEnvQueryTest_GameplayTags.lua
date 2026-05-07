---EnvQueryTest_GameplayTags attempts to cast items to IGameplayTagAssetInterface and test their tags with TagQueryToMatch.
---The behavior of IGameplayTagAssetInterface-less items is configured by bRejectIncompatibleItems.
---@class UEnvQueryTest_GameplayTags : UEnvQueryTest
---@field protected TagQueryToMatch FGameplayTagQuery
---@field protected bRejectIncompatibleItems boolean @This controls how to treat actors that do not implement IGameplayTagAssetInterface. When set to True, actors that do not implement the interface will be ignored, meaning they will not be scored and will not be considered when filtering. When set to False, actors that do not implement the interface will be included in filter and score operations with a zero score.
---@field protected bUpdatedToUseQuery boolean @Used to determine whether the file format needs to be updated to move data into TagQueryToMatch or not.
---@field protected TagsToMatch EGameplayContainerMatchType @Deprecated property.  Used only to load old data into TagQueryToMatch.
---@field protected GameplayTags FGameplayTagContainer @Deprecated property.  Used only to load old data into TagQueryToMatch.
local UEnvQueryTest_GameplayTags = {}

