---UConstructionPlaneMechanic implements an interaction in which a 3D plane can be
---positioned using the standard 3D Gizmo, or placed at hit-locations in the existing scene.
---A grid in the plane can optionally be rendered.
---@class UConstructionPlaneMechanic : UInteractionMechanic
---@field public PlaneTransformGizmo UCombinedTransformGizmo
---@field public PlaneTransformProxy UTransformProxy
---@field protected ClickToSetPlaneBehavior USingleClickInputBehavior
---@field protected MiddleClickToSetGizmoBehavior ULocalSingleClickInputBehavior @This is the behavior and behavior target used for the Shift+click behavior that sets the gizmo's position in the world.
local UConstructionPlaneMechanic = {}

