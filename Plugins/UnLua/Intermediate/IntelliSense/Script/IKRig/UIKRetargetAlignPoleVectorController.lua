---The blueprint/python API for editing an Align Pole Vector Op
---@class UIKRetargetAlignPoleVectorController : UIKRetargetOpControllerBase
local UIKRetargetAlignPoleVectorController = {}

---Set the op settings. Input is a custom struct type for this op.
---       * @@param InSettings a FIKRetargetAlignPoleVectorOpSettings struct containing all the settings to apply to this op
---@param InSettings FIKRetargetAlignPoleVectorOpSettings
function UIKRetargetAlignPoleVectorController:SetSettings(InSettings) end

---Get the current op settings as a struct.
---       * @@return FIKRetargetAlignPoleVectorOpSettings struct with the current settings used by the op.
---@return FIKRetargetAlignPoleVectorOpSettings
function UIKRetargetAlignPoleVectorController:GetSettings() end

