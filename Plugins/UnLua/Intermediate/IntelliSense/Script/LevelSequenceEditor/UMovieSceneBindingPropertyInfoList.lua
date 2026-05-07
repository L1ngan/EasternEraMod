---Helper UObject for editing arrays of locators for object bindings. A UObject instead of a UStruct because we need to support instanced sub objects
---@class UMovieSceneBindingPropertyInfoList : UObject
---@field public Bindings TArray<FMovieSceneBindingPropertyInfo> @List of locator info for a particular binding
local UMovieSceneBindingPropertyInfoList = {}

