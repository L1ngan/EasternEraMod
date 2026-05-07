---The blueprint/python API for editing a Scale Source Op
---@class UIKRetargetScaleSourceController : UIKRetargetOpControllerBase
local UIKRetargetScaleSourceController = {}

---Set the op settings. Input is a custom struct type for this op.
---       * @@param InSettings a FIKRetargetScaleSourceOpSettings struct containing all the settings to apply to this op
---@param InSettings FIKRetargetScaleSourceOpSettings
function UIKRetargetScaleSourceController:SetSettings(InSettings) end

---Get the current op settings as a struct.
---       * @@return FIKRetargetScaleSourceOpSettings struct with the current settings used by the op.
---@return FIKRetargetScaleSourceOpSettings
function UIKRetargetScaleSourceController:GetSettings() end

