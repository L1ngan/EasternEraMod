---Parameters used to compute radial damage
---@class FRadialDamageParams
---@field public BaseDamage number @Max damage done
---@field public MinimumDamage number @Damage will not fall below this if within range
---@field public InnerRadius number @Within InnerRadius, do max damage
---@field public OuterRadius number @Outside OuterRadius, do no damage
---@field public DamageFalloff number @Describes amount of exponential damage falloff
local FRadialDamageParams = {}
