---Example Command Line: ProjectName MapName -run=WorldPartitionBuilderCommandlet -SCCProvider=Perforce -Builder=WorldPartitionResaveActorsBuilder [-ActorClassName=StaticMeshActor] [-SwitchActorPackagingSchemeToReduced] [-ActorTags=(Tag1,Tag2,...)] [-ActorProperties=((Property1,Value1),(Property2,Value2),...)]
---@class UWorldPartitionResaveActorsBuilder : UWorldPartitionBuilder
---@field private ActorClassName string
---@field private ActorClassesFromFile string
---@field private bReportOnly boolean
---@field private bResaveDirtyActorDescsOnly boolean
---@field private bDiffDirtyActorDescs boolean
---@field private bSwitchActorPackagingSchemeToReduced boolean
---@field private bEnableActorFolders boolean
---@field private bResaveBlueprints boolean
---@field private ActorTags TSet<string>
---@field private ActorProperties TMap<string, string>
local UWorldPartitionResaveActorsBuilder = {}

