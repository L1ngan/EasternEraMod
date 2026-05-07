---The blueprint/python API for editing a Copy Base Pose Op
---@class UIKRetargetCopyBasePoseController : UIKRetargetOpControllerBase
local UIKRetargetCopyBasePoseController = {}

---Set the op settings. Input is a custom struct type for this op.
---       * @@param InSettings a FIKRetargetCopyBasePoseOpSettings struct containing all the settings to apply to this op
---@param InSettings FIKRetargetCopyBasePoseOpSettings
function UIKRetargetCopyBasePoseController:SetSettings(InSettings) end

---Get the current op settings as a struct.
---       * @@return FIKRetargetCopyBasePoseOpSettings struct with the current settings used by the op.
---@return FIKRetargetCopyBasePoseOpSettings
function UIKRetargetCopyBasePoseController:GetSettings() end

