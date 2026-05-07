---A UInteractiveGizmoBuilder creates a new instance of an InteractiveGizmo (basically this is a Factory).
---These are registered with the InteractiveGizmoManager, which calls BuildGizmo().
---This is an abstract base class, you must subclass it in order to create your particular Gizmo instance
---@class UInteractiveGizmoBuilder : UObject
local UInteractiveGizmoBuilder = {}

