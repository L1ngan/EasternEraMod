---Deprecated, legacy definition kept for backward compatibility only.
---Use FClothConstraintSetupNv instead.
---Redirected from the now defunct ClothingSystemRuntime module.
---@class FClothConstraintSetup_Legacy
---@field public Stiffness number @How stiff this constraint is, this affects how closely it will follow the desired position
---@field public StiffnessMultiplier number @A multiplier affecting the above value
---@field public StretchLimit number @The hard limit on how far this constraint can stretch
---@field public CompressionLimit number @The hard limit on how far this constraint can compress
local FClothConstraintSetup_Legacy = {}
