---Settings used to define collision event requests
---@class FChaosCollisionEventRequestSettings
---@field public MaxNumberResults integer @The maximum number of results to return.
---@field public MinMass number @The minimum mass threshold for the results (compared with min of particle 1 mass and particle 2 mass).
---@field public MinSpeed number @The min speed threshold for the results (compared with min of particle 1 speed and particle 2 speed).
---@field public MinImpulse number @The minimum impulse threshold for the results.
---@field public MaxDistance number @The maximum distance threshold for the results.
---@field public SortMethod EChaosCollisionSortMethod @The method used to sort the collision events.
local FChaosCollisionEventRequestSettings = {}
