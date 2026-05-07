---UGizmoLocalFloatParameterSource is an implementation of IGizmoFloatParameterSource
---(by way of UGizmoBaseFloatParameterSource) which locally stores the relevant Parameter
---and emits update events via the OnParameterChanged delegate.
---@class UGizmoLocalFloatParameterSource : UGizmoBaseFloatParameterSource
---@field public Value number
---@field public LastChange FGizmoFloatParameterChange
local UGizmoLocalFloatParameterSource = {}

---set value of parameter
---@param NewValue number
function UGizmoLocalFloatParameterSource:SetParameter(NewValue) end

---
---@return number
function UGizmoLocalFloatParameterSource:GetParameter() end

---notify ParameterSource that a parameter modification is complete
function UGizmoLocalFloatParameterSource:EndModify() end

---notify ParameterSource that a parameter modification is about to begin
function UGizmoLocalFloatParameterSource:BeginModify() end

