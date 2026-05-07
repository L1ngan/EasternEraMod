---A CVar section is responsible for applying a user-supplied value to the specified cvar, and then restoring the previous value after the section ends.
---@class UMovieSceneCVarSection : UMovieSceneSection
---@field public ConsoleVariableCollections TArray<FMovieSceneConsoleVariableCollection> @Array of console variable preset assets that this track should operate on
---@field public ConsoleVariables FMovieSceneCVarOverrides @The name of the console variable and the value, separated by ' ' or '=', ie: "foo.bar=1" or "foo.bar 1".
local UMovieSceneCVarSection = {}

---@param InString string
function UMovieSceneCVarSection:SetFromString(InString) end

---@return string
function UMovieSceneCVarSection:GetString() end

