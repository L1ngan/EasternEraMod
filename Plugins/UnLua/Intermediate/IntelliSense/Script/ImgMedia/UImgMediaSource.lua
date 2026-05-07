---Media source for EXR image sequences.
---Image sequence media sources point to a directory that contains a series of
---image files in which each image represents a single frame of the sequence.
---BMP, EXR, PNG and JPG images are currently supported. EXR image sequences
---are optimized for performance. The first frame of an image sequence is used
---to determine the image dimensions (all formats) and frame rate (EXR only).
---The image sequence directory may contain sub-directories, which are called
---'proxies'. Proxies can be used to provide alternative media for playback
---during development and testing of a game. One common scenario is the use
---of low resolution versions of image sequence media on computers that are
---too slow or don't have enough storage to play the original high-res media.
---@class UImgMediaSource : UBaseMediaSource
---@field public FrameRateOverride FFrameRate @Overrides the default frame rate stored in the image files (0/0 = do not override).
---@field public ProxyOverride string @Name of the proxy directory to use.
---@field public bFillGapsInSequence boolean @If true, then any gaps in the sequence will be filled with blank frames.
---@field public SequenceProxy FImgMediaSourceCustomizationSequenceProxy @This is only used so we can customize editing of SequencePath.
---@field public StartTimecode FTimecode @Specification of a timecode associated with the start of the sequence.
---@field public SourceColorSettings FMediaSourceColorSettings @Manual definition of media source color space & encoding.
---@field protected SequencePath FDirectoryPath @The directory that contains the image sequence files. - Relative paths will be with respect to the current Project directory. - You may use {engine_dir} or {project_dir} tokens.
local UImgMediaSource = {}

---Set the path to the image sequence directory this source represents.
---@param Path string
function UImgMediaSource:SetTokenizedSequencePath(Path) end

---Set the path to the image sequence directory this source represents.
---@param Path string
function UImgMediaSource:SetSequencePath(Path) end

---This object is no longer using our img sequence.
---@param InActor AActor
function UImgMediaSource:RemoveTargetObject(InActor) end

---Get the path to the image sequence directory to be played. Supported tokens will be expanded.
---@return string
function UImgMediaSource:GetSequencePath() end

---Get the names of available proxy directories.
---@param OutProxies TArray_string_ @[out] 
function UImgMediaSource:GetProxies(OutProxies) end

---This object is using our img sequence.
---@param InActor AActor
function UImgMediaSource:AddTargetObject(InActor) end

