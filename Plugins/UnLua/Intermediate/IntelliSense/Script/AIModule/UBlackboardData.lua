---@class UBlackboardData : UDataAsset
---@field public Parent UBlackboardData @parent blackboard (keys can be overridden)
---@field public ParentKeys TArray<FBlackboardEntry> @all keys inherited from parent chain
---@field public Keys TArray<FBlackboardEntry> @blackboard keys
---@field private bHasSynchronizedKeys boolean
local UBlackboardData = {}

