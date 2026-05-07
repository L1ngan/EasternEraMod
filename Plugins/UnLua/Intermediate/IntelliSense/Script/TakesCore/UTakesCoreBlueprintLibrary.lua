---@class UTakesCoreBlueprintLibrary : UBlueprintFunctionLibrary
local UTakesCoreBlueprintLibrary = {}

---Called when the take number is changed.
---@param OnTakeRecorderTakeNumberChanged Delegate
function UTakesCoreBlueprintLibrary.SetOnTakeRecorderTakeNumberChanged(OnTakeRecorderTakeNumberChanged) end

---Called when the slate is changed.
---@param OnTakeRecorderSlateChanged Delegate
function UTakesCoreBlueprintLibrary.SetOnTakeRecorderSlateChanged(OnTakeRecorderSlateChanged) end

---@param TakeNumber integer
function UTakesCoreBlueprintLibrary:OnTakeRecorderTakeNumberChanged__DelegateSignature(TakeNumber) end

---@param Slate string
function UTakesCoreBlueprintLibrary:OnTakeRecorderSlateChanged__DelegateSignature(Slate) end

---Find all the existing takes that were recorded with the specified slate
---@param Slate string
---@param TakeNumber integer @[opt] 
---@return TArray_FAssetData_
function UTakesCoreBlueprintLibrary.FindTakes(Slate, TakeNumber) end

---Compute the next unused sequential take number for the specified slate
---@param Slate string
---@return integer
function UTakesCoreBlueprintLibrary.ComputeNextTakeNumber(Slate) end

