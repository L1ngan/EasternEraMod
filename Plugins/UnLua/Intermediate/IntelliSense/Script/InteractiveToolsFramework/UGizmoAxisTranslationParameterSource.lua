---UGizmoAxisTranslationParameterSource is an IGizmoFloatParameterSource implementation that
---interprets the float value as the parameter of a line equation, and maps this parameter to a 3D translation
---along a line with origin/direction given by an IGizmoAxisSource. This translation is applied to an IGizmoTransformSource.
---This ParameterSource is intended to be used to create 3D Axis Translation Gizmos.
---@class UGizmoAxisTranslationParameterSource : UGizmoBaseFloatParameterSource
---@field public AxisSource TScriptInterface<UGizmoAxisSource> @The Parameter line-equation value is converted to a 3D Translation along this Axis
---@field public TransformSource TScriptInterface<UGizmoTransformSource> @This TransformSource is updated by applying the constructed 3D translation
---@field public Parameter number @Parameter is the line-equation parameter that this FloatParameterSource provides
---@field public LastChange FGizmoFloatParameterChange @Active parameter change (only valid between BeginModify/EndModify)
---@field public CurTranslationAxis FVector @tranlsation axis for current parameter edit (only valid between BeginModify/EndModify)
---@field public CurTranslationOrigin FVector @tranlsation origin for current parameter edit (only valid between BeginModify/EndModify)
---@field public InitialTransform FTransform @Saved copy of Initial Transform for current parameter edit (only valid between BeginModify/EndModify)
local UGizmoAxisTranslationParameterSource = {}

---set value of parameter
---@param NewValue number
function UGizmoAxisTranslationParameterSource:SetParameter(NewValue) end

---
---@return number
function UGizmoAxisTranslationParameterSource:GetParameter() end

---notify ParameterSource that a parameter modification is complete
function UGizmoAxisTranslationParameterSource:EndModify() end

---notify ParameterSource that a parameter modification is about to begin
function UGizmoAxisTranslationParameterSource:BeginModify() end

