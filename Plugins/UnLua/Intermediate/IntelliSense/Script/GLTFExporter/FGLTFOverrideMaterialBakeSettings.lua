---@class FGLTFOverrideMaterialBakeSettings
---@field public bOverrideSize boolean @If enabled, default size will be overridden by the corresponding property.
---@field public Size FGLTFMaterialBakeSize @Overrides default size of the baked out texture.
---@field public bOverrideFilter boolean @If enabled, default filtering mode will be overridden by the corresponding property.
---@field public Filter integer @Overrides the default filtering mode used when sampling the baked out texture.
---@field public bOverrideTiling boolean @If enabled, default addressing mode will be overridden by the corresponding property.
---@field public Tiling integer @Overrides the default addressing mode used when sampling the baked out texture.
local FGLTFOverrideMaterialBakeSettings = {}
