---@class UAnimationDataModelNotifiesExtensions : UBlueprintFunctionLibrary
local UAnimationDataModelNotifiesExtensions = {}

---@param Payload FAnimDataModelNotifPayload
---@return FEmptyPayload
function UAnimationDataModelNotifiesExtensions.GetPayload(Payload) end

---@param Payload FAnimDataModelNotifPayload
---@param ExpectedStruct UScriptStruct
---@param OutPayload FEmptyPayload @[out] 
function UAnimationDataModelNotifiesExtensions.CopyPayload(Payload, ExpectedStruct, OutPayload) end

