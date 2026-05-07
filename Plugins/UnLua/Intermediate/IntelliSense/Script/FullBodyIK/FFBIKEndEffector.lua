---@class FFBIKEndEffector
---@field public Item FRigElementKey @The last item in the chain to solve - the effector
---@field public Position FVector
---@field public PositionAlpha number
---@field public PositionDepth integer
---@field public Rotation FQuat
---@field public RotationAlpha number
---@field public RotationDepth integer
---@field public Pull number @* Clamps the total length to target by this scale for each iteration * This helps to stabilize solver to reduce singularity by avoiding to try to reach target too far.
local FFBIKEndEffector = {}
