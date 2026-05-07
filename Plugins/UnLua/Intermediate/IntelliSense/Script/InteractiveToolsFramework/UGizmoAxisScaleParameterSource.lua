---UGizmoAxisScaleParameterSource is an IGizmoFloatParameterSource implementation that
---interprets the float value as the parameter of a line equation, and maps this parameter to a scale factor
---along a line with origin/direction given by an IGizmoAxisSource. This scale is applied to an IGizmoTransformSource.
---This ParameterSource is intended to be used to create 3D Axis Scale Gizmos.
---@class UGizmoAxisScaleParameterSource : UGizmoBaseFloatParameterSource
---@field public AxisSource TScriptInterface<UGizmoAxisSource> @The Parameter line-equation value is converted to a 3D Translation along this Axis
---@field public TransformSource TScriptInterface<UGizmoTransformSource> @This TransformSource is updated by applying the constructed 3D rotation
---@field public ScaleMultiplier number @Coordinate delta is multiplied by this amount
---@field public bClampToZero boolean @If true, the minimal output scale will be zero.
---@field public Parameter number @Parameter is the line-equation parameter that this FloatParameterSource provides
---@field public LastChange FGizmoFloatParameterChange @Active parameter change (only valid between BeginModify/EndModify)
---@field public CurScaleAxis FVector @scale axis for current parameter edit (only valid between BeginModify/EndModify)
---@field public CurScaleOrigin FVector @scale origin for current parameter edit (only valid between BeginModify/EndModify)
---@field public InitialTransform FTransform @Saved copy of Initial transform for current parameter edit (only valid between BeginModify/EndModify)
local UGizmoAxisScaleParameterSource = {}

---set value of parameter
---@param NewValue number
function UGizmoAxisScaleParameterSource:SetParameter(NewValue) end

---
---@return number
function UGizmoAxisScaleParameterSource:GetParameter() end

---notify ParameterSource that a parameter modification is complete
function UGizmoAxisScaleParameterSource:EndModify() end

---notify ParameterSource that a parameter modification is about to begin
function UGizmoAxisScaleParameterSource:BeginModify() end

