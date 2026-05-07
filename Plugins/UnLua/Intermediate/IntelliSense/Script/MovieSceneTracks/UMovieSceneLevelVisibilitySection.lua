---A section for use with the movie scene level visibility track, which controls streamed level visibility.
---@class UMovieSceneLevelVisibilitySection : UMovieSceneSection
---@field private Visibility ELevelVisibility @Whether or not the levels in this section should be visible or hidden.
---@field private LevelNames TArray<string> @The short names of the levels who's visibility is controlled by this section.
local UMovieSceneLevelVisibilitySection = {}

---@param InVisibility ELevelVisibility
function UMovieSceneLevelVisibilitySection:SetVisibility(InVisibility) end

---@param InLevelNames TArray_string_
function UMovieSceneLevelVisibilitySection:SetLevelNames(InLevelNames) end

---@return ELevelVisibility
function UMovieSceneLevelVisibilitySection:GetVisibility() end

---@return TArray_string_
function UMovieSceneLevelVisibilitySection:GetLevelNames() end

