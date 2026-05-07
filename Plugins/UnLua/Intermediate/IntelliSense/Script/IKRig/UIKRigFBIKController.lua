---The blueprint/python API for modifying an Full-Body IK solver's settings in an IK Rig.
---* Can adjust Solver, Goal and Bone settings.
---@class UIKRigFBIKController : UIKRigSolverControllerBase
local UIKRigFBIKController = {}

---Set the solver settings. Input is a custom struct type for this solver.
---       * @@param InSettings a FIKRigFBIKSettings struct containing all the settings to apply to this solver
---@param InSettings FIKRigFBIKSettings
function UIKRigFBIKController:SetSolverSettings(InSettings) end

---Set the settings for the specified goal.
---       * @@param InGoalName: the name of the goal to assign the settings to.
---       * @@param InSettings: a custom struct type with all the settings for an FBIK goal
---@param InGoalName string
---@param InSettings FIKRigFBIKGoalSettings
function UIKRigFBIKController:SetGoalSettings(InGoalName, InSettings) end

---Apply settings to a given bone
---       * @@param InBoneName the name of the bone to apply the settings to
---       * @@param InSettings a FIKRigFBIKBoneSettings struct containing the settings
---@param InBoneName string
---@param InSettings FIKRigFBIKBoneSettings
function UIKRigFBIKController:SetBoneSettings(InBoneName, InSettings) end

---Get the current solver settings as a struct.
---       * @@return FIKRigFBIKSettings struct with the current settings used by the solver.
---@return FIKRigFBIKSettings
function UIKRigFBIKController:GetSolverSettings() end

---Get the settings for the specified goal.
---       * @@param InGoalName the name of the goal to get settings for
---       * @@return FIKRigFBIKGoalSettings struct (empty if the specified goal does not belong to this solver)
---@param InGoalName string
---@return FIKRigFBIKGoalSettings
function UIKRigFBIKController:GetGoalSettings(InGoalName) end

---Get the settings associated with a particular bone.
---       * Note that you must AddBoneSettings() using the IK Rig controller before a bone will have settings on it.
---       * @@param InBoneName the name of the bone to get settings for
---       * @@return FIKRigFBIKBoneSettings struct holding all the settings for the specified bone (or empty if the bone did not have settings)
---@param InBoneName string
---@return FIKRigFBIKBoneSettings
function UIKRigFBIKController:GetBoneSettings(InBoneName) end

