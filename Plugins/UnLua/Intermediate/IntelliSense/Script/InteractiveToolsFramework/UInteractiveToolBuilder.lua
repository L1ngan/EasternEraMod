---A UInteractiveToolBuilder creates a new instance of an InteractiveTool (basically this is a Factory).
---These are registered with the InteractiveToolManager, which calls BuildTool() if CanBuildTool() returns true.
---In addition CanBuildTool() will be queried to (for example) enable/disable UI buttons, etc.
---This is an abstract base class, you must subclass it in order to create your particular Tool instance
---@class UInteractiveToolBuilder : UObject
local UInteractiveToolBuilder = {}

