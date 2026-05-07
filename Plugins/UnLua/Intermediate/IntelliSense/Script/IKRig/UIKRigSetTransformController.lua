---The blueprint/python API for modifying Set Transform settings in an IK Rig.
---@class UIKRigSetTransformController : UIKRigSolverControllerBase
local UIKRigSetTransformController = {}

---Set the solver settings. Input is a custom struct type for this solver.
---       * @@param InSettings a FIKRigSetTransformSettings struct containing all the settings to apply to this solver
---@param InSettings FIKRigSetTransformSettings
function UIKRigSetTransformController:SetSolverSettings(InSettings) end

---Get the current solver settings as a struct.
---       * @@return FIKRigSetTransformSettings struct with the current settings used by the solver.
---@return FIKRigSetTransformSettings
function UIKRigSetTransformController:GetSolverSettings() end

