---A base class for a simple camera shake.
---@class USimpleCameraShakePattern : UCameraShakePattern
---@field public Duration number @Duration in seconds of this shake. Zero or less means infinite.
---@field public BlendInTime number @Blend-in time for this shake. Zero or less means no blend-in.
---@field public BlendOutTime number @Blend-out time for this shake. Zero or less means no blend-out.
local USimpleCameraShakePattern = {}

