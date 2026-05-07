---Make a Rotator
---@class FMakeRotatorDataflowNode : FDataflowNode
---@field private Pitch number @Rotation around the right axis (around Y axis), Looking up and down (0=Straight Ahead, +Up, -Down)
---@field private Yaw number @Rotation around the up axis (around Z axis), Turning around (0=Forward, +Right, -Left)
---@field private Roll number @Rotation around the forward axis (around X axis), Tilting your head, (0=Straight, +Clockwise, -CCW)
---@field private Rotator FRotator @Rotator output
local FMakeRotatorDataflowNode = {}
