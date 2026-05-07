---@class UCurveSourceInterface : UInterface
local UCurveSourceInterface = {}

---Get the value for a specified curve
---@param CurveName string
---@return number
function UCurveSourceInterface:GetCurveValue(CurveName) end

---Evaluate all curves that this source provides
---@param OutValues TArray_FNamedCurveValue_ @[out] 
function UCurveSourceInterface:GetCurves(OutValues) end

---Get the name that this curve source can be bound to by.
---Clients of this curve source will use this name to identify this source.
---@return string
function UCurveSourceInterface:GetBindingName() end

