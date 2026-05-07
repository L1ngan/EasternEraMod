---Specifies the type of tracking space origin we should use.  Be aware that not all devices support all Tracking Origin types. https://registry.khronos.org/OpenXR/specs/1.0/html/xrspec.html#reference-spaces
---@class EHMDTrackingOrigin
---@field public View integer
---@field public LocalFloor integer
---@field public Local integer
---@field public Stage integer
---@field public CustomOpenXR integer
---@field public EHMDTrackingOrigin_MAX integer
local EHMDTrackingOrigin = {}
