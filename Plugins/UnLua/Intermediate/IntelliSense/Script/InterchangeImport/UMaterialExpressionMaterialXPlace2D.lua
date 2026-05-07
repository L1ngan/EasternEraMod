---Transform incoming UV texture coordinates from one 2D frame of reference to another.
---operationorder (integer enum): the order in which to perform the transform operations.
---"0" or "SRT" performs -pivot, scale, rotate, translate, +pivot as per the original
---implementation matching the behavior of certain DCC packages, and "1" or "TRS" performs
----pivot, translate, rotate, scale, +pivot which does not introduce texture shear.
---Default is 0 "SRT" for backward compatibility.
---@class UMaterialExpressionMaterialXPlace2D : UMaterialExpression
---@field public Coordinates FExpressionInput @Defaults to 'ConstCoordinate' if not specified
---@field public Pivot FExpressionInput @The pivot coordinate for scale and rotate: this is subtracted from u,v before applying scale/rotate, then added back after. Default is (0,0).
---@field public Scale FExpressionInput @Divide the u,v coord (after subtracting pivot ) by this, so a scale (2,2) makes the texture image appear twice as big. Negative values can be used to flip or flop the texture space. Default is (1,1).
---@field public Offset FExpressionInput @Subtract this amount from the scaled/rotated/“pivot added back” UV coordinate; since U0,V0 is typically the lower left corner, a positive offset moves the texture image up and right. Default is (0,0).
---@field public RotationAngle FExpressionInput @Defaults to 'ConstRotationAngle' if not specified
---@field public ConstRotationAngle number @only used if RotationAngle is not hooked up
---@field public ConstCoordinate integer @only used if Coordinates is not hooked up
local UMaterialExpressionMaterialXPlace2D = {}

