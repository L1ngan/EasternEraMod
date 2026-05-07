---@class UAnimationAttributeBlueprintLibrary : UBlueprintFunctionLibrary
local UAnimationAttributeBlueprintLibrary = {}

---@param AnimationDataController TScriptInterface_UAnimationDataController_
---@param AttributeIdentifier FAnimationAttributeIdentifier
---@param Times TArray_number_
---@param Values TArray_integer_
---@return boolean
function UAnimationAttributeBlueprintLibrary.SetAttributeKeys(AnimationDataController, AttributeIdentifier, Times, Values) end

---@param AnimationDataController TScriptInterface_UAnimationDataController_
---@param AttributeIdentifier FAnimationAttributeIdentifier
---@param Time number
---@param Value integer
---@return boolean
function UAnimationAttributeBlueprintLibrary.SetAttributeKey(AnimationDataController, AttributeIdentifier, Time, Value) end

---@param AnimationDataModel TScriptInterface_UAnimationDataModel_
---@param AttributeIdentifier FAnimationAttributeIdentifier
---@param OutTimes TArray_number_ @[out] 
---@param Values TArray_integer_ @[out] 
---@return boolean
function UAnimationAttributeBlueprintLibrary.GetAttributeKeys(AnimationDataModel, AttributeIdentifier, OutTimes, Values) end

---@param AnimationDataModel TScriptInterface_UAnimationDataModel_
---@param AttributeIdentifier FAnimationAttributeIdentifier
---@param Time number
---@param Value integer @[out] 
---@return boolean
function UAnimationAttributeBlueprintLibrary.GetAttributeKey(AnimationDataModel, AttributeIdentifier, Time, Value) end

