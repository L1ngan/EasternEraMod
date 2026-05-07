---@class UMovieSceneBoundObjectProxy : UInterface
local UMovieSceneBoundObjectProxy = {}

---Retrieve the bound object that this interface wants to animate. Could be 'this' or a transient child object.
---@param ResolvedObject UObject
---@return UObject
function UMovieSceneBoundObjectProxy:BP_GetBoundObjectForSequencer(ResolvedObject) end

