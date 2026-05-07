---UMeshSurfacePointTool is a base Tool implementation that can be used to implement various
---"point on surface" interactions. The tool acts on an input IMeshDescriptionSource object,
---which the standard Builder can extract from the current selection (eg Editor selection).
---Subclasses override the OnBeginDrag/OnUpdateDrag/OnEndDrag and OnUpdateHover functions
---to implement custom behavior.
---@class UMeshSurfacePointTool : USingleSelectionTool
---@field protected TargetWorld TWeakObjectPtr<UWorld>
local UMeshSurfacePointTool = {}

