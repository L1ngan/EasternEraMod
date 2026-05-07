---A segment of a 'property path' used to access an object's properties from another location
---@class FPropertyAccessSegment
---@field private Name string @The sub-component of the property path, a single value between .'s of the path
---@field private Struct UStruct @The Class or ScriptStruct that was used last to resolve Name to a property.
---@field private Property Unknown @The cached property on the Struct that this Name resolved to at compile time. If this is a Function segment, then this is the return property of the function.
---@field private Function UFunction @If this segment is a function, EPropertyAccessSegmentFlags::Function flag will be present and this value will be valid
---@field private ArrayIndex integer @The optional array index.
---@field private Flags integer @
local FPropertyAccessSegment = {}
