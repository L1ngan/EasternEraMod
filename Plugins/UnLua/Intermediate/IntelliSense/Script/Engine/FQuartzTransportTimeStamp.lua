---Transport Time stamp, used for tracking the musical time stamp on a clock
---@class FQuartzTransportTimeStamp
---@field public Bars integer @The current bar this clock is on
---@field public Beat integer @The current beat this clock is on
---@field public BeatFraction number @A fractional representation of the time that's played since the last bear
---@field public Seconds number @The time in seconds that this TimeStamp occured at
local FQuartzTransportTimeStamp = {}
