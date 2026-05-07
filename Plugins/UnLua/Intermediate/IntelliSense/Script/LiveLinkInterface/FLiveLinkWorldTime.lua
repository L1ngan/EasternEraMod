---@class FLiveLinkWorldTime
---@field private Time number @SourceTime for this frame. Used during interpolation and to compute a running clock offset
---@field private Offset number @Value calculated on create to represent the different between the source time and client time Can also be updated afterwards if a better continuous offset is calculated
local FLiveLinkWorldTime = {}
