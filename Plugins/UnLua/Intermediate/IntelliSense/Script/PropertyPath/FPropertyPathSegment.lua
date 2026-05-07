---Base class for cached property path segments
---@class FPropertyPathSegment
---@field public Name string @The sub-component of the property path, a single value between .'s of the path
---@field public ArrayIndex integer @The optional array index.
---@field private Struct UStruct @The cached Class or ScriptStruct that was used last to resolve Name to a property.
local FPropertyPathSegment = {}
