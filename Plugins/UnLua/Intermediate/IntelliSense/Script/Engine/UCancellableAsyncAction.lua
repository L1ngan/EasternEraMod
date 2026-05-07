---base class for asynchronous actions that can be spawned from UK2Node_AsyncAction or C++ code.
---These actions register themselves with the game instance and need to be explicitly canceled or ended normally to go away.
---The ExposedAsyncProxy metadata specifies the blueprint node will return this object for later canceling.
---@class UCancellableAsyncAction : UBlueprintAsyncActionBase
local UCancellableAsyncAction = {}

---Returns true if this action is still active and has not completed or been cancelled
---@return boolean
function UCancellableAsyncAction:IsActive() end

---Cancel an asynchronous action, this attempts to cancel any lower level processes and also prevents delegates from being fired
function UCancellableAsyncAction:Cancel() end

