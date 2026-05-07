---@class UParticleModuleSizeScale : UParticleModuleSizeBase
---@field public SizeScale FRawDistributionVector @The amount the BaseSize should be scaled before being used as the size of the particle. The value is retrieved using the RelativeTime of the particle during its update. NOTE: this module overrides any size adjustments made prior to this module in that frame.
---@field public EnableX boolean @Ignored
---@field public EnableY boolean @Ignored
---@field public EnableZ boolean @Ignored
local UParticleModuleSizeScale = {}

