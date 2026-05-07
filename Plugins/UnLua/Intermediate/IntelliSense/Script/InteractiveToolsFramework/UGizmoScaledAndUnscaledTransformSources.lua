---A wrapper around two IGizmoTransformSource's that generally forwards transforms to/from its ScaledTransformSource,
---but also forwards an unscaled version of the transform to UnscaledTransformSource on SetTransform calls.
---This handles the common case of wanting to apply the entire transform to one IGizmoTransformSource, but only
---the unscaled transform to a gizmo component (since we don't want to scale the gizmo component but do want to
---rotate/translate it).
---@class UGizmoScaledAndUnscaledTransformSources : UGizmoBaseTransformSource
---@field public ScaledTransformSource TScriptInterface<UGizmoTransformSource>
---@field public UnscaledTransformSource TScriptInterface<UGizmoTransformSource>
local UGizmoScaledAndUnscaledTransformSources = {}

---@param NewTransform FTransform
function UGizmoScaledAndUnscaledTransformSources:SetTransform(NewTransform) end

---@return FTransform
function UGizmoScaledAndUnscaledTransformSources:GetTransform() end

