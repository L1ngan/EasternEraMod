---USceneSnappingManager is intended to be used as a base class for a Snapping implementation
---stored in the ContextObjectStore of an InteractiveToolsContext. ITF classes like Tools and Gizmos
---can then access this object and run snap queries via the various API functions.
---USceneSnappingManager::Find() can be used to look up a registered USceneSnappingManager, if one is available
---See UModelingSceneSnappingManager for a sample implementation.
---@class USceneSnappingManager : UObject
local USceneSnappingManager = {}

