---Damage threshold modifiers, used by the Chaos destruction system
---@class FPhysicalMaterialDamageModifier
---@field public DamageThresholdMultiplier number @Multiplier for the geometry collection damage thresholds/ internal strain this allows for setting up unit damage threshold and use the material to scale them to the desired range of values Note that the geometry collection asset needs to opt-in for the material modifer to be able to use it
local FPhysicalMaterialDamageModifier = {}
