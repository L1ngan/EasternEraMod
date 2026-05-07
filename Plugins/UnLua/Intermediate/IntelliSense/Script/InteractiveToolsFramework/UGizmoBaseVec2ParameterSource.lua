---UGizmoBaseVec2ParameterSource is a base implementation of IGizmoVec2ParameterSource,
---which is not functional but adds an OnParameterChanged delegate for further subclasses.
---@class UGizmoBaseVec2ParameterSource : UObject
local UGizmoBaseVec2ParameterSource = {}

---set value of parameter
---@param NewValue FVector2D
function UGizmoBaseVec2ParameterSource:SetParameter(NewValue) end

---
---@return FVector2D
function UGizmoBaseVec2ParameterSource:GetParameter() end

---notify ParameterSource that a parameter modification is complete
function UGizmoBaseVec2ParameterSource:EndModify() end

---notify ParameterSource that a parameter modification is about to begin
function UGizmoBaseVec2ParameterSource:BeginModify() end

