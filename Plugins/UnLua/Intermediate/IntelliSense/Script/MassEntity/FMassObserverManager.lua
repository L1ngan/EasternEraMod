---A type that encapsulates logic related to notifying interested parties of entity composition changes. Upon creation it
---reads information from UMassObserverRegistry and instantiates processors interested in handling given fragment
---type addition or removal.
---@class FMassObserverManager
---@field protected FragmentObservers FMassObserversMap
---@field protected TagObservers FMassObserversMap
local FMassObserverManager = {}
