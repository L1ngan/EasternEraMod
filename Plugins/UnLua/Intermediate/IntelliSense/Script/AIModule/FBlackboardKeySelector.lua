---helper struct for defining types of allowed blackboard entries
---(e.g. only entries holding points and objects derived form actor class)
---@class FBlackboardKeySelector
---@field public AllowedTypes TArray<UBlackboardKeyType> @array of allowed types with additional properties (e.g. uobject's base class) EditAnywhere is required for FBlackboardSelectorDetails::CacheBlackboardData()
---@field public SelectedKeyName string @name of selected key
---@field public SelectedKeyType TSubclassOf<UBlackboardKeyType> @class of selected key
---@field protected SelectedKeyID integer @ID of selected key
---@field protected bNoneIsAllowedValue boolean
local FBlackboardKeySelector = {}
