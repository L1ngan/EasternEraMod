---Example Command Line: ProjectName MapName -run=WorldPartitionBuilderCommandlet -SCCProvider=Perforce -Builder=WorldPartitionRenameDuplicateBuilder -NewPackage=NewPackage [Optional: -Rename]
---@class UWorldPartitionRenameDuplicateBuilder : UWorldPartitionBuilder
---@field private DuplicatedObjects TMap<UObject, UObject> @Keep duplicated objects around through GC calls.
local UWorldPartitionRenameDuplicateBuilder = {}

