---@class UMaterialExpressionSkyAtmosphereAerialPerspective : UMaterialExpression
---@field public WorldPosition FExpressionInput @World position of the sample. If not specified, the pixel world position will be used. Larger distance will result in more fog. Please make sure .SkyAtmosphere.AerialPerspectiveLUT.Depth is set far enough to have fog data.               If you are scaling the sky dome pixel world position, make sure it is centered around the origin.
---@field public WorldPositionOriginType EPositionOrigin @Defines the reference space for the WorldPosition input.
local UMaterialExpressionSkyAtmosphereAerialPerspective = {}

