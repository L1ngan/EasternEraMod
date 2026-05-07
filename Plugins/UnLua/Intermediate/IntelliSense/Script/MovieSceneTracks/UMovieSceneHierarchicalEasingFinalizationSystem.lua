---System that finalizes creation of easing channels by allocating new channels for hierarchical blend targets if necessary
---This is required in order to solve the problem that the hierarchical instantiator needs to run before the property instantiator,
---but we can't allocate channels for blend targets until _after_ the property instantiator (which sets up the relevant BlendTarget components)
---@class UMovieSceneHierarchicalEasingFinalizationSystem : UMovieSceneEntityInstantiatorSystem
local UMovieSceneHierarchicalEasingFinalizationSystem = {}

