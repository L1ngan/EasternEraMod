---A transition condition that matches the previous and/or next camera rigs against
---one of the owning camera asset's rigs.
---@class UIsCameraRigTransitionCondition : UCameraRigTransitionCondition
---@field public PreviousCameraRig UCameraRigAsset @Passes if null, or equal to the previous camera rig.
---@field public NextCameraRig UCameraRigAsset @Passes if null, or equal to the next camera rig.
local UIsCameraRigTransitionCondition = {}

