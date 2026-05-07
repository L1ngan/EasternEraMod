---FWorldPartitionRuntimeContainerResolver
---Helper class that allows resolving a hierarchy of Container actor names (Editor Path) to a resolvable persistent level path (Runtime Path)
---Editor Path : /Game/Map.Map:PersistentLevel.LevelInstance1.LevelInstance2.StaticMeshActor
---Runtime Path : /Game/Map.Map:PersistentLevel.StaticMeshActor_{ContainerID}
---@class FWorldPartitionRuntimeContainerResolver
---@field private Containers TMap<string, FWorldPartitionRuntimeContainer>
---@field private MainContainerPackage string
---@field private ContainerIDToEditorPath TMap<FActorContainerID, string> @Reverse lookup : ex: {ContainerID}, "LevelInstance1.LevelInstance2"
local FWorldPartitionRuntimeContainerResolver = {}
