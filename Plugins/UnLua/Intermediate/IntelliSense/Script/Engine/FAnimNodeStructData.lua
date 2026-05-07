---Data about editor-side struct property indices.
---Used to map property name to editor-only property indices. This allows us to avoid TMap lookups at runtime.
---@class FAnimNodeStructData
---@field private NameToIndexMap TMap<string, integer>
---@field private NumProperties integer
local FAnimNodeStructData = {}
