---@class UGLTFProxyOptions : UObject
---@field public bBakeMaterialInputs boolean @If enabled, a material input may be baked out to a texture (using a simple quad). Baking is only used for non-trivial material inputs (i.e. not simple texture or constant expressions).
---@field public bUseThinTranslucentShadingModel boolean @If enabled, materials with shading model thin translucency will be used. Conversion is only partial.
---@field public DefaultMaterialBakeSize FGLTFMaterialBakeSize @Default size of the baked out texture (containing the material input). Can be overridden by material- and input-specific bake settings, see GLTFMaterialExportOptions.
---@field public DefaultMaterialBakeFilter integer @Default filtering mode used when sampling the baked out texture. Can be overridden by material- and input-specific bake settings, see GLTFMaterialExportOptions.
---@field public DefaultMaterialBakeTiling integer @Default addressing mode used when sampling the baked out texture. Can be overridden by material- and input-specific bake settings, see GLTFMaterialExportOptions.
---@field public DefaultInputBakeSettings TMap<EGLTFMaterialPropertyGroup, FGLTFOverrideMaterialBakeSettings> @Input-specific default bake settings that override the general defaults above.
local UGLTFProxyOptions = {}

function UGLTFProxyOptions:ResetToDefault() end

