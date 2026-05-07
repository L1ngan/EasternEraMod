---Standard properties of the Transform Meshes operation
---@class UTransformMeshesToolProperties : UInteractiveToolPropertySet
---@field public TransformMode ETransformMeshesTransformMode @Transformation Mode controls the overall behavior of the Gizmos in the Tool
---@field public bApplyToInstances boolean @When true, transformations are applied to the Instances of any Instanced Components (eg InstancedStaticMeshComponent) instead of to the Components
---@field public bSetPivotMode boolean @When true, the Gizmo can be moved independently without affecting objects. This allows the Gizmo to be repositioned before transforming.
---@field public bEnableSnapDragging boolean @When Snap-Dragging is enabled, you can Click-drag starting on the target objects to reposition them relative to the rest of the scene
---@field public SnapDragSource ETransformMeshesSnapDragSource @Which point on the object being Snap-Dragged to use as the "Source" point
---@field public RotationMode ETransformMeshesSnapDragRotationMode @How the object being Snap-Dragged should be rotated relative to the Source point location and Hit Surface normal
---@field public bHaveInstances boolean @internal, used to control visibility of Instance settings
local UTransformMeshesToolProperties = {}

