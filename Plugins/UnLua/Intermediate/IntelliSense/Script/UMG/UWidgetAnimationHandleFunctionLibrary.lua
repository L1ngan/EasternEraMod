---@class UWidgetAnimationHandleFunctionLibrary : UBlueprintFunctionLibrary
local UWidgetAnimationHandleFunctionLibrary = {}

---@param Target FWidgetAnimationHandle @[out] 
---@param InUserTag string
function UWidgetAnimationHandleFunctionLibrary.SetUserTag(Target, InUserTag) end

---@param Target FWidgetAnimationHandle
---@return string
function UWidgetAnimationHandleFunctionLibrary.GetUserTag(Target) end

