---@class UMaterialExpressionTextureCoordinate : UMaterialExpression
---@field public CoordinateIndex integer @Texture coordinate index
---@field public UTiling number @Controls how much the texture tiles horizontally, by scaling the U component of the vertex UVs by the specified amount.
---@field public VTiling number @Controls how much the texture tiles vertically, by scaling the V component of the vertex UVs by the specified amount.
---@field public UnMirrorU boolean @Would like to unmirror U or V - if the texture is mirrored and if you would like to undo mirroring for this texture sample, use this to unmirror
---@field public UnMirrorV boolean
local UMaterialExpressionTextureCoordinate = {}

