---Deprecated, use FClothPhysicalMeshData instead.
---NV specific spatial simulation data for a mesh.
---@class UClothPhysicalMeshDataNv_Legacy : UClothPhysicalMeshDataBase_Legacy
---@field public MaxDistances TArray<number> @The distance that each vertex can move away from its reference (skinned) position
---@field public BackstopDistances TArray<number> @Distance along the plane of the surface that the particles can travel (separation constraint)
---@field public BackstopRadiuses TArray<number> @Radius of movement to allow for backstop movement
---@field public AnimDriveMultipliers TArray<number> @Strength of anim drive per-particle (spring driving particle back to skinned location
local UClothPhysicalMeshDataNv_Legacy = {}

