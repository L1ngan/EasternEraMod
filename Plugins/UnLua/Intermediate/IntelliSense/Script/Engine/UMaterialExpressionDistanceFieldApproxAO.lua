---@class UMaterialExpressionDistanceFieldApproxAO : UMaterialExpression
---@field public Position FExpressionInput @Defaults to current world position if not specified
---@field public WorldPositionOriginType EPositionOrigin @Defines the reference space for the Position input.
---@field public Normal FExpressionInput @Defaults to current world normal if not specified
---@field public BaseDistance FExpressionInput
---@field public BaseDistanceDefault number @only used if BaseDistance is not hooked up
---@field public Radius FExpressionInput
---@field public RadiusDefault number @only used if Radius is not hooked up
---@field public NumSteps integer @Number of samples used to calculate occlusion
---@field public StepScaleDefault number @Used to control step distance distribution
local UMaterialExpressionDistanceFieldApproxAO = {}

