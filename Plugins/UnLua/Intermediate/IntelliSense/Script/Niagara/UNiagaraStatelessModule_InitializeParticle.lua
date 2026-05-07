---Initialize common particle attributes using common settings and options.
---@class UNiagaraStatelessModule_InitializeParticle : UNiagaraStatelessModule
---@field public LifetimeDistribution FNiagaraDistributionRangeFloat
---@field public ColorDistribution FNiagaraDistributionRangeColor
---@field public MassDistribution FNiagaraDistributionRangeFloat
---@field public SpriteSizeDistribution FNiagaraDistributionRangeVector2
---@field public SpriteRotationDistribution FNiagaraDistributionRangeFloat
---@field public MeshScaleDistribution FNiagaraDistributionRangeVector3
---@field public bWriteRibbonWidth boolean
---@field public RibbonWidthDistribution FNiagaraDistributionRangeFloat
---@field public InitialPositionDistribution FNiagaraDistributionPosition
local UNiagaraStatelessModule_InitializeParticle = {}

