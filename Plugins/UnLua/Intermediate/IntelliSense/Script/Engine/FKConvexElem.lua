---One convex hull, used for simplified collision.
---@class FKConvexElem : FKShapeElem
---@field public VertexData TArray<FVector> @Array of indices that make up the convex hull.
---@field public IndexData TArray<integer>
---@field public ElemBox FBox @Bounding box of this convex hull.
---@field private Transform FTransform @Transform of this element
local FKConvexElem = {}
