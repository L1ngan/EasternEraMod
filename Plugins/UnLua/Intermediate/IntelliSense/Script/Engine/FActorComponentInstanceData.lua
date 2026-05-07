---Base class for component instance cached data of a particular type.
---@class FActorComponentInstanceData : FInstanceCacheDataBase
---@field protected SourceComponentTemplate UObject @The template used to create the source component
---@field protected SourceComponentCreationMethod EComponentCreationMethod @The method that was used to create the source component
---@field protected SourceComponentTypeSerializedIndex integer @The index of the source component in its owner's serialized array       when filtered to just that component type
local FActorComponentInstanceData = {}
