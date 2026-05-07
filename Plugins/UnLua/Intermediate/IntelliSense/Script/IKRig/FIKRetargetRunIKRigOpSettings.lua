---@class FIKRetargetRunIKRigOpSettings : FIKRetargetOpSettingsBase
---@field public IKRigAsset UIKRigDefinition @The IK Rig asset to run when this op is executed.
---@field public ExcludedGoals TArray<string> @Goals in this list will be excluded from the rig
---@field public bDrawGoals boolean @Draw IK goal locations.
---@field public bDrawGoalBoneLocations boolean @Draw locations of the source bone (pre-solve)
---@field public GoalDrawSize number @Adjust size of goal debug drawing in viewport
---@field public GoalDrawThickness number @Adjust thickness of goal debug drawing in viewport
local FIKRetargetRunIKRigOpSettings = {}
