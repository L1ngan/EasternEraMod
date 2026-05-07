---UGizmoBaseVec2ParameterSource is an implementation of IGizmoVec2ParameterSource
---(by way of UGizmoBaseVec2ParameterSource) which locally stores the relevant Parameter
---and emits update events via the OnParameterChanged delegate.
---@class UGizmoLocalVec2ParameterSource : UGizmoBaseVec2ParameterSource
---@field public Value FVector2D
---@field public LastChange FGizmoVec2ParameterChange
local UGizmoLocalVec2ParameterSource = {}

---set value of parameter
---@param NewValue FVector2D
function UGizmoLocalVec2ParameterSource:SetParameter(NewValue) end

---
---@return FVector2D
function UGizmoLocalVec2ParameterSource:GetParameter() end

---notify ParameterSource that a parameter modification is complete
function UGizmoLocalVec2ParameterSource:EndModify() end

---notify ParameterSource that a parameter modification is about to begin
function UGizmoLocalVec2ParameterSource:BeginModify() end

