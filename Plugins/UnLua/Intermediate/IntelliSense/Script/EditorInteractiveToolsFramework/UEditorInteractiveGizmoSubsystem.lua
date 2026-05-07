---The InteractiveGizmoSubsystem provides methods for registering and unregistering
---selection-based gizmo builders. This subsystem will be queried for qualified
---builders based on the current selection.
---This subsystem should be used to register gizmo selection-based builders which are not specific
---to an ed mode or asset editor.
---For gizmo selection-based builders which are specific to an ed mode or asset editor,
---register with the UEditorinteractiveGizmoManager instead, when the ed mode or asset editor
---starts up (and deregister when the mode or asset editor shuts down).
---Plugins registering gizmo types should bind to the delegates returned by:
---- OnEditorGizmoSubsystemRegisterEditorGizmoTypes()
---- OnEditorGizmoSubsystemDeregisterEditorGizmoTypes()
---to register and dergister their gizmo builders.
---@class UEditorInteractiveGizmoSubsystem : UEditorSubsystem
---@field private TransformGizmoBuilder UInteractiveGizmoBuilder @TRS gizmo builder
---@field private Registry UEditorInteractiveGizmoRegistry @Actual registry
local UEditorInteractiveGizmoSubsystem = {}

