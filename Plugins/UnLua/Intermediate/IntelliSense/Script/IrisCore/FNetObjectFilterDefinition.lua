---@class FNetObjectFilterDefinition
---@field public FilterName string @Filter identifier. Used to uniquely identify a filter.
---@field public ClassName string @UClass name, specified by its fully qualified path, used to create the UNetObjectFilter. You can have multiple instances of the same filter as long as their FilterNames are unique.
---@field public ConfigClassName string @Optional UClass name, specified by its fully qualified path, used to create the UNetObjectFilterConfig. The class default instance will be passed at filter initialization time. If you want multiple instances of the same filter then use subclassing to create unique filter configs.
local FNetObjectFilterDefinition = {}
