---@class UAsyncEditorDelay : UEditorUtilityBlueprintAsyncActionBase
---@field public Complete MulticastDelegate
local UAsyncEditorDelay = {}

---@param Seconds number
---@param MinimumFrames integer @[opt] 
---@return UAsyncEditorDelay
function UAsyncEditorDelay.AsyncEditorDelay(Seconds, MinimumFrames) end

