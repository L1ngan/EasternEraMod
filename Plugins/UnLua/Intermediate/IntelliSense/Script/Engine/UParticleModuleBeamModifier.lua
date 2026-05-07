---@class UParticleModuleBeamModifier : UParticleModuleBeamBase
---@field public ModifierType integer @Whether this module modifies the Source or the Target.
---@field public PositionOptions FBeamModifierOptions @The options associated with the position.
---@field public Position FRawDistributionVector @The value to use when modifying the position.
---@field public TangentOptions FBeamModifierOptions @The options associated with the Tangent.
---@field public Tangent FRawDistributionVector @The value to use when modifying the Tangent.
---@field public bAbsoluteTangent boolean @If true, don't transform the tangent modifier into the tangent basis.
---@field public StrengthOptions FBeamModifierOptions @The options associated with the Strength.
---@field public Strength FRawDistributionFloat @The value to use when modifying the Strength.
local UParticleModuleBeamModifier = {}

