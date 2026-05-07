---UGizmoAxisRotationParameterSource is an IGizmoVec2ParameterSource implementation that
---interprets the FVector2D parameter as a position in a 2D plane, and maps this position to a 3D translation in
---a plane with origin/normal given by an IGizmoAxisSource. This translation is applied to an IGizmoTransformSource.
---This ParameterSource is intended to be used to create 3D Plane Translation Gizmos.
---@class UGizmoPlaneTranslationParameterSource : UGizmoBaseVec2ParameterSource
---@field public AxisSource TScriptInterface<UGizmoAxisSource> @AxisSource provides the 3D plane (origin/normal/u/v) that is used to interpret the 2D parameters
---@field public TransformSource TScriptInterface<UGizmoTransformSource> @This TransformSource is updated by applying the constructed 3D translation
---@field public Parameter FVector2D @Parameter is the two line-equation parameters that this Vec2ParameterSource provides
---@field public LastChange FGizmoVec2ParameterChange @Active parameter change (only valid between BeginModify/EndModify)
---@field public CurTranslationOrigin FVector @plane origin for current parameter edit (only valid between BeginModify/EndModify)
---@field public CurTranslationNormal FVector @plane normal for current parameter edit (only valid between BeginModify/EndModify)
---@field public CurTranslationAxisX FVector @in-plane axis X for current parameter edit (only valid between BeginModify/EndModify)
---@field public CurTranslationAxisY FVector @in-plane axis Y for current parameter edit (only valid between BeginModify/EndModify)
---@field public InitialTransform FTransform @Saved copy of Initial Transform for current parameter edit (only valid between BeginModify/EndModify)
local UGizmoPlaneTranslationParameterSource = {}

---set value of parameter
---@param NewValue FVector2D
function UGizmoPlaneTranslationParameterSource:SetParameter(NewValue) end

---
---@return FVector2D
function UGizmoPlaneTranslationParameterSource:GetParameter() end

---notify ParameterSource that a parameter modification is complete
function UGizmoPlaneTranslationParameterSource:EndModify() end

---notify ParameterSource that a parameter modification is about to begin
function UGizmoPlaneTranslationParameterSource:BeginModify() end

