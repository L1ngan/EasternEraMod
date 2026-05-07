---@class FGizmosParameters
---@field public RotateMode integer @Determines how dragging the rotate gizmo affects the selected objects
---@field public bCtrlMiddleDoesY boolean @When enabled, Ctrl+MMB activates the Y axis and Ctrl+RMB activates the Z axis. When disabled, Ctrl+RMB activates the Y axis and Ctrl+LMB+RMB activates the Z axis.
---@field public bEnableExplicit boolean @When enabled, the list of coordinate spaces in the viewport toolbar offers rig space: a coordinate system that is similar to parent space but uses gimbal rotations.
---@field public AxisSizeMultiplier number @Multiplies the values of TranslateAxisLength, ScaleAxisLength, and RotateAxisRadius.
local FGizmosParameters = {}
