---@class UNetPushModelHelpers : UBlueprintFunctionLibrary
local UNetPushModelHelpers = {}

---@param Object UObject
---@param RepIndex integer
---@param PropertyName string
function UNetPushModelHelpers.MarkPropertyDirtyFromRepIndex(Object, RepIndex, PropertyName) end

---Mark replicated property as dirty with the Push Model networking system
---@param Object UObject
---@param PropertyName string
function UNetPushModelHelpers.MarkPropertyDirty(Object, PropertyName) end

