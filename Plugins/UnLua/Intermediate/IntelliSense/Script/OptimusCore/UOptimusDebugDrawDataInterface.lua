---Debug Draw Data Interface provides access to a set of debug drawing hlsl functions
---@class UOptimusDebugDrawDataInterface : UOptimusComputeDataInterface
---@field public bIsSupported boolean @Make sure DirectX12 and Shader Model 6 is enabled in project settings for DebugDraw to function, since DXC is required for shader compilation.
---@field public DebugDrawParameters FOptimusDebugDrawParameters
local UOptimusDebugDrawDataInterface = {}

