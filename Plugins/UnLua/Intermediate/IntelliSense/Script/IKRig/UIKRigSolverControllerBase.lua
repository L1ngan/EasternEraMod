---@class UIKRigSolverControllerBase : UObject
local UIKRigSolverControllerBase = {}

---Turn the solver on/off in the IK Rig solver stack.
---       * @@param bIsEnabled if true, the solver will execute, false otherwise.
---@param bIsEnabled boolean
function UIKRigSolverControllerBase:SetEnabled(bIsEnabled) end

---Get if the solver is on or off in the IK Rig solver stack.
---       * @@param bIsEnabled returns true if the solver is enabled, false otherwise.
---@return boolean
function UIKRigSolverControllerBase:GetEnabled() end

