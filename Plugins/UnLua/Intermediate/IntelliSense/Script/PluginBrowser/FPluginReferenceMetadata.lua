---We use this object to display plugin reference properties using details view.
---@class FPluginReferenceMetadata
---@field public Name string @Name of the dependency plugin
---@field public bOptional boolean @Whether the dependency plugin is optional meaning it will be silently ignored if not present
---@field public bEnabled boolean @Whether the dependency plugin should be enabled by default
local FPluginReferenceMetadata = {}
