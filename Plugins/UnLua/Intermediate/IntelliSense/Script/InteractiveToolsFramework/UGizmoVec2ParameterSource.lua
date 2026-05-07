---@class UGizmoVec2ParameterSource : UInterface
local UGizmoVec2ParameterSource = {}

---set value of parameter
---@param NewValue FVector2D
function UGizmoVec2ParameterSource:SetParameter(NewValue) end

---
---@return FVector2D
function UGizmoVec2ParameterSource:GetParameter() end

---notify ParameterSource that a parameter modification is complete
function UGizmoVec2ParameterSource:EndModify() end

---notify ParameterSource that a parameter modification is about to begin
function UGizmoVec2ParameterSource:BeginModify() end

