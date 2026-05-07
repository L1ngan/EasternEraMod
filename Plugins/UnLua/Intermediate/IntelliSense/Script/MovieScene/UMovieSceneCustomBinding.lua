---A custom binding. Allows users to define their own binding resolution types, including dynamic 'Replaceable' bindings with previews in editor, as well as Spawnable types.
---@class UMovieSceneCustomBinding : UObject
local UMovieSceneCustomBinding = {}

---@return integer
function UMovieSceneCustomBinding.GetBaseEnginePriority() end

---@return integer
function UMovieSceneCustomBinding.GetBaseCustomPriority() end

