---Applies material instance data to a material instance if it hasn't changed since the last time we've applied a template.
---Supports Scalar parameters, Vector parameters, Texture parameters and Static parameters
---@class UDatasmithMaterialInstanceTemplate : UDatasmithObjectTemplate
---@field public ParentMaterial TSoftObjectPtr<UMaterialInterface>
---@field public ScalarParameterValues TMap<string, number>
---@field public VectorParameterValues TMap<string, FLinearColor>
---@field public TextureParameterValues TMap<string, TSoftObjectPtr<UTexture>>
---@field public StaticParameters FDatasmithStaticParameterSetTemplate
local UDatasmithMaterialInstanceTemplate = {}

