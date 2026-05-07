---@class UMaterialExpressionSceneTexture : UMaterialExpression
---@field public Coordinates FExpressionInput @Ignored if not specified
---@field public SceneTextureId integer @Which scene texture (screen aligned texture) we want to make a lookup into
---@field public bFiltered boolean @Whether to use point sampled texture lookup (default) or using [bi-linear] filtered (can be slower, avoid faceted lock with distortions), some SceneTextures cannot be filtered
local UMaterialExpressionSceneTexture = {}

