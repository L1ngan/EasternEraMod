---The blueprint/python API for editing a Retarget Pose Op
---@class UIKRetargetAdditivePoseController : UIKRetargetOpControllerBase
local UIKRetargetAdditivePoseController = {}

---Set the op settings. Input is a custom struct type for this op.
---       * @@param InSettings a FIKRetargetPoseOpSettings struct containing all the settings to apply to this op
---@param InSettings FIKRetargetAdditivePoseOpSettings
function UIKRetargetAdditivePoseController:SetSettings(InSettings) end

---Get the current op settings as a struct.
---       * @@return FIKRetargetPoseOpSettings struct with the current settings used by the op.
---@return FIKRetargetAdditivePoseOpSettings
function UIKRetargetAdditivePoseController:GetSettings() end

