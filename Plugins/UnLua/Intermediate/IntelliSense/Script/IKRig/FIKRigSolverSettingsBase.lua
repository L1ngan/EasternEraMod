---This is the base class for defining editable settings for your custom IKRig solver.
---All user-configurable properties for your solver should be stored in a subclass of this
---NOTE: the derived type must be returned by the solver's GetSolverSettingsType() and GetSolverSettings()
---@class FIKRigSolverSettingsBase : FIKRigSettingsBase
local FIKRigSolverSettingsBase = {}
