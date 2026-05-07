---Base class for tools that do things with a mesh boundary. Provides ability to select mesh boundaries
---and some other boilerplate code.
---   TODO: We can refactor to make the HoleFiller tool inherit from this.
---@class UMeshBoundaryToolBase : USingleSelectionMeshEditingTool
---@field protected SelectionMechanic UPolygonSelectionMechanic
local UMeshBoundaryToolBase = {}

