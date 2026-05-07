---ULandscapeScratchRenderTarget holds a UTextureRenderTarget2D. It can be used in the landscape tools as transient memory by requesting/releasing an instance via ULandscapeEditResourcesSubsystem
--- It contains information about the current state (ERHIAccess) of the resource in order to automate/minimize state transitions.
--- In order to minimize memory consumption, the internal render target can be larger than what was requested. It's therefore important to take that into account when setting up draw calls on this
--- render target and use GetEffectiveResolution() instead of the RT's resolution
---@class ULandscapeScratchRenderTarget : UObject
---@field private RenderTarget UTextureRenderTarget
local ULandscapeScratchRenderTarget = {}

