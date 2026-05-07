---UCombinedTransformGizmoContextObject is a utility object that registers a set of Gizmo Builders
---for UCombinedTransformGizmo and variants. The intended usage is to call RegisterGizmosWithManager(),
---and then the UCombinedTransformGizmoContextObject will register itself as a ContextObject in the
---InteractiveToolsContext's ContextObjectStore. Then the Create3AxisTransformGizmo()/etc functions
---will spawn different variants of UCombinedTransformGizmo. The above UE::TransformGizmoUtil:: functions
---will look up the UCombinedTransformGizmoContextObject instance in the ContextObjectStore and then
---call the associated function below.
---@class UCombinedTransformGizmoContextObject : UObject
local UCombinedTransformGizmoContextObject = {}

