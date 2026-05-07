---Movie scene meta-data that is stored on UMovieScene assets
---Meta-data is retrieved through ULevelSequence::FindMetaData<ULevelSequenceMetaData>()
---@class UMovieSceneMetaData : UObject
---@field private Author string @The author that created this metadata
---@field private Created FDateTime @The created date at which the metadata was initiated
---@field private Notes string @Notes for the metadata
local UMovieSceneMetaData = {}

---Set this metadata's notes
---@param InNotes string
function UMovieSceneMetaData:SetNotes(InNotes) end

---Set this metadata's created date
---@param InCreated FDateTime
function UMovieSceneMetaData:SetCreated(InCreated) end

---Set this metadata's author
---@param InAuthor string
function UMovieSceneMetaData:SetAuthor(InAuthor) end

---
---@return string
function UMovieSceneMetaData:GetNotes() end

---
---@return FDateTime
function UMovieSceneMetaData:GetCreated() end

---
---@return string
function UMovieSceneMetaData:GetAuthor() end

