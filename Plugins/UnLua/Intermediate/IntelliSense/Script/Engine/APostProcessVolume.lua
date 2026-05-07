---for FPostprocessSettings
---@class APostProcessVolume : AVolume
---@field public Settings FPostProcessSettings @Post process settings to use for this volume.
---@field public Priority number @Priority of this volume. In the case of overlapping volumes the one with the highest priority overrides the lower priority ones. The order is undefined if two or more overlapping volumes have the same priority.
---@field public BlendRadius number @World space radius around the volume that is used for blending (only if not unbound).
---@field public BlendWeight number @0:no effect, 1:full effect
---@field public bEnabled boolean @Whether this volume is enabled or not.
---@field public bUnbound boolean @Whether this volume covers the whole world, or just the area inside its bounds.
local APostProcessVolume = {}

