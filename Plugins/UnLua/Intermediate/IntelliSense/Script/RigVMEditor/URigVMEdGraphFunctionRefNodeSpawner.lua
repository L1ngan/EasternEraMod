---@class URigVMEdGraphFunctionRefNodeSpawner : URigVMEdGraphNodeSpawner
---@field private ReferencedPublicFunctionHeader FRigVMGraphFunctionHeader @The public function definition we will spawn from [optional]
---@field private bIsLocalFunction boolean @Marked as true for local function definitions
---@field private AssetPath FSoftObjectPath
local URigVMEdGraphFunctionRefNodeSpawner = {}

