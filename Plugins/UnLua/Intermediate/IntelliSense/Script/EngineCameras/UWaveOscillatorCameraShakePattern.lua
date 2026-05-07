---A camera shake that uses oscillations to move the camera.
---@class UWaveOscillatorCameraShakePattern : USimpleCameraShakePattern
---@field public LocationAmplitudeMultiplier number @Amplitude multiplier for all location oscillation
---@field public LocationFrequencyMultiplier number @Frequency multiplier for all location oscillation
---@field public X FWaveOscillator @Oscillation in the X axis.
---@field public Y FWaveOscillator @Oscillation in the Y axis.
---@field public Z FWaveOscillator @Oscillation in the Z axis.
---@field public RotationAmplitudeMultiplier number @Amplitude multiplier for all rotation oscillation
---@field public RotationFrequencyMultiplier number @Frequency multiplier for all rotation oscillation
---@field public Pitch FWaveOscillator @Pitch oscillation.
---@field public Yaw FWaveOscillator @Yaw oscillation.
---@field public Roll FWaveOscillator @Roll oscillation.
---@field public FOV FWaveOscillator @FOV oscillation.
local UWaveOscillatorCameraShakePattern = {}

