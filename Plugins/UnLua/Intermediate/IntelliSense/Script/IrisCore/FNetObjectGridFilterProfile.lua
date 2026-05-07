---Specialized template that configures unique properties.
---Useful when you need to specialize a behavior per class or object type
---@class FNetObjectGridFilterProfile
---@field public FilterProfileName string @The config name used to map to this profile
---@field public FrameCountBeforeCulling integer @Number of frames we keep the object relevant until it is officially culled out.
local FNetObjectGridFilterProfile = {}
