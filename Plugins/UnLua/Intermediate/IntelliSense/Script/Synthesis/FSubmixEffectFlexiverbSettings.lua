---@class FSubmixEffectFlexiverbSettings
---@field public PreDelay number @PreDelay - 0.01 < 10.0 < 40.0 - Amount of delay to the first echo in milliseconds.
---@field public DecayTime number @Time in seconds it will take for the impulse response to decay to -60 dB.
---@field public RoomDampening number @Room Dampening - 0.0 < 0.85 < 1.0 - Frequency at which the room dampens.
---@field public Complexity integer
local FSubmixEffectFlexiverbSettings = {}
