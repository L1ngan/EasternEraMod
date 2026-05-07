---The NetObjectConnectionFilter is a dynamic pre-poll filter that supports per connection filtering. It should be seen as an alternative to the ReplicationSystem SetConnectionFilter API for use cases where
---for example the object in question can be a dependent object. Dependent objects will override dynamic filtering and only dynamic filtering.
---@class UNetObjectConnectionFilter : UNetObjectFilter
local UNetObjectConnectionFilter = {}

