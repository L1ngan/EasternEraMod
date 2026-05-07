---@class UIKRigEffectorGoal : UObject
---@field public GoalName string @The name used to refer to this goal from outside systems. This is the name to use when referring to this Goal from Blueprint, Anim Graph, Control Rig or IK Retargeter.
---@field public BoneName string @The name of the bone that this Goal is located at.
---@field public PositionAlpha number @Range 0-1, default is 1. Blend between the input bone position (0.0) and the current goal position (1.0).
---@field public RotationAlpha number @Range 0-1, default is 1. Blend between the input bone rotation (0.0) and the current goal rotation (1.0).
---@field public CurrentTransform FTransform @The current transform of this Goal, in the Global Space of the character.
---@field public InitialTransform FTransform @The initial transform of this Goal, as defined by the initial transform of the Goal's bone in the retarget pose.
---@field public PreviewMode EIKRigGoalPreviewMode @Effects how this Goal transform is previewed in the IK Rig editor. "Additive" interprets the Goal transform as being relative to the input pose. Useful for previewing animations. "Absolute" pins the Goal transform to the Gizmo in the viewport.
---@field public SizeMultiplier number @The size of the Goal gizmo drawing in the editor viewport.
---@field public ThicknessMultiplier number @The thickness of the Goal gizmo drawing in the editor viewport.
---@field public bExposePosition boolean @Should position data be exposed in Blueprint
---@field public bExposeRotation boolean @Should rotation data be exposed in Blueprint
local UIKRigEffectorGoal = {}

