---A blend node that blends translation and rotation differently.
---@class ULocationRotationBlendCameraNode : UBlendCameraNode
---@field public LocationBlend USimpleBlendCameraNode @The blend to use for the camera's translation.
---@field public RotationBlend USimpleBlendCameraNode @The blend to use for the camera's rotation.
---@field public OtherBlend USimpleBlendCameraNode @The blend to use for everything else.
local ULocationRotationBlendCameraNode = {}

