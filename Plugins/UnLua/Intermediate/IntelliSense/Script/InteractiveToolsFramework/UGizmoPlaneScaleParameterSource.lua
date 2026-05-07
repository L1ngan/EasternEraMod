---UGizmoPlaneScaleParameterSource  is an UGizmoBaseVec2ParameterSource implementation that
---maps a 2D parameter delta to a change in a 3D scaling vector, based on the tangent axes of a 3D plane
---This scale is applied to an IGizmoTransformSource.
---This ParameterSource is intended to be used to create 3D Plane Scale Gizmos.
---@class UGizmoPlaneScaleParameterSource : UGizmoBaseVec2ParameterSource
---@field public AxisSource TScriptInterface<UGizmoAxisSource> @AxisSource provides the 3D plane (origin/normal/u/v) that is used to interpret the 2D parameters
---@field public TransformSource TScriptInterface<UGizmoTransformSource> @This TransformSource is updated by applying the constructed 3D translation
---@field public ScaleMultiplier number @Coordinate delta is multiplied by this amount
---@field public bUseEqualScaling boolean @If true, the scaling will be done an equal amount in each axis, using the minimal value
---@field public bClampToZero boolean @If true, the minimal output scale will be zero.
---@field public Parameter FVector2D @Parameter is the two line-equation parameters that this Vec2ParameterSource provides
---@field public LastChange FGizmoVec2ParameterChange @Active parameter change (only valid between BeginModify/EndModify)
---@field public CurScaleOrigin FVector @plane origin for current parameter edit (only valid between BeginModify/EndModify)
---@field public CurScaleNormal FVector @plane normal for current parameter edit (only valid between BeginModify/EndModify)
---@field public CurScaleAxisX FVector @in-plane axis X for current parameter edit (only valid between BeginModify/EndModify)
---@field public CurScaleAxisY FVector @in-plane axis Y for current parameter edit (only valid between BeginModify/EndModify)
---@field public InitialTransform FTransform @Saved copy of Initial Transform for current parameter edit (only valid between BeginModify/EndModify)
local UGizmoPlaneScaleParameterSource = {}

---set value of parameter
---@param NewValue FVector2D
function UGizmoPlaneScaleParameterSource:SetParameter(NewValue) end

---
---@return FVector2D
function UGizmoPlaneScaleParameterSource:GetParameter() end

---notify ParameterSource that a parameter modification is complete
function UGizmoPlaneScaleParameterSource:EndModify() end

---notify ParameterSource that a parameter modification is about to begin
function UGizmoPlaneScaleParameterSource:BeginModify() end

