---The blueprint/python API for editing a Curve Remap Op
---@class UIKRetargetCurveRemapController : UIKRetargetOpControllerBase
local UIKRetargetCurveRemapController = {}

---Set the op settings. Input is a custom struct type for this op.
---       * @@param InSettings a FIKRetargetCurveRemapOpSettings struct containing all the settings to apply to this op
---@param InSettings FIKRetargetCurveRemapOpSettings
function UIKRetargetCurveRemapController:SetSettings(InSettings) end

---Get the current op settings as a struct.
---       * @@return FIKRetargetCurveRemapOpSettings struct with the current settings used by the op.
---@return FIKRetargetCurveRemapOpSettings
function UIKRetargetCurveRemapController:GetSettings() end

