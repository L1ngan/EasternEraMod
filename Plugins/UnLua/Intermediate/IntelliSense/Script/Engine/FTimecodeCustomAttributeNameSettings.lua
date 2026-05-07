---Settings that identify the names of custom attributes that represent the individual components of a timecode and a subframe along with a take name.
---@class FTimecodeCustomAttributeNameSettings
---@field public HourAttributeName string @Name of the custom attribute representing the hour component of a timecode.
---@field public MinuteAttributeName string @Name of the custom attribute representing the minute component of a timecode.
---@field public SecondAttributeName string @Name of the custom attribute representing the second component of a timecode.
---@field public FrameAttributeName string @Name of the custom attribute representing the frame component of a timecode.
---@field public SubframeAttributeName string @Name of the custom attribute representing a subframe value. Though not strictly a component               of a timecode, this attribute can be authored to identify samples in between timecodes.
---@field public RateAttributeName string @Name of the custom attribute representing the timecode rate. This may be different from           the animation or capture frame rate, for example when capturing "high" frame rate data               at 120 frames per second but recording SMPTE timecode at 30 frames per second.
---@field public TakenameAttributeName string @Name of the custom attribute representing the name of a take.
local FTimecodeCustomAttributeNameSettings = {}
