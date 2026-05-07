---Converts an integer to a name
---@class FRigVMFunction_MathIntToName : FRigVMFunction_MathIntBase
---@field public Number integer
---@field public PaddedSize integer @* For positive numbers you can pad the result to a required with * so rather than '13' return '00013' for a padded size of 5.
---@field public Result string
local FRigVMFunction_MathIntToName = {}
