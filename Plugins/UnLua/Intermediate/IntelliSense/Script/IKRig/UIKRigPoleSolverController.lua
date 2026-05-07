---The blueprint/python API for modifying a Pole solver's settings in an IK Rig.
---@class UIKRigPoleSolverController : UIKRigSolverControllerBase
local UIKRigPoleSolverController = {}

---Set the solver settings. Input is a custom struct type for this solver.
---       * @@param InSettings a FIKRigPoleSolverSettings struct containing all the settings to apply to this solver
---@param InSettings FIKRigPoleSolverSettings
function UIKRigPoleSolverController:SetSolverSettings(InSettings) end

---Get the current solver settings as a struct.
---       * @@return FIKRigPoleSolverSettings struct with the current settings used by the solver.
---@return FIKRigPoleSolverSettings
function UIKRigPoleSolverController:GetSolverSettings() end

