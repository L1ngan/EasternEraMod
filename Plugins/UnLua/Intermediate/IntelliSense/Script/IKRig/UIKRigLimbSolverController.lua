---The blueprint/python API for modifying an Full-Body IK solver's settings in an IK Rig.
---* Can adjust Solver, Goal and Bone settings.
---@class UIKRigLimbSolverController : UIKRigSolverControllerBase
local UIKRigLimbSolverController = {}

---Set the solver settings. Input is a custom struct type for this solver.
---       * @@param InSettings a FIKRigLimbSolverSettings struct containing all the settings to apply to this solver
---@param InSettings FIKRigLimbSolverSettings
function UIKRigLimbSolverController:SetSolverSettings(InSettings) end

---Get the current solver settings as a struct.
---       * @@return FIKRigLimbSolverSettings struct with the current settings used by the solver.
---@return FIKRigLimbSolverSettings
function UIKRigLimbSolverController:GetSolverSettings() end

