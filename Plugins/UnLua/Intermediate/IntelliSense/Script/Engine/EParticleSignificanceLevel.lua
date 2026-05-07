---A level of significance for a particle system. Used by game code to enable/disable emitters progressively as they move away from the camera or are occluded/off screen.
---@class EParticleSignificanceLevel
---@field public Low integer
---@field public Medium integer
---@field public High integer
---@field public Critical integer
---@field public Num integer
---@field public EParticleSignificanceLevel_MAX integer
local EParticleSignificanceLevel = {}
