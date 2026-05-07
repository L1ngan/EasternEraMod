---UGizmoAxisRotationParameterSource is an IGizmoFloatParameterSource implementation that
---interprets the float parameter as an angle, and maps this angle to a 3D rotation
---around an IGizmoAxisSource (ie 3D axis). This rotation is applied to an IGizmoTransformSource.
---This ParameterSource is intended to be used to create 3D Rotation Gizmos.
---@class UGizmoAxisRotationParameterSource : UGizmoBaseFloatParameterSource
---@field public AxisSource TScriptInterface<UGizmoAxisSource> @float-parameter Angle is mapped to a 3D Rotation around this Axis
---@field public TransformSource TScriptInterface<UGizmoTransformSource> @This TransformSource is updated by applying the constructed 3D rotation
---@field public Angle number @Angle is the parameter that this FloatParameterSource provides
---@field public LastChange FGizmoFloatParameterChange @Active parameter change (only valid between BeginModify/EndModify)
---@field public CurRotationAxis FVector @Rotation axis for current parameter edit (only valid between BeginModify/EndModify)
---@field public CurRotationOrigin FVector @Rotation origin for current parameter edit (only valid between BeginModify/EndModify)
---@field public InitialTransform FTransform @Saved copy of Initial Transform for current parameter edit (only valid between BeginModify/EndModify)
local UGizmoAxisRotationParameterSource = {}

---set value of parameter
---@param NewValue number
function UGizmoAxisRotationParameterSource:SetParameter(NewValue) end

---
---@return number
function UGizmoAxisRotationParameterSource:GetParameter() end

---notify ParameterSource that a parameter modification is complete
function UGizmoAxisRotationParameterSource:EndModify() end

---notify ParameterSource that a parameter modification is about to begin
function UGizmoAxisRotationParameterSource:BeginModify() end

