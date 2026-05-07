---@class UPhysicsCollisionHandler : UObject
---@field public ImpactThreshold number @How hard an impact must be to trigger effect/sound
---@field public ImpactReFireDelay number @Min time between effect/sound being triggered
---@field public DefaultImpactSound USoundBase @Sound to play
---@field public LastImpactSoundTime number @Time since last impact sound
local UPhysicsCollisionHandler = {}

