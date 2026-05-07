---TODO: Add sleep and wake state change types to this enum, so that the
---OnComponentWake and OnComponentSleep delegates may be deprecated.
---Doing so would save a couple bytes per primitive component.
---@class EComponentPhysicsStateChange
---@field public Created integer
---@field public Destroyed integer
---@field public EComponentPhysicsStateChange_MAX integer
local EComponentPhysicsStateChange = {}
