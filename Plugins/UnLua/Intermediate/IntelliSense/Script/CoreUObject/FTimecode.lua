---A timecode that stores time in HH:MM:SS format with the remainder of time represented by an integer frame count.
---@class FTimecode
---@field public Hours integer
---@field public Minutes integer
---@field public Seconds integer
---@field public Frames integer
---@field public Subframe number
---@field public bDropFrameFormat boolean @If true, this Timecode represents a Drop Frame timecode used to account for fractional frame rates in NTSC play rates.
local FTimecode = {}
