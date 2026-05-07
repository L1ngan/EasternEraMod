---The blueprint/python API for modifying a Body Mover solver's settings in an IK Rig.
---* Can adjust Solver and Goal settings.
---@class UIKRigBodyMoverController : UIKRigSolverControllerBase
local UIKRigBodyMoverController = {}

---Set the solver settings. Input is a custom struct type for this solver.
---       * @@param InSettings a FIKRigBodyMoverSettings struct containing all the settings to apply to this solver
---@param InSettings FIKRigBodyMoverSettings
function UIKRigBodyMoverController:SetSolverSettings(InSettings) end

---Set the settings for the specified goal.
---       * @@param InGoalName: the name of the goal to assign the settings to.
---       * @@param InSettings: a custom struct type with all the settings for a goal
---@param InGoalName string
---@param InSettings FIKRigBodyMoverGoalSettings
function UIKRigBodyMoverController:SetGoalSettings(InGoalName, InSettings) end

---Get the current solver settings as a struct.
---       * @@return FIKRigBodyMoverSettings struct with the current settings used by the solver.
---@return FIKRigBodyMoverSettings
function UIKRigBodyMoverController:GetSolverSettings() end

---Get the settings for the specified goal.
---       * @@param InGoalName the name of the goal to get settings for
---       * @@return FIKRigBodyMoverGoalSettings struct (empty if the specified goal does not belong to this solver)
---@param InGoalName string
---@return FIKRigBodyMoverGoalSettings
function UIKRigBodyMoverController:GetGoalSettings(InGoalName) end

