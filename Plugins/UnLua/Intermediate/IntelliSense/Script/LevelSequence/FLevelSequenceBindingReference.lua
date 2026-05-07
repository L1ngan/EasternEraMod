---An external reference to an level sequence object, resolvable through an arbitrary context.
---Bindings consist of an optional package name, and the path to the object within that package.
---Where package name is empty, the reference is a relative path from a specific outer (the context).
---Currently, the package name should only ever be empty for component references, which must remain relative bindings to work correctly with spawnables and reinstanced actors.
---@class FLevelSequenceBindingReference
---@field public ExternalObjectPath FSoftObjectPath @Path to a specific actor/component inside an external package
---@field public ObjectPath string @Object path relative to a passed in context object, this is used if ExternalObjectPath is invalid
local FLevelSequenceBindingReference = {}
