---Struct for handling positions relative to a base actor, which is potentially moving
---@class FBasedPosition
---@field public Base AActor @Actor that is the base
---@field public Position FVector @Position relative to the base actor
---@field public CachedBaseLocation FVector
---@field public CachedBaseRotation FRotator
---@field public CachedTransPosition FVector
local FBasedPosition = {}
