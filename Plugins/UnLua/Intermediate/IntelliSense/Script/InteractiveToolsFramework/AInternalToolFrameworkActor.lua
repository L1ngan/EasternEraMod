---AInternalToolFrameworkActor is a base class for internal Actors that the
---ToolsFramework may spawn (for gizmos, mesh previews, etc). These Actors
---may need special-case handling, for example to prevent the user from
---selecting and deleting them.
---@class AInternalToolFrameworkActor : AActor
---@field public bIsSelectableInEditor boolean @Controls whether this InternalToolFrameworkActor can be selected in the Editor.
local AInternalToolFrameworkActor = {}

