---Structure to enable shader environment defines per external code declaration.
---E.g. the external code declaration for "ParticleColor" enables the define "NEEDS_PARTICLE_COLOR" when used in the pixel stage.
---@class FMaterialExternalCodeEnvironmentDefine
---@field public Name string @Name of the environment define to enable.
---@field public ShaderFrequency EMaterialShaderFrequency @Optional shader frequency to further restrict this environment define besides its code declaration shader frequency.
local FMaterialExternalCodeEnvironmentDefine = {}
