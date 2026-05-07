---Standard properties of the Transform Meshes operation
---@class UISMEditorToolProperties : UInteractiveToolPropertySet
---@field public TransformMode EISMEditorTransformMode @Transformation Mode controls the overall behavior of the Gizmos in the Tool
---@field public bSetPivotMode boolean @When true, the Gizmo can be moved independently without affecting objects. This allows the Gizmo to be repositioned before transforming.
---@field public bShowSelectable boolean @Show a highlight around all selectable instances
---@field public bShowSelected boolean @Show a highlight around the selected instances
---@field public bHideWhenDragging boolean @Hide the Selectable and Selected highlights when dragging with the Gizmos
---@field public SelectedInstances TArray<string> @List of selected Component/Instance values
local UISMEditorToolProperties = {}

