---Base class for subtitle data being attached to assets
---@class USubtitleAssetUserData : UAssetUserData
---@field public Text string @#SUBTITLES_PRD: carried over from FSubtitleCue, still required The text to appear in the subtitle.
---@field public Duration number @#SUBTITLES_PRD: carried over from FSubtitleCue, still required Time to display in seconds. Defaulted to 3 seconds so when adding new subtitles it's not required to enter a placeholder Duration. Duration can be be set by ingestion pipelines when importing Subtitles in bulk
---@field public StartOffset number @Some subtitles have a delay before they're allowed to be displayed (primarily from the legacy system). StartOffset measures how long in Seconds, after queuing, before the subtitle is allowed to enter the active subtitles queue. ESubtitleTiming::ExternallyTimed does not effect this initial delay.
---@field public Priority number @#SUBTITLES_PRD: Priority comes from USoundBase::GetSubtitlePriority, USoundCue::GetSubtitlePriority and USoundWave::GetSubtitlePriority Consolidate various subtitle properties throughout sound/audio code into this new subtitles plugin. Kept the 10000 default in case that's what users are already used to. The priority of the subtitle.  Defaults to 10000.  Higher values will play instead of lower values.
---@field public Esrb ESRB @ESRB rating category.
---@field public SubtitleType ESubtitleType @Subtitle type for type-specific rendering.
local USubtitleAssetUserData = {}

