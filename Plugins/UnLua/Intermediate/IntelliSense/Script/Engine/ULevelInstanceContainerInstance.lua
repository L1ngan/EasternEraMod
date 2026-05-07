---@class ULevelInstanceContainerInstance : UActorDescContainerInstance
---@field protected OverrideContainer UActorDescContainer
---@field protected ParentContainerReferences TArray<UActorDescContainer>
---@field protected PropertyOverrideAsset TWeakObjectPtr<ULevelInstancePropertyOverrideAsset> @This is a Weak Ptr because parent level instance can get unloaded first and we don't want to cause a leak as we are going to get unloaded afterwards anyways
---@field protected ContainerIDToContainerPath TMap<FActorContainerID, FActorContainerPath>
local ULevelInstanceContainerInstance = {}

