---A transform gizmo on the pivot that allows you to interact with selected objects by moving, scaling and rotating.
---@class APivotTransformGizmo : ABaseTransformGizmo
---@field private UniformScaleGizmoHandleGroup UUniformScaleGizmoHandleGroup @Uniform scale handle group component
---@field private TranslationGizmoHandleGroup UPivotTranslationGizmoHandleGroup @Translation handle group component
---@field private ScaleGizmoHandleGroup UPivotScaleGizmoHandleGroup @Scale handle group component
---@field private PlaneTranslationGizmoHandleGroup UPivotPlaneTranslationGizmoHandleGroup @Plane translation handle group component
---@field private RotationGizmoHandleGroup UPivotRotationGizmoHandleGroup @Rotation handle group component
---@field private StretchGizmoHandleGroup UStretchGizmoHandleGroup @Stretch handle group component
---@field private LastDraggingHandle UActorComponent @Handle from previous tick that was dragged
local APivotTransformGizmo = {}

