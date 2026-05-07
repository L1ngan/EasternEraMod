---A single piece of geometry (e.g., a polygon which may be convex or concave, a box, or a circle)
---@class FSpriteGeometryShape
---@field public ShapeType ESpriteShapeType @The type of this piece of geometry
---@field public Vertices TArray<FVector2D> @Vertices for the polygon (valid for Box and Polygon, but empty for Circle)
---@field public BoxSize FVector2D @Size of the box or major/minor dimensions of the circle Note: Only valid when GeometryType is Box or Circle
---@field public BoxPosition FVector2D @Center of the box or circle, acts as the pivot point for polygons (but may not be at the center of them)
---@field public Rotation number @Rotation of the shape (in degrees)
---@field public bNegativeWinding boolean @For Polygon geometry, this tells us if the winding should be negative (CW) regardless of the order in Vertices
local FSpriteGeometryShape = {}
