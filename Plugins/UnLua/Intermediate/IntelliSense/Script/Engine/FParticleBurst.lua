---@class FParticleBurst
---@field public Count integer @The number of particles to burst
---@field public CountLow integer @If >= 0, use as a range [CountLow..Count]
---@field public Time number @The time at which to burst them (0..1: emitter lifetime)
local FParticleBurst = {}
