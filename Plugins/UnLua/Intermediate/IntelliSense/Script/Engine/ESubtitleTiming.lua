---Externally-Timed subtitles must be manually added and removed with USubtitlesSubsystem::QueueSubtitle and ::StopSubtitle.
---For the initial delay before becoming visible, use USubtitleAssetUserData::StartOffset instead of this enum.
---@class ESubtitleTiming
---@field public InternallyTimed integer
---@field public ExternallyTimed integer
---@field public ESubtitleTiming_MAX integer
local ESubtitleTiming = {}
