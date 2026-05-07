---Outputs Spheres as Points and radius values
---@class FSpheresToPointsDataflowNode : FDataflowNode
---@field private Spheres TArray<FSphere> @Input Spheres
---@field private Points TArray<FVector> @Centers of the spheres
---@field private Radii TArray<number> @Radius values
local FSpheresToPointsDataflowNode = {}
