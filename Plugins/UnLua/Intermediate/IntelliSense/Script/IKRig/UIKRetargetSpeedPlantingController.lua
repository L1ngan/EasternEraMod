---The blueprint/python API for editing a Speed Planting Op
---@class UIKRetargetSpeedPlantingController : UIKRetargetOpControllerBase
local UIKRetargetSpeedPlantingController = {}

---Set the op settings. Input is a custom struct type for this op.
---       * @@param InSettings a FIKRetargetSpeedPlantingOpSettings struct containing all the settings to apply to this op
---@param InSettings FIKRetargetSpeedPlantingOpSettings
function UIKRetargetSpeedPlantingController:SetSettings(InSettings) end

---Get the current op settings as a struct.
---       * @@return FIKRetargetSpeedPlantingOpSettings struct with the current settings used by the op.
---@return FIKRetargetSpeedPlantingOpSettings
function UIKRetargetSpeedPlantingController:GetSettings() end

