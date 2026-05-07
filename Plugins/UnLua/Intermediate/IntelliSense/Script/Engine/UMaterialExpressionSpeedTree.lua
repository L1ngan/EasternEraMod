---@class UMaterialExpressionSpeedTree : UMaterialExpression
---@field public GeometryInput FExpressionInput @Defaults to 'WindType' if not specified
---@field public WindInput FExpressionInput @Defaults to 'GeometryType' if not specified
---@field public LODInput FExpressionInput @Defaults to 'LODType' if not specified
---@field public ExtraBendWS FExpressionInput @An extra bending of the tree for local effects
---@field public GeometryType integer @The type of SpeedTree geometry on which this material will be used
---@field public WindType integer @The type of wind effect used on this tree. This can only go as high as it was in the SpeedTree Modeler, but you can set it to a lower option for lower quality wind and faster rendering.
---@field public LODType integer @The type of LOD to use
---@field public BillboardThreshold number @The threshold for triangles to be removed from the bilboard mesh when not facing the camera (0 = none pass, 1 = all pass).
---@field public bAccurateWindVelocities boolean @Support accurate velocities from wind. This will incur extra cost per vertex.
local UMaterialExpressionSpeedTree = {}

