---Data controlling the spawning of particles
---@class FNiagaraSpawnInfo
---@field public Count integer @How many particles to spawn.
---@field public InterpStartDt number @The sub frame delta time at which to spawn the first particle.
---@field public IntervalDt number @The sub frame delta time between each particle.
---@field public SpawnGroup integer @An integer used to identify this spawn info. Typically this is unused. An example usage is when using multiple spawn modules to spawn from multiple discreet locations.
local FNiagaraSpawnInfo = {}
