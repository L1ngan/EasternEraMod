---UInteractiveGizmoManager allows users of the Tools framework to create and operate Gizmo instances.
---For each Gizmo, a (string,GizmoBuilder) pair is registered with the GizmoManager.
---Gizmos can then be activated via the string identifier.
---@class UInteractiveGizmoManager : UObject
---@field protected ActiveGizmos TArray<FActiveGizmo> @set of Currently-active Gizmos
---@field protected GizmoBuilders TMap<string, UInteractiveGizmoBuilder> @Current set of named GizmoBuilders
local UInteractiveGizmoManager = {}

