---UGizmoUniformScaleParameterSource is an IGizmoVec2ParameterSource implementation that
---interprets the Vec2 parameter as the position in a 2D plane, and maps this parameter to a
---change in a uniform scale value. This scale is applied to an IGizmoTransformSource.
---The X/Y plane parameter deltas are converted to a uniform scale delta simply by adding them.
---This assumpes that the 3D plane is oriented such that "positive" along the X and Y
---tangent axes corresponds to something semantically meaningful. It's up to the client to do this.
---This ParameterSource is intended to be used to create 3D Uniform Scale Gizmos.
---@class UGizmoUniformScaleParameterSource : UGizmoBaseVec2ParameterSource
---@field public AxisSource TScriptInterface<UGizmoAxisSource> @AxisSource provides the 3D plane (origin/normal/u/v) that is used to interpret the 2D parameters
---@field public TransformSource TScriptInterface<UGizmoTransformSource> @This TransformSource is updated by applying the constructed 3D translation
---@field public ScaleMultiplier number @Coordinate delta is multiplied by this amount
---@field public Parameter FVector2D @Parameter is the two line-equation parameters that this Vec2ParameterSource provides
---@field public LastChange FGizmoVec2ParameterChange @Active parameter change (only valid between BeginModify/EndModify)
---@field public CurScaleOrigin FVector @plane origin for current parameter edit (only valid between BeginModify/EndModify)
---@field public CurScaleNormal FVector @plane normal for current parameter edit (only valid between BeginModify/EndModify)
---@field public CurScaleAxisX FVector @in-plane axis X for current parameter edit (only valid between BeginModify/EndModify)
---@field public CurScaleAxisY FVector @in-plane axis Y for current parameter edit (only valid between BeginModify/EndModify)
---@field public InitialTransform FTransform @Saved copy of Initial Transform for current parameter edit (only valid between BeginModify/EndModify)
local UGizmoUniformScaleParameterSource = {}

---set value of parameter
---@param NewValue FVector2D
function UGizmoUniformScaleParameterSource:SetParameter(NewValue) end

---
---@return FVector2D
function UGizmoUniformScaleParameterSource:GetParameter() end

---notify ParameterSource that a parameter modification is complete
function UGizmoUniformScaleParameterSource:EndModify() end

---notify ParameterSource that a parameter modification is about to begin
function UGizmoUniformScaleParameterSource:BeginModify() end

