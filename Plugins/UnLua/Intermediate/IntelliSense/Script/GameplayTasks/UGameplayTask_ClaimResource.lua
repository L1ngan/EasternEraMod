---@class UGameplayTask_ClaimResource : UGameplayTask
local UGameplayTask_ClaimResource = {}

---@param InTaskOwner TScriptInterface_UGameplayTaskOwnerInterface_
---@param ResourceClasses TArray_TSubclassOf_UGameplayTaskResource__
---@param Priority integer @[opt] 
---@param TaskInstanceName string @[opt] 
---@return UGameplayTask_ClaimResource
function UGameplayTask_ClaimResource.ClaimResources(InTaskOwner, ResourceClasses, Priority, TaskInstanceName) end

---@param InTaskOwner TScriptInterface_UGameplayTaskOwnerInterface_
---@param ResourceClass TSubclassOf_UGameplayTaskResource_
---@param Priority integer @[opt] 
---@param TaskInstanceName string @[opt] 
---@return UGameplayTask_ClaimResource
function UGameplayTask_ClaimResource.ClaimResource(InTaskOwner, ResourceClass, Priority, TaskInstanceName) end

