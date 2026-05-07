---The blueprint/python API for editing a FK Chains Op
---@class UIKRetargetFKChainsController : UIKRetargetOpControllerBase
local UIKRetargetFKChainsController = {}

---Set the op settings. Input is a custom struct type for this op.
---       * @@param InSettings a FIKRetargetFKChainsOpSettings struct containing all the settings to apply to this op
---@param InSettings FIKRetargetFKChainsOpSettings
function UIKRetargetFKChainsController:SetSettings(InSettings) end

---Get the current op settings as a struct.
---       * @@return FIKRetargetFKChainsOpSettings struct with the current settings used by the op.
---@return FIKRetargetFKChainsOpSettings
function UIKRetargetFKChainsController:GetSettings() end

