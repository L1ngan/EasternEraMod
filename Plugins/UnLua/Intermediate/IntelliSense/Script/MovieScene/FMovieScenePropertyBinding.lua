---Source property binding information for an entity on a moviescene timeline
---Comprises a leaf property name and a path and a cached boolean signifying whether the binding is allowed to perform a fast class-wise property lookup
---@class FMovieScenePropertyBinding
---@field public PropertyName string @Leaf name of the property to animate
---@field public PropertyPath string @Full path to the property from the object including struct and array indirection
---@field public bCanUseClassLookup boolean @True if this property can be considered for fast property offset resolution(ie the property address is _always_ a constant offset from the obejct ptr), false otherwise
local FMovieScenePropertyBinding = {}
