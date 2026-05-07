---Parameters for scrubbing a camera shake.
---@class FCameraShakePatternScrubParams
---@field public AbsoluteTime number @The time to scrub to
---@field public ShakeScale number @The base scale for this shake
---@field public DynamicScale number @The dynamic scale being passed down from the camera manger for the next update
---@field public POV FMinimalViewInfo @The current view that this camera shake should modify
local FCameraShakePatternScrubParams = {}
