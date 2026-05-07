---A camera shake that uses Perlin noise to shake the camera.
---@class UPerlinNoiseCameraShakePattern : USimpleCameraShakePattern
---@field public LocationAmplitudeMultiplier number @Amplitude multiplier for all location shake
---@field public LocationFrequencyMultiplier number @Frequency multiplier for all location shake
---@field public X FPerlinNoiseShaker @Shake in the X axis.
---@field public Y FPerlinNoiseShaker @Shake in the Y axis.
---@field public Z FPerlinNoiseShaker @Shake in the Z axis.
---@field public RotationAmplitudeMultiplier number @Amplitude multiplier for all rotation shake
---@field public RotationFrequencyMultiplier number @Frequency multiplier for all rotation shake
---@field public Pitch FPerlinNoiseShaker @Pitch shake.
---@field public Yaw FPerlinNoiseShaker @Yaw shake.
---@field public Roll FPerlinNoiseShaker @Roll shake.
---@field public FOV FPerlinNoiseShaker @FOV shake.
local UPerlinNoiseCameraShakePattern = {}

