---HasTag condition
---Succeeds if the tag container has the specified tag.
---Condition can be used with multiple configurations:
---    Does TagContainer {"A.1"} has Tag "A" ?
---            exact match 'false' will SUCCEED
---            exact match 'true' will FAIL
---@class FGameplayTagMatchCondition : FStateTreeConditionCommonBase
---@field public bExactMatch boolean @If true, the tag has to be exactly present, if false then TagContainer will include it's parent tags while matching
---@field public bInvert boolean
local FGameplayTagMatchCondition = {}
