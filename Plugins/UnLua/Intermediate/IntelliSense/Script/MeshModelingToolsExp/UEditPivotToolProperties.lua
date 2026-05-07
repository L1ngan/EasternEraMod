---Standard properties of the Edit Pivot operation
---@class UEditPivotToolProperties : UInteractiveToolPropertySet
---@field public bApplyToAllLODs boolean @If checked, the baked transform will be applied to all available LODs. Has no effect on selections without LODs.
---@field public bSnapDragPosition boolean @When enabled, click-drag to reposition the Pivot
---@field public bSnapDragRotation boolean @When enabled, click-drag to reorient the Pivot
---@field public RotationMode EEditPivotSnapDragRotationMode @When snap-dragging rotation, how to align source and target normals
local UEditPivotToolProperties = {}

