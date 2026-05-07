---@class UMaterialExpressionUserSceneTexture : UMaterialExpression
---@field public Coordinates FExpressionInput @Ignored if not specified
---@field public UserSceneTexture string @User Scene Texture (screen space texture with a user specified name, written by a previous PostProcess shader) to make a lookup into
---@field public bFiltered boolean @Whether to use point sampled texture lookup (default) or using [bi-linear] filtered (can be slower, avoid faceted lock with distortions)
---@field public bClamped boolean @Whether to clamp the texture lookup.  Necessary when sampling a UserSceneTexture at reduced resolution with filtering, to avoid blending out of bounds pixels.
local UMaterialExpressionUserSceneTexture = {}

