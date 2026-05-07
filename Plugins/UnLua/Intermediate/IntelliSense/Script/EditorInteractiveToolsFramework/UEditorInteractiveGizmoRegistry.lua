---Gizmo types should be registered in either UEditorInteractiveGizmoSubsystem or
---UEditorInteractiveGizmoManager. This registry class is used internally by the
---subsystem and manager which each maintain its own registry at different scopes:
---the subystem is global to the Editor, the manager is local to the Interactive
---Tools Context.
---@class UEditorInteractiveGizmoRegistry : UObject
---@field private GizmoCategoryMap TMap<EEditorGizmoCategory, UEditorGizmoRegistryCategoryEntry> @Current set of Gizmo Builders
local UEditorInteractiveGizmoRegistry = {}

