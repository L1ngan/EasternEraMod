---@class FNodeSpawnData
---@field public CachedTitle string @Title to use for the spawned node
---@field public SourceNode UAnimGraphNode_Base @The node the spawned getter accesses, if any
---@field public SourceStateNode UAnimStateNodeBase @The state node the spawned getter accesses
---@field public AnimInstanceClass TSubclassOf<UObject> @The instance class the spawned getter is defined on
---@field public SourceBlueprint UAnimBlueprint @The blueprint the getter is valid within
---@field public Getter UField @The UFunction (as a UField)
---@field public GetterContextString string @String of combined valid contexts for the spawned getter
local FNodeSpawnData = {}
