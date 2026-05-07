---Key value type for object path channels that stores references to objects as both a hard and soft reference, to ensure compatability with both sub objects and async loading
---@class FMovieSceneObjectPathChannelKeyValue
---@field private SoftPtr TSoftObjectPtr<UObject> @Persistent storage of the object by path (which allows us to support cross-level actor references, for instance)
---@field private HardPtr UObject @Hard reference to the loaded object - relevant for any asset type which also hints the async loader to efficiently load the asset in advance
local FMovieSceneObjectPathChannelKeyValue = {}
