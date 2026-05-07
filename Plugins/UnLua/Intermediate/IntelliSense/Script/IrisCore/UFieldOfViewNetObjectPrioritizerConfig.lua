---@class UFieldOfViewNetObjectPrioritizerConfig : UNetObjectPrioritizerConfig
---@field public InnerSphereRadius number @Inner sphere radius that will set InnerSpherePriority on objects in it.
---@field public InnerSpherePriority number @Priority for objects inside the inner sphere
---@field public OuterSphereRadius number @Outer sphere radius that will set OuterSpherePriority on objects in it.
---@field public OuterSpherePriority number @Priority for objects inside the outer sphere
---@field public ConeFieldOfViewDegrees number @The field of view used to form the cone.
---@field public InnerConeLength number @Give max cone priority up to this length of the cone.
---@field public ConeLength number @Total cone length.
---@field public MinConePriority number @The minimum priority to set for objects within the cone. The priority falls off linearly from InnerConeLength to ConeLength.
---@field public MaxConePriority number @The maximum priority to set for objects within the cone, up to InnerConeLength. The priority falls off linearly from InnerConeLength to ConeLength.
---@field public LineOfSightWidth number @Line of sight length is same as cone length but the width needs to be specified.
---@field public LineOfSightPriority number @Priority for objects in line of sight.
---@field public OutsidePriority number @Priority outside the field of view cone, spheres and line of sight
local UFieldOfViewNetObjectPrioritizerConfig = {}

