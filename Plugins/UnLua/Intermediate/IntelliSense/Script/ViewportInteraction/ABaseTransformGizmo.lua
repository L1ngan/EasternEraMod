---Base class for transform gizmo
---@class ABaseTransformGizmo : AActor
---@field protected SceneComponent USceneComponent @Scene component root of this actor
---@field protected AllHandleGroups TArray<UGizmoHandleGroup> @All gizmo components
---@field protected WorldInteraction UViewportWorldInteraction @Owning object
local ABaseTransformGizmo = {}

