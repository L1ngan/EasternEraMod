---Implements a media play list.
---@class UMediaPlaylist : UObject
---@field protected Items TArray<UMediaSource> @List of media sources to play.
local UMediaPlaylist = {}

---Replace the media source at the specified position.
---@param Index integer
---@param Replacement UMediaSource
---@return boolean
function UMediaPlaylist:Replace(Index, Replacement) end

---Remove the media source at the specified position.
---@param Index integer
---@return boolean
function UMediaPlaylist:RemoveAt(Index) end

---Remove all occurrences of the given media source in the play list.
---@param MediaSource UMediaSource
---@return boolean
function UMediaPlaylist:Remove(MediaSource) end

---Get the number of media sources in the play list.
---@return integer
function UMediaPlaylist:Num() end

---Insert a media source into the play list at the given position.
---@param MediaSource UMediaSource
---@param Index integer
function UMediaPlaylist:Insert(MediaSource, Index) end

---Get a random media source in the play list.
---@param OutIndex integer @[out] 
---@return UMediaSource
function UMediaPlaylist:GetRandom(OutIndex) end

---Get the previous media source in the play list.
---@param InOutIndex integer @[out] 
---@return UMediaSource
function UMediaPlaylist:GetPrevious(InOutIndex) end

---Get the next media source in the play list.
---@param InOutIndex integer @[out] 
---@return UMediaSource
function UMediaPlaylist:GetNext(InOutIndex) end

---Get the media source at the specified index.
---@param Index integer
---@return UMediaSource
function UMediaPlaylist:Get(Index) end

---Add a media URL to the play list.
---@param Url string
---@return boolean
function UMediaPlaylist:AddUrl(Url) end

---Add a media file path to the play list.
---@param FilePath string
---@return boolean
function UMediaPlaylist:AddFile(FilePath) end

---Add a media source to the play list.
---@param MediaSource UMediaSource
---@return boolean
function UMediaPlaylist:Add(MediaSource) end

