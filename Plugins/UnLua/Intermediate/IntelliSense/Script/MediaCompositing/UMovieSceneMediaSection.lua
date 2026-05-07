---Implements a movie scene section for media playback.
---@class UMovieSceneMediaSection : UMovieSceneSection
---@field public MediaSource UMediaSource @The source to play with this video track if MediaSourceProxy is not available.
---@field public MediaSourceProxyIndex integer @The index to pass to MediaSourceProxy to get the media source.
---@field public bLooping boolean @Should the media player be set to loop? This can be helpful for media formats that can use this information (such as exr sequences) to pre-cache the starting data when nearing the end of playback. Does not cause the media to continue playing after the end of the section is reached.
---@field public StartFrameOffset FFrameNumber @Offset into the source media.
---@field public MediaTexture UMediaTexture @The media texture that receives the track's video output.
---@field public MediaSoundComponent UMediaSoundComponent @The media sound component that receives the track's audio output.
---@field public bUseExternalMediaPlayer boolean @If true, this track will control a previously created media player instead of automatically creating one.
---@field public ExternalMediaPlayer UMediaPlayer @The external media player this track should control.
---@field public CacheSettings FMediaSourceCacheSettings @Override the default cache settings. Not used if we have a player proxy as the settings come from the proxy instead.
---@field public TextureIndex integer @If using an object like a MediaPlate, then this determines which texture to use for crossfading purposes.
---@field public bHasMediaPlayerProxy boolean @True if the object bound to this track has a media player proxy.
---@field public ChannelCanPlayerBeOpen FMovieSceneBoolChannel @If true then the media player can be open.
---@field public ThumbnailReferenceOffset number @The reference frame offset for single thumbnail rendering
---@field private MediaSourceProxyBindingID FMovieSceneObjectBindingID @The object to get the source to play from if you don't want to directly specify a media source.
local UMovieSceneMediaSection = {}

