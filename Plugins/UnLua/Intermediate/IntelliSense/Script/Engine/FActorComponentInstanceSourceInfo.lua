---@class FActorComponentInstanceSourceInfo
---@field private SourceComponentTemplate UObject @The template used to create the source component
---@field private SourceComponentCreationMethod EComponentCreationMethod @The method that was used to create the source component
---@field private SourceComponentTypeSerializedIndex integer @The index of the source component in its owner's serialized array       when filtered to just that component type
local FActorComponentInstanceSourceInfo = {}
