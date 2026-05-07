---Information about a single tile in a tile set
---@class FPaperTileMetadata
---@field public UserDataName string @A tag that can be used for grouping and categorizing (consider using it as the index into a UDataTable asset).
---@field public CollisionData FSpriteGeometryCollection @Collision data for the tile
---@field public TerrainMembership integer @Indexes into the Terrains array of the owning tile set, in counterclockwise order starting from top-left 0xFF indicates no membership.
local FPaperTileMetadata = {}
