---This is the base class for defining editable per-goal settings for your custom IKRig solver.
---For example, your solver could have a "Strength" value for goals, which can go here.
---NOTE: the derived type must be returned by the solver's GetGoalSettingsType() and GetGoalSettings()
---@class FIKRigGoalSettingsBase : FIKRigSettingsBase
---@field public Goal string @The IKRig Goal that these settings are applied to.
local FIKRigGoalSettingsBase = {}
