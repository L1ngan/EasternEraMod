---Defines how a sound oscillates
---@class USoundNodeOscillator : USoundNode
---@field public bModulateVolume boolean @Whether to oscillate volume.
---@field public bModulatePitch boolean @Whether to oscillate pitch.
---@field public AmplitudeMin number @An amplitude of 0.25 would oscillate between 0.75 and 1.25.
---@field public AmplitudeMax number @An amplitude of 0.25 would oscillate between 0.75 and 1.25.
---@field public FrequencyMin number @A frequency of 20 would oscillate at 10Hz.
---@field public FrequencyMax number @A frequency of 20 would oscillate at 10Hz.
---@field public OffsetMin number @Offset into the sine wave. Value modded by 2 * PI.
---@field public OffsetMax number @Offset into the sine wave. Value modded by 2 * PI.
---@field public CenterMin number @A center of 0.5 would oscillate around 0.5.
---@field public CenterMax number @A center of 0.5 would oscillate around 0.5.
local USoundNodeOscillator = {}

