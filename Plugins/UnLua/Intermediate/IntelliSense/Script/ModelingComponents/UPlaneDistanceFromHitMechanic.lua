---UPlaneDistanceFromHitMechanic implements an interaction where a Height/Distance from a plane
---is defined by intersecting a ray with a target mesh, and then using that hit point to define the distance.
---Optionally the hit point can be snapped (eg to a world grid), and also the ray can hit other objects to define the height.
---@class UPlaneDistanceFromHitMechanic : UInteractionMechanic
local UPlaneDistanceFromHitMechanic = {}

