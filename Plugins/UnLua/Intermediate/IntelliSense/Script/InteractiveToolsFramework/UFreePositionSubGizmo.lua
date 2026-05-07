---UFreePositionSubGizmo is very similar to UPlanePositionGizmo with a camera axis source,
--- but when using a custom destination function, it can use the destination to directly
--- set a transform source.
---@class UFreePositionSubGizmo : UPlanePositionGizmo
---@field public TransformSource TScriptInterface<UGizmoTransformSource> @AxisSource provides the 3D plane on which the interaction happens
local UFreePositionSubGizmo = {}

