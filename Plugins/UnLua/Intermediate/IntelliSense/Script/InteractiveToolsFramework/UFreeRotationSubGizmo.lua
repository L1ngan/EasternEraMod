---A free rotation sub gizmo implements an arcball-like rotation.
---@class UFreeRotationSubGizmo : UInteractiveGizmo
---@field public AxisSource TScriptInterface<UGizmoAxisSource> @AxisSource provides the origin of the interaction sphere and the plane to raycast when hitting outside the sphere
---@field public HitTarget TScriptInterface<UGizmoClickTarget> @The HitTarget provides a hit-test against some 3D element (presumably a visual widget) that controls when interaction can start
---@field public StateTarget TScriptInterface<UGizmoStateTarget> @StateTarget is notified when interaction starts and ends, so that things like undo/redo can be handled externally
---@field public TransformSource TScriptInterface<UGizmoTransformSource> @Target that is rotated by the sub gizmo.
---@field public GizmoViewContext UGizmoViewContext @View info used during raycasts
---@field public MouseBehavior UClickDragInputBehavior @The mouse click behavior of the gizmo is accessible so that it can be modified to use different mouse keys.
local UFreeRotationSubGizmo = {}

