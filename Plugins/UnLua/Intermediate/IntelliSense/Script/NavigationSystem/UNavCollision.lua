---@class UNavCollision : UNavCollisionBase
---@field public CylinderCollision TArray<FNavCollisionCylinder> @list of nav collision cylinders
---@field public BoxCollision TArray<FNavCollisionBox> @list of nav collision boxes
---@field public AreaClass TSubclassOf<UNavArea> @navigation area type that will be use when this static mesh is used as     a navigation obstacle. See bIsDynamicObstacle.     Empty AreaClass means the default obstacle class will be used
---@field public bGatherConvexGeometry boolean @If set, convex collisions will be exported offline for faster runtime navmesh building (increases memory usage)
---@field public bCreateOnClient boolean @If false, will not create nav collision when connecting as a client
local UNavCollision = {}

