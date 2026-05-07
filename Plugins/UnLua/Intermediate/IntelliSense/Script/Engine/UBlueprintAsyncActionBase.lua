---BlueprintCallable factory functions for classes which inherit from UBlueprintAsyncActionBase will have a special blueprint node created for it: UK2Node_AsyncAction
---You can stop this node spawning and create a more specific one by adding the UCLASS metadata "HasDedicatedAsyncNode"
---@class UBlueprintAsyncActionBase : UObject
local UBlueprintAsyncActionBase = {}

---Called to trigger the action once the delegates have been bound
function UBlueprintAsyncActionBase:Activate() end

