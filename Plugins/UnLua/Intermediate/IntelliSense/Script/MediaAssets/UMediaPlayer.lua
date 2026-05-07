---Implements a media player asset that can play movies and other media sources.
---@class UMediaPlayer : UObject
---@field public OnEndReached MulticastDelegate @A delegate that is invoked when playback has reached the end of the media.
---@field public OnMediaClosed MulticastDelegate @A delegate that is invoked when a media source has been closed.
---@field public OnMediaOpened MulticastDelegate @A delegate that is invoked when a media source has been opened. Depending on whether the underlying player implementation opens the media synchronously or asynchronously, this event may be executed before or after the call to OpenSource / OpenUrl returns.
---@field public OnMediaOpenFailed MulticastDelegate @A delegate that is invoked when a media source has failed to open. This delegate is only executed if OpenSource / OpenUrl returned true and the media failed to open asynchronously later. It is not executed if OpenSource / OpenUrl returned false, indicating an immediate failure.
---@field public OnPlaybackResumed MulticastDelegate @A delegate that is invoked when media playback has been resumed.
---@field public OnPlaybackSuspended MulticastDelegate @A delegate that is invoked when media playback has been suspended.
---@field public OnSeekCompleted MulticastDelegate @A delegate that is invoked when a seek operation completed successfully. Depending on whether the underlying player implementation performs seeks synchronously or asynchronously, this event may be executed before or after the call to Seek returns.
---@field public OnTracksChanged MulticastDelegate @A delegate that is invoked when the media track collection changed.
---@field public OnMetadataChanged MulticastDelegate @A delegate that is invoked when the media metadata changed.
---@field public OnBufferingStart MulticastDelegate @A delegate that is invoked when the player starts buffering data. This event is not sent by all media players.
---@field public OnBufferingCompleted MulticastDelegate @A delegate that may be invoked when the player completes buffering data. This event should not be relied upon since not all media players support this.
---@field public CacheAhead FTimespan @Duration of samples to cache ahead of the play head.
---@field public CacheBehind FTimespan @Duration of samples to cache behind the play head (when not running as game).
---@field public CacheBehindGame FTimespan @Duration of samples to cache behind the play head (when running as game).
---@field public NativeAudioOut boolean @Output any audio via the operating system's sound mixer instead of a Sound Wave asset. If enabled, the assigned Sound Wave asset will be ignored. The SetNativeVolume function can then be used to change the audio output volume at runtime. Note that not all media player plug-ins may support native audio output on all platforms.
---@field public PlayOnOpen boolean @Automatically start playback after media opened successfully. If disabled, listen to the OnMediaOpened Blueprint event to detect when the media finished opening, and then start playback using the Play function.
---@field public Shuffle boolean @Whether playback should shuffle media sources in the play list.
---@field protected Loop boolean @Whether the player should loop when media playback reaches the end. Use the SetLooping function to change this value at runtime.
---@field protected Playlist UMediaPlaylist @The play list to use, if any. Use the OpenPlaylist or OpenPlaylistIndex function to change this value at runtime.
---@field protected PlaylistIndex integer @The current index of the source in the play list being played. Use the Previous and Next methods to change this value at runtime.
---@field protected TimeDelay FTimespan @Delay of the player's time.
---@field protected HorizontalFieldOfView number @The initial horizontal field of view (in Euler degrees; default = 90). This setting is used only for 360 videos. It determines the portion of the video that is visible at a time. To modify the field of view at runtime in Blueprints, use the SetHorizontalFieldOfView function.
---@field protected VerticalFieldOfView number @The initial vertical field of view (in Euler degrees; default = 60). This setting is used only for 360 videos. It determines the portion of the video that is visible at a time. To modify the field of view at runtime in Blueprints, use the SetHorizontalFieldOfView function. Please note that some 360 video players may be able to change only the horizontal field of view, and this setting may be ignored.
---@field protected ViewRotation FRotator @The initial view rotation. This setting is used only for 360 videos. It determines the rotation of the video's view. To modify the view orientation at runtime in Blueprints, use the GetViewRotation and SetViewRotation functions. Please note that not all players may support video view rotations.
---@field private PlayerGuid FGuid @The player's globally unique identifier.
---@field public AffectedByPIEHandling boolean @Whether this player should stop when entering or exiting PIE.
local UMediaPlayer = {}

---Check whether the currently loaded media can jump to a certain position.
---@return boolean
function UMediaPlayer:SupportsSeeking() end

---Check whether the currently loaded media supports scrubbing.
---@return boolean
function UMediaPlayer:SupportsScrubbing() end

---Check whether the specified playback rate is supported.
---@param Rate number
---@param Unthinned boolean
---@return boolean
function UMediaPlayer:SupportsRate(Rate, Unthinned) end

---Check whether the player supports playing back of range within the media.
---@return boolean
function UMediaPlayer:SupportsPlaybackTimeRange() end

---Set the view's rotation (only for 360 videos).
---@param Rotation FRotator
---@param Absolute boolean
---@return boolean
function UMediaPlayer:SetViewRotation(Rotation, Absolute) end

---Set the field of view (only for 360 videos).
---@param Horizontal number
---@param Vertical number
---@param Absolute boolean
---@return boolean
function UMediaPlayer:SetViewField(Horizontal, Vertical, Absolute) end

---Set the frame rate of the specified video track.
---@param TrackIndex integer
---@param FormatIndex integer
---@param FrameRate number
---@return boolean
function UMediaPlayer:SetVideoTrackFrameRate(TrackIndex, FormatIndex, FrameRate) end

---Set the format on the specified track.
---Selecting the format will not switch to the specified track. To switch
---tracks, use SelectTrack instead. If the track is already selected, the
---format change will be applied immediately.
---@param TrackType EMediaPlayerTrack
---@param TrackIndex integer
---@param FormatIndex integer
---@return boolean
function UMediaPlayer:SetTrackFormat(TrackType, TrackIndex, FormatIndex) end

---Delay of the player's time.
---This setting can be used to manually sync multiple sources.
---Set to 1 seconds, if you would like that Player to play 1 second behind its current time.
---If the value is too big, it is possible that the player would not hold that frame for that long.
---@param TimeDelay FTimespan
function UMediaPlayer:SetTimeDelay(TimeDelay) end

---Changes the media's playback rate.
---@param Rate number
---@return boolean
function UMediaPlayer:SetRate(Rate) end

---Blueprint accessible version of SetPlaybackTimeRange().
---The range is set through a blueprint usable float interval which may not have enough
---precision to represent the range accurately.
---@param InTimeRange FFloatInterval
---@return boolean
function UMediaPlayer:SetPlaybackTimeRange(InTimeRange) end

---Set the volume on the native player if not mixing with Sound Wave asset.
---The SetNativeVolume can be used to change the audio output volume at runtime. Note that
---not all media player plug-ins may support native audio output on all platforms.
---@param Volume number
---@return boolean
function UMediaPlayer:SetNativeVolume(Volume) end

---Sets the media options used by the player.
---@param Options UMediaSource
function UMediaPlayer:SetMediaOptions(Options) end

---Enables or disables playback looping.
---@param Looping boolean
---@return boolean
function UMediaPlayer:SetLooping(Looping) end

---Set the name of the desired native player.
---@param PlayerName string
function UMediaPlayer:SetDesiredPlayerName(PlayerName) end

---Set the time on which to block.
---If set, this player will block in TickInput or TickFetch until the video sample
---for the specified time are actually available.
---@param Time FTimespan
function UMediaPlayer:SetBlockOnTime(Time) end

---Select the active track of the given type.
---The selected track will use its currently active format. Active formats will
---be remembered on a per track basis. The first available format is active by
---default. To switch the track format, use SetTrackFormat instead.
---@param TrackType EMediaPlayerTrack
---@param TrackIndex integer
---@return boolean
function UMediaPlayer:SelectTrack(TrackType, TrackIndex) end

---Seeks to the specified playback time.
---@param Time FTimespan
---@return boolean
function UMediaPlayer:Seek(Time) end

---Seeks to the specified playback time as soon as possible.
---If the player is currently seeking, the new seek request will be queued
---and executed as soon as the current one is completed. It will guarantee that
---at least one sample of the previous seek makes it to the sample queue.
---if new seek requests are performed in rapid succession (as in scrubbing),
---the requests are aggregated and only the most recent request will be performed.
---As a result, OnSeekCompleted event is only sent for the request that got performed.
---If the player is not currently seeking, Seek will be called immediately.
---@param Time FTimespan
---@return boolean
function UMediaPlayer:Scrub(Time) end

---Rewinds the media to the beginning.
---This is the same as seeking to zero time.
---@return boolean
function UMediaPlayer:Rewind() end

---Reopens the currently opened media or play list.
---@return boolean
function UMediaPlayer:Reopen() end

---Open the previous item in the current play list.
---The player will start playing the new media source if it was playing
---something previously, otherwise it will only open the media source.
---@return boolean
function UMediaPlayer:Previous() end

---Starts playback from the media opened event, but can be used elsewhere.
function UMediaPlayer:PlayAndSeek() end

---Starts media playback.
---This is the same as setting the playback rate to 1.0.
---@return boolean
function UMediaPlayer:Play() end

---Pauses media playback.
---This is the same as setting the playback rate to 0.0.
---@return boolean
function UMediaPlayer:Pause() end

---Opens the specified media URL.
---A return value of true indicates that the player will attempt to open
---the media, but it may fail to do so later for other reasons, i.e. if
---a connection to the media server timed out. Use the OnMediaOpened and
---OnMediaOpenFailed delegates to detect if and when the media is ready!
---@param Url string
---@return boolean
function UMediaPlayer:OpenUrl(Url) end

---Open the specified media source with supplied options applied.
---A return value of true indicates that the player will attempt to open
---the media, but it may fail to do so later for other reasons, i.e. if
---a connection to the media server timed out. Use the OnMediaOpened and
---OnMediaOpenFailed delegates to detect if and when the media is ready!
---@param MediaSource UMediaSource
---@param Options FMediaPlayerOptions
---@return boolean
function UMediaPlayer:OpenSourceWithOptions(MediaSource, Options) end

---Open the specified media source with options using a latent action.
---A result of true indicates that the player successfully completed all requested operations.
---@param WorldContextObject UObject
---@param MediaSource UMediaSource
---@param Options FMediaPlayerOptions
---@param bSuccess boolean @[out] 
function UMediaPlayer:OpenSourceLatent(WorldContextObject, MediaSource, Options, bSuccess) end

---Open the specified media source.
---A return value of true indicates that the player will attempt to open
---the media, but it may fail to do so later for other reasons, i.e. if
---a connection to the media server timed out. Use the OnMediaOpened and
---OnMediaOpenFailed delegates to detect if and when the media is ready!
---@param MediaSource UMediaSource
---@return boolean
function UMediaPlayer:OpenSource(MediaSource) end

---Open a particular media source in the specified play list.
---@param InPlaylist UMediaPlaylist
---@param Index integer
---@return boolean
function UMediaPlayer:OpenPlaylistIndex(InPlaylist, Index) end

---Open the first media source in the specified play list.
---@param InPlaylist UMediaPlaylist
---@return boolean
function UMediaPlayer:OpenPlaylist(InPlaylist) end

---Opens the specified media file path.
---A return value of true indicates that the player will attempt to open
---the media, but it may fail to do so later for other reasons, i.e. if
---a connection to the media server timed out. Use the OnMediaOpened and
---OnMediaOpenFailed delegates to detect if and when the media is ready!
---@param FilePath string
---@return boolean
function UMediaPlayer:OpenFile(FilePath) end

---Open the next item in the current play list.
---The player will start playing the new media source if it was playing
---something previously, otherwise it will only open the media source.
---@return boolean
function UMediaPlayer:Next() end

---Check whether media is ready for playback.
---A player is ready for playback if it has a media source opened that
---finished preparing and is not in an error state.
---@return boolean
function UMediaPlayer:IsReady() end

---Check whether the media is currently opening or buffering.
---@return boolean
function UMediaPlayer:IsPreparing() end

---Check whether playback has started.
---@return boolean
function UMediaPlayer:IsPlaying() end

---Check whether playback is currently paused.
---@return boolean
function UMediaPlayer:IsPaused() end

---Check whether playback is looping.
---@return boolean
function UMediaPlayer:IsLooping() end

---Check whether the player is currently connecting to a media source.
---@return boolean
function UMediaPlayer:IsConnecting() end

---Whether media is currently closed.
---@return boolean
function UMediaPlayer:IsClosed() end

---Check whether playback is buffering data.
---@return boolean
function UMediaPlayer:IsBuffering() end

---Check whether the player is in an error state.
---When the player is in an error state, no further operations are possible.
---The current media must be closed, and a new media source must be opened
---before the player can be used again. Errors are usually caused by faulty
---media files or interrupted network connections.
---@return boolean
function UMediaPlayer:HasError() end

---Get the current view rotation (only for 360 videos).
---@return FRotator
function UMediaPlayer:GetViewRotation() end

---Get the type of the specified video track format.
---@param TrackIndex integer
---@param FormatIndex integer
---@return string
function UMediaPlayer:GetVideoTrackType(TrackIndex, FormatIndex) end

---Get the supported range of frame rates of the specified video track.
---@param TrackIndex integer
---@param FormatIndex integer
---@return FFloatRange
function UMediaPlayer:GetVideoTrackFrameRates(TrackIndex, FormatIndex) end

---Get the frame rate of the specified video track.
---@param TrackIndex integer
---@param FormatIndex integer
---@return number
function UMediaPlayer:GetVideoTrackFrameRate(TrackIndex, FormatIndex) end

---Get the current dimensions of the specified video track.
---@param TrackIndex integer
---@param FormatIndex integer
---@return FIntPoint
function UMediaPlayer:GetVideoTrackDimensions(TrackIndex, FormatIndex) end

---Get the aspect ratio of the specified video track.
---@param TrackIndex integer
---@param FormatIndex integer
---@return number
function UMediaPlayer:GetVideoTrackAspectRatio(TrackIndex, FormatIndex) end

---Get the current vertical field of view (only for 360 videos).
---@return number
function UMediaPlayer:GetVerticalFieldOfView() end

---Get the URL of the currently loaded media, if any.
---@return string
function UMediaPlayer:GetUrl() end

---Get the language tag of the specified track.
---@param TrackType EMediaPlayerTrack
---@param TrackIndex integer
---@return string
function UMediaPlayer:GetTrackLanguage(TrackType, TrackIndex) end

---Get the index of the active format of the specified track type.
---@param TrackType EMediaPlayerTrack
---@param TrackIndex integer
---@return integer
function UMediaPlayer:GetTrackFormat(TrackType, TrackIndex) end

---Get the human readable name of the specified track.
---@param TrackType EMediaPlayerTrack
---@param TrackIndex integer
---@return string
function UMediaPlayer:GetTrackDisplayName(TrackType, TrackIndex) end

---Get the media's current playback timestamp.
---@return UMediaTimeStampInfo
function UMediaPlayer:GetTimeStamp() end

---Delay of the player's time.
---@return FTimespan
function UMediaPlayer:GetTimeDelay() end

---Get the media's current playback time.
---@return FTimespan
function UMediaPlayer:GetTime() end

---Get the supported playback rates.
---@param OutRates TArray_FFloatRange_ @[out] 
---@param Unthinned boolean
function UMediaPlayer:GetSupportedRates(OutRates, Unthinned) end

---Get the index of the currently selected track of the given type.
---@param TrackType EMediaPlayerTrack
---@return integer
function UMediaPlayer:GetSelectedTrack(TrackType) end

---Get the media's current playback rate.
---@return number
function UMediaPlayer:GetRate() end

---Get the current play list index.
---@return integer
function UMediaPlayer:GetPlaylistIndex() end

---Get the current play list.
---Media players always have a valid play list. In C++ code you can use
---the GetPlaylistRef to get a reference instead of a pointer to it.
---@return UMediaPlaylist
function UMediaPlayer:GetPlaylist() end

---Get the name of the current native media player.
---@return string
function UMediaPlayer:GetPlayerName() end

---Blueprint accessible version of GetPlaybackTimeRange.
---This returns the range truncated into a blueprint usable float interval and should not
---be used for live streams as 32 bit floats can not store wallclock times with enough precision.
---@param InRangeToGet EMediaTimeRangeBPType
---@return FFloatInterval
function UMediaPlayer:GetPlaybackTimeRange(InRangeToGet) end

---Get the number of tracks of the given type.
---@param TrackType EMediaPlayerTrack
---@return integer
function UMediaPlayer:GetNumTracks(TrackType) end

---Get the number of formats of the specified track.
---@param TrackType EMediaPlayerTrack
---@param TrackIndex integer
---@return integer
function UMediaPlayer:GetNumTrackFormats(TrackType, TrackIndex) end

---Get the human readable name of the currently loaded media source.
---@return string
function UMediaPlayer:GetMediaName() end

---This is the blueprint accessible version of the GetMediaMetadata.
---@return TMap_string__FMediaMetadataItemsBPT_
function UMediaPlayer:GetMediaMetadataItems() end

---Get the current horizontal field of view (only for 360 videos).
---@return number
function UMediaPlayer:GetHorizontalFieldOfView() end

---Get the media's duration.
---@return FTimespan
function UMediaPlayer:GetDuration() end

---Get the media's current playback timestamp as appropriate for display.
---@return UMediaTimeStampInfo
function UMediaPlayer:GetDisplayTimeStamp() end

---Get the media's current playback time as appropriate for display.
---@return FTimespan
function UMediaPlayer:GetDisplayTime() end

---Get the name of the current desired native player.
---@return string
function UMediaPlayer:GetDesiredPlayerName() end

---Get the type of the specified audio track format.
---@param TrackIndex integer
---@param FormatIndex integer
---@return string
function UMediaPlayer:GetAudioTrackType(TrackIndex, FormatIndex) end

---Get the sample rate of the specified audio track.
---@param TrackIndex integer
---@param FormatIndex integer
---@return integer
function UMediaPlayer:GetAudioTrackSampleRate(TrackIndex, FormatIndex) end

---Get the number of channels in the specified audio track.
---@param TrackIndex integer
---@param FormatIndex integer
---@return integer
function UMediaPlayer:GetAudioTrackChannels(TrackIndex, FormatIndex) end

---Close the currently open media, if any.
function UMediaPlayer:Close() end

---Check whether the specified URL can be played by this player.
---If a desired player name is set for this player, it will only check
---whether that particular player type can play the specified URL.
---@param Url string
---@return boolean
function UMediaPlayer:CanPlayUrl(Url) end

---Check whether the specified media source can be played by this player.
---If a desired player name is set for this player, it will only check
---whether that particular player type can play the specified source.
---@param MediaSource UMediaSource
---@return boolean
function UMediaPlayer:CanPlaySource(MediaSource) end

---Check whether media playback can be paused right now.
---Playback can be paused if the media supports pausing and if it is currently playing.
---@return boolean
function UMediaPlayer:CanPause() end

