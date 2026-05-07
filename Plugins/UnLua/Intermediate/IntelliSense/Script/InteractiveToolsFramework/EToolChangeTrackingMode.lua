---UInteractiveToolManager can emit change events for the active tool in various ways.
---This allows different modes to control how tools activate/deactivate on undo/redo, which is necessary
---because some modes (eg Modeling Mode) do not support redo "into" a Tool, while others require it (like Paint Mode)
---@class EToolChangeTrackingMode
---@field public NoChangeTracking integer
---@field public UndoToExit integer
---@field public FullUndoRedo integer
---@field public EToolChangeTrackingMode_MAX integer
local EToolChangeTrackingMode = {}
