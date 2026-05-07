---@class UAIAsyncTaskBlueprintProxy : UObject
---@field public OnSuccess MulticastDelegate
---@field public OnFail MulticastDelegate
local UAIAsyncTaskBlueprintProxy = {}

---@param RequestID FAIRequestID
---@param MovementResult integer
function UAIAsyncTaskBlueprintProxy:OnMoveCompleted(RequestID, MovementResult) end

