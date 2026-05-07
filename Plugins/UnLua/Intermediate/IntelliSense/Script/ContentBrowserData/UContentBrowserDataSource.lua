---A common implementation of a "do nothing" data source for the Content Browser.
---You should derive from this type to create new data sources for the Content Browser, overriding any required functionality and validation logic.
---Data sources create and operate on FContentBrowserItemData instances that represent the folders and files within each data source.
---FContentBrowserItemData itself is a concrete type, so extensibility is handled via the IContentBrowserItemDataPayload interface, which can be
---used to store any data source defined payload data that is required to operate on the underlying thing that the item represents.
---This is the only API you need to implement to create a data source, as each FContentBrowserItemData instance knows which data source owns it,
---and uses that information to pass itself back into the correct data source instance when asked to perform actions or validation.
---In that sense you can think of this like a C API, where the data source returns an opaque object that is later passed back into the data source
---functions so that they can interpret the opaque object and provide functionality for it.
---@class UContentBrowserDataSource : UObject
local UContentBrowserDataSource = {}

