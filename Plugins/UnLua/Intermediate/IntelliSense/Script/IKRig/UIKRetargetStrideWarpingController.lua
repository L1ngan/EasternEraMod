---The blueprint/python API for editing a Stride Warping Op
---@class UIKRetargetStrideWarpingController : UIKRetargetOpControllerBase
local UIKRetargetStrideWarpingController = {}

---Set the solver settings. Input is a custom struct type for this solver.
---       * @@param InSettings a FIKRetargetStrideWarpingOpSettings struct containing all the settings to apply to this op
---@param InSettings FIKRetargetStrideWarpingOpSettings
function UIKRetargetStrideWarpingController:SetSettings(InSettings) end

---Get the current op settings as a struct.
---       * @@return FIKRetargetStrideWarpingOpSettings struct with the current settings used by the op.
---@return FIKRetargetStrideWarpingOpSettings
function UIKRetargetStrideWarpingController:GetSettings() end

