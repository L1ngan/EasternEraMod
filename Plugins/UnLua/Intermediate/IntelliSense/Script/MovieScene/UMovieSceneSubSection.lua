---Implements a section in sub-sequence tracks.
---@class UMovieSceneSubSection : UMovieSceneSection
---@field public Parameters FMovieSceneSectionParameters
---@field private NetworkMask integer
---@field private OriginOverrideMask FMovieSceneSubSectionOriginOverrideMask
---@field private Translation FMovieSceneDoubleChannel
---@field private Rotation FMovieSceneDoubleChannel
---@field private KeyPreviewPosition Unknown @Preview value of position used for keying. This allows for transforms without needing to commit them to the channel
---@field private KeyPreviewRotation Unknown @Preview value of rotation used for keying. This allows for transforms without needing to commit them to the channel
---@field protected SubSequence UMovieSceneSequence @Movie scene being played by this section
local UMovieSceneSubSection = {}

---Sets the sequence played by this section.
---@param Sequence UMovieSceneSequence
function UMovieSceneSubSection:SetSequence(Sequence) end

---Get the sequence that is assigned to this section.
---@return UMovieSceneSequence
function UMovieSceneSubSection:GetSequence() end

