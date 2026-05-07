---@class UGizmoFloatParameterSource : UInterface
local UGizmoFloatParameterSource = {}

---set value of parameter
---@param NewValue number
function UGizmoFloatParameterSource:SetParameter(NewValue) end

---
---@return number
function UGizmoFloatParameterSource:GetParameter() end

---notify ParameterSource that a parameter modification is complete
function UGizmoFloatParameterSource:EndModify() end

---notify ParameterSource that a parameter modification is about to begin
function UGizmoFloatParameterSource:BeginModify() end

