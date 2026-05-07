---The blueprint/python API for editing a Run IK Rig Op
---@class UIKRetargetRunIKRigController : UIKRetargetOpControllerBase
local UIKRetargetRunIKRigController = {}

---Set the op settings. Input is a custom struct type for this op.
---       * @@param InSettings a FIKRetargetRunIKRigOpSettings struct containing all the settings to apply to this op
---@param InSettings FIKRetargetRunIKRigOpSettings
function UIKRetargetRunIKRigController:SetSettings(InSettings) end

---Get the current op settings as a struct.
---       * @@return FIKRetargetRunIKRigOpSettings struct with the current settings used by the op.
---@return FIKRetargetRunIKRigOpSettings
function UIKRetargetRunIKRigController:GetSettings() end

