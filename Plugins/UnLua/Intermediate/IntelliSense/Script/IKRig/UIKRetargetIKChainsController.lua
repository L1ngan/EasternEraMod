---The blueprint/python API for editing a IK Chains Op
---@class UIKRetargetIKChainsController : UIKRetargetOpControllerBase
local UIKRetargetIKChainsController = {}

---Set the op settings. Input is a custom struct type for this op.
---       * @@param InSettings a FIKRetargetIKChainsOpSettings struct containing all the settings to apply to this op
---@param InSettings FIKRetargetIKChainsOpSettings
function UIKRetargetIKChainsController:SetSettings(InSettings) end

---Get the current op settings as a struct.
---       * @@return FIKRetargetIKChainsOpSettings struct with the current settings used by the op.
---@return FIKRetargetIKChainsOpSettings
function UIKRetargetIKChainsController:GetSettings() end

