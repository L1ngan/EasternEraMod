---* This is a wrapper for the Variable frame stripping Codec.
---* It allows for the mass changing of settings on animation sequences in an editor accessible way.
---@class UVariableFrameStrippingSettings : UObject
---@field public UseVariableFrameStripping FPerPlatformBool @Enables the change from standard 1/2 frame stripping to stripping a higher amount of frames per frame kept
---@field public FrameStrippingRate FPerPlatformInt @The number of Frames that are stripped down to one. Allows for overrides of that multiplier. FrameStrippingRate == 1 would strip no frames, Therefore this is clamped to 2.
local UVariableFrameStrippingSettings = {}

