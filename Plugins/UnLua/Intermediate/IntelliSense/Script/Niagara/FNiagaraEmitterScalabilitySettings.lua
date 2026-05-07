---Scalability settings for Niagara Emitters on a particular platform set.
---@class FNiagaraEmitterScalabilitySettings
---@field public Platforms FNiagaraPlatformSet @The platforms on which these settings are active (unless overridden).
---@field public bScaleSpawnCount boolean @Enable spawn count scaling
---@field public SpawnCountScale number @Scale factor applied to spawn counts for this emitter.
local FNiagaraEmitterScalabilitySettings = {}
