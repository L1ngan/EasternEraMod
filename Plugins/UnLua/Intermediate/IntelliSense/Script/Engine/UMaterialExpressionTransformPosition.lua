---@class UMaterialExpressionTransformPosition : UMaterialExpression
---@field public Input FExpressionInput @input expression for this transform
---@field public TransformSourceType integer @source format of the position that will be transformed
---@field public TransformType integer @type of transform to apply to the input expression
---@field public PeriodicWorldTileSize FExpressionInput @Distance the camera can move before the world origin is moved
---@field public FirstPersonInterpolationAlpha FExpressionInput @Interpolates between world space and first person space. Valid range is [0, 1], from world space to first person space. Defaults to 'ConstFirstPersonInterpolationAlpha' if not specified.
---@field public ConstPeriodicWorldTileSize number @only used if PeriodicWorldTileSize is not hooked up
---@field public ConstFirstPersonInterpolationAlpha number @Only used if FirstPersonInterpolationAlpha is not hooked up. Interpolates between translated world space and first person space. Valid range is [0, 1], from translated world space to first person space.
---@field private bUsesPeriodicWorldPosition boolean
---@field private bUsesFirstPersonInterpolationAlpha boolean
local UMaterialExpressionTransformPosition = {}

