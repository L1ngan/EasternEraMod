---UEditorInteractiveGizmoManager allows users of the Tools framework to register and create selection-based Gizmo instances.
---For each selection-based Gizmo, a builder derived from UInteractiveGizmoSelectionBuilder is registered with the GizmoManager.
---When the section changes, the highest priority builders for which SatisfiesCondition() return true, will be used to
---build gizmos.
---@class UEditorInteractiveGizmoManager : UInteractiveGizmoManager
---@field protected Registry UEditorInteractiveGizmoRegistry @Actual registry
---@field protected ActiveEditorGizmos TArray<FActiveEditorGizmo> @set of Currently-active Gizmos
---@field protected DefaultGizmoParameters Unknown
---@field protected CachedGizmoMap TMap<UInteractiveGizmoBuilder, UInteractiveGizmo> @Cache for already built gizmos, currently this only caches the transform
local UEditorInteractiveGizmoManager = {}

