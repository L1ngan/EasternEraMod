---This is a component for AMediaPlate that can play and show media in the world.
---@class UMediaPlateComponent : UActorComponent
---@field public bPlayOnOpen boolean @If set then play when opening the media.
---@field public bAutoPlay boolean @If set then start playing when this object is active.
---@field public bEnableAudio boolean @If set then enable audio.
---@field public StartTime number @What time to start playing from (in seconds).
---@field public SoundComponent UMediaSoundComponent @Holds the component to play sound.
---@field public StaticMeshComponent UStaticMeshComponent @Holds the component for the mesh.
---@field public Letterboxes TArray<UStaticMeshComponent> @Holds the component for the mesh.
---@field public MediaPlateResource FMediaPlateResource @Which media source is used to populate the media playlist
---@field public PlaylistIndex integer @The current index of the source in the play list being played.
---@field public CacheSettings FMediaSourceCacheSettings @Override the default cache settings.
---@field private bIsMediaPlatePlaying boolean @If true, then we want the media plate to play. Note that this could be true, but the player is not actually playing because bPlayOnlyWhenVisible = true and the plate is not visible.
---@field private bPlayOnlyWhenVisible boolean @If true then only allow playback when the media plate is visible.
---@field private bLoop boolean @If set then loop when we reach the end.
---@field private VisibleMipsTilesCalculations EMediaTextureVisibleMipsTiles @Visible mips and tiles calculation mode for the supported mesh types in MediaPlate. (Player restart on change.)
---@field private MipMapBias number @Media texture mip map bias shared between the (image sequence) loader and the media texture sampler.
---@field private bIsAspectRatioAuto boolean @If true then set the aspect ratio automatically based on the media.
---@field private bEnableMipMapUpscaling boolean @If true then enable the use of MipLevelToUpscale as defined below.
---@field private MipLevelToUpscale integer @With exr playback, upscale into lower quality mips from this specified level. All levels including and above the specified value will be fully read.
---@field private bAdaptivePoleMipUpscaling boolean @If true then Media Plate will attempt to load and upscale lower quality mips and display those at the poles (Sphere object only).
---@field private LetterboxAspectRatio number @If > 0, then this is the aspect ratio of our screen and letterboxes will be added if the media is smaller than the screen.
---@field private MeshRange FVector2D
---@field private MediaTextures TArray<UMediaTexture> @Holds the media textures.
---@field private MediaTextureSettings FMediaTextureResourceSettings @Exposes Media Texture settings via Media Plate component.
---@field private MediaPlayer UMediaPlayer @This component's media player
---@field private ExternalMediaSource UMediaSource @Embedded Media Source loaded from external path specified in MediaPlateResource.
---@field private ActivePlaylist UMediaPlaylist @Currently running Playlist. It can either be a stand alone or embedded asset depending on the media plate resource type.
local UMediaPlateComponent = {}

---Call this to set bPlayOnlyWhenVisible.
---@param bInPlayOnlyWhenVisible boolean
function UMediaPlateComponent:SetPlayOnlyWhenVisible(bInPlayOnlyWhenVisible) end

---Set the arc size in degrees used for visible mips and tiles calculations, specific to the sphere.
---@param InMeshRange FVector2D
function UMediaPlateComponent:SetMeshRange(InMeshRange) end

---Call this enable/disable looping.
---@param bInLoop boolean
function UMediaPlateComponent:SetLoop(bInLoop) end

---Call this to set the aspect ratio of the screen.
---@param AspectRatio number
function UMediaPlateComponent:SetLetterboxAspectRatio(AspectRatio) end

---Sets whether automatic aspect ratio is enabled.
---@param bInIsAspectRatioAuto boolean
function UMediaPlateComponent:SetIsAspectRatioAuto(bInIsAspectRatioAuto) end

---@param bInEnableAudio boolean
function UMediaPlateComponent:SetEnableAudio(bInEnableAudio) end

---
---@param InMediaSource UMediaSource
function UMediaPlateComponent:SelectMediaSourceAsset(InMediaSource) end

---
---@param InMediaPlaylist UMediaPlaylist
function UMediaPlateComponent:SelectMediaPlaylistAsset(InMediaPlaylist) end

---
---@param InFilePath string
function UMediaPlateComponent:SelectExternalMedia(InFilePath) end

---Call this to seek to the specified playback time.
---@param Time FTimespan
---@return boolean
function UMediaPlateComponent:Seek(Time) end

---Rewinds the media to the beginning.
---This is the same as seeking to zero time.
---@return boolean
function UMediaPlateComponent:Rewind() end

---Play the previous item in the playlist.
---returns      True if it played something.
---@return boolean
function UMediaPlateComponent:Previous() end

---Call this to start playing.
---Open must be called before this.
function UMediaPlateComponent:Play() end

---Call this to pause playback.
---Play can be called to resume playback.
function UMediaPlateComponent:Pause() end

---Open the media using a latent action.
---@param InWorldContextObject UObject
---@param InLatentInfo FLatentActionInfo
---@param InTimeout number
---@param bInWaitForTexture boolean
---@param bOutSuccess boolean @[out] 
function UMediaPlateComponent:OpenLatent(InWorldContextObject, InLatentInfo, InTimeout, bInWaitForTexture, bOutSuccess) end

---Call this to open the media.
function UMediaPlateComponent:Open() end

---Called by the media player when the video pauses.
function UMediaPlateComponent:OnMediaSuspended() end

---Called by the media player when the video resumes.
function UMediaPlateComponent:OnMediaResumed() end

---Called by the media player when the media opens.
---@param DeviceUrl string
function UMediaPlateComponent:OnMediaOpened(DeviceUrl) end

---Called by the media player when the video ends.
function UMediaPlateComponent:OnMediaEnd() end

---Play the next item in the playlist.
---returns      True if it played something.
---@return boolean
function UMediaPlateComponent:Next() end

---Call this to see if the media plate is playing.
---@return boolean
function UMediaPlateComponent:IsMediaPlatePlaying() end

---Indicates if switching to the given event state (open, play, etc) is currently allowed by
---the backend.
---@param InRequestEventState EMediaPlateEventState
---@return boolean
function UMediaPlateComponent:IsEventStateChangeAllowed(InRequestEventState) end

---Return the arc size in degrees used for visible mips and tiles calculations, specific to the sphere.
---@return FVector2D
function UMediaPlateComponent:GetMeshRange() end

---Call this get our media texture.
---@param Index integer @[opt] 
---@return UMediaTexture
function UMediaPlateComponent:GetMediaTexture(Index) end

---Call this get our media player.
---@return UMediaPlayer
function UMediaPlateComponent:GetMediaPlayer() end

---Call this to see if we want to loop.
---@return boolean
function UMediaPlateComponent:GetLoop() end

---Call this to get the aspect ratio of the screen.
---@return number
function UMediaPlateComponent:GetLetterboxAspectRatio() end

---Gets whether automatic aspect ratio is enabled.
---@return boolean
function UMediaPlateComponent:GetIsAspectRatioAuto() end

---Call this to close the media.
function UMediaPlateComponent:Close() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UMediaPlateComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UMediaPlateComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UMediaPlateComponent:AddAssetUserDataOfClass(InUserDataClass) end

