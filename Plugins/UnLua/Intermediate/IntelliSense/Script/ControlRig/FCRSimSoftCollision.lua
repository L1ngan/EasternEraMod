---@class FCRSimSoftCollision
---@field public Transform FTransform @The world / global transform of the collisoin
---@field public ShapeType ECRSimSoftCollisionType @The type of collision shape
---@field public MinimumDistance number @The minimum distance for the collision. If this is equal or higher than the maximum there's no falloff. For a cone shape this represents the minimum angle in degrees.
---@field public MaximumDistance number @The maximum distance for the collision. If this is equal or lower than the minimum there's no falloff. For a cone shape this represents the maximum angle in degrees.
---@field public FalloffType ERigVMAnimEasingType @The type of falloff to use
---@field public Coefficient number @The strength of the collision force
---@field public bInverted boolean @If set to true the collision volume will be inverted
local FCRSimSoftCollision = {}
