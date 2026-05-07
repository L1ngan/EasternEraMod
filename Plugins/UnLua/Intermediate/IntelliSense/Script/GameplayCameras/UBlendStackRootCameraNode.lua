---Root camera node for running a camera rig in a blend stack.
---This camera node wraps both the camera rig's root node, and the
---blend node used to blend it.
---@class UBlendStackRootCameraNode : UCameraNode
---@field public Blend UBlendCameraNode @The blend to use on the camera rig.
---@field public RootNode UCameraNode @The root of the instantied camera node tree.
local UBlendStackRootCameraNode = {}

