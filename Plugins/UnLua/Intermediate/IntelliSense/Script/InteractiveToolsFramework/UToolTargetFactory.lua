---Base class for factories of tool targets, which let a tool manager build targets
---out of inputs without knowing anything about the inputs itself, as long as it
---has a factory registered that is able to process the input.
---@class UToolTargetFactory : UObject
local UToolTargetFactory = {}

