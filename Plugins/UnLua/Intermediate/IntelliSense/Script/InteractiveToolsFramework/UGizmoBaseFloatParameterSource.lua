---UGizmoBaseFloatParameterSource is a base implementation of IGizmoFloatParameterSource,
---which is not functional but adds an OnParameterChanged delegate for further subclasses.
---@class UGizmoBaseFloatParameterSource : UObject
local UGizmoBaseFloatParameterSource = {}

---set value of parameter
---@param NewValue number
function UGizmoBaseFloatParameterSource:SetParameter(NewValue) end

---
---@return number
function UGizmoBaseFloatParameterSource:GetParameter() end

---notify ParameterSource that a parameter modification is complete
function UGizmoBaseFloatParameterSource:EndModify() end

---notify ParameterSource that a parameter modification is about to begin
function UGizmoBaseFloatParameterSource:BeginModify() end

