---@class FAnimationSharingScalability
---@field public UseBlendTransitions FPerPlatformBool @Flag whether or not to use blend transitions between states
---@field public BlendSignificanceValue FPerPlatformFloat @Significance value tied to whether or not a transition should be blended
---@field public MaximumNumberConcurrentBlends FPerPlatformInt @Maximum number of blends which can be running concurrently
---@field public TickSignificanceValue FPerPlatformFloat @Significance value tied to whether or not the leader pose components should be ticking
local FAnimationSharingScalability = {}
