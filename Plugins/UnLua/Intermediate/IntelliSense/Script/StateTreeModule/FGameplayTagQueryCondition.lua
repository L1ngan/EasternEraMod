---DoesContainerMatchTagQuery condition
---Succeeds if the specified tag container matches the given Tag Query.
---@class FGameplayTagQueryCondition : FStateTreeConditionCommonBase
---@field public TagQuery FGameplayTagQuery @Query to match against
---@field public bInvert boolean
local FGameplayTagQueryCondition = {}
