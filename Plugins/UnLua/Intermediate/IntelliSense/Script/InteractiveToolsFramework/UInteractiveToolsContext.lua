---InteractiveToolsContext owns the core parts of an Interactive Tools Framework implementation - the
---InputRouter, ToolManager, GizmoManager, TargetManager, and ContextStore. In the simplest
---use case, UInteractiveToolsContext is just a top-level container that will keep the various UObjects
---alive, and provide an easy way to access them. However in a more complex situation it may be
---desirable to subclass and extend the ToolsContext. For example, UEdModeInteractiveToolsContext allows
---a ToolsContext to live within a UEdMode.
---@class UInteractiveToolsContext : UObject
---@field public InputRouter UInputRouter @current UInputRouter for this Context
---@field public TargetManager UToolTargetManager @current UToolTargetManager for this Context
---@field public ToolManager UInteractiveToolManager @current UInteractiveToolManager for this Context
---@field public GizmoManager UInteractiveGizmoManager @current UInteractiveGizmoManager for this Context
---@field public ContextObjectStore UContextObjectStore @Current Context Object Store for this Context. Stores arbitrary objects which share data or expose APIs across interactive tools and managers belonging to this context.
---@field protected ToolManagerClass TSoftClassPtr<UInteractiveToolManager> @todo: deprecate and remove this, can now be accomplished via CreateToolManagerFunc()
local UInteractiveToolsContext = {}

