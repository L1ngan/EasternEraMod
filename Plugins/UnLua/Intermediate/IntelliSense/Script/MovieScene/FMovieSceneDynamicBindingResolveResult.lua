---@class FMovieSceneDynamicBindingResolveResult
---@field public Object UObject @The resolved object
---@field public bIsPossessedObject boolean @Whether the resolved object is external to the sequence This property is ignored for possessables, who are always treated as external. When resolving a spawnable, setting this to true will not destroy the object when the spawnable track ends, or the sequence finishes.
local FMovieSceneDynamicBindingResolveResult = {}
