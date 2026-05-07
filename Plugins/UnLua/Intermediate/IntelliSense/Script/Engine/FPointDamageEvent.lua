---Damage subclass that handles damage with a single impact location and source direction
---@class FPointDamageEvent : FDamageEvent
---@field public Damage number @Actual damage done
---@field public ShotDirection FVector_NetQuantizeNormal @Direction the shot came from. Should be normalized.
---@field public HitInfo FHitResult @Describes the trace/location that caused this damage
local FPointDamageEvent = {}
