---A collision event data structure
---@class FChaosCollisionEventData
---@field public Location FVector @Location of the collision event
---@field public Normal FVector @Normal of the collision event
---@field public Velocity1 FVector @The velocity of object 1 of the collision event
---@field public Velocity2 FVector @The velocity of object 2 of the collision event
---@field public Mass1 number @The mass of object 1 of the collision event
---@field public Mass2 number @The mass of object 2 of the collision event
---@field public Impulse FVector @The accumulated impulse vector of the collision event
local FChaosCollisionEventData = {}
