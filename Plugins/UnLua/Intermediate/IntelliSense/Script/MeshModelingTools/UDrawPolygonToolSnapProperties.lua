---@class UDrawPolygonToolSnapProperties : UInteractiveToolPropertySet
---@field public bEnableSnapping boolean @Enables additional snapping controls. If false, all snapping is disabled.
---@field public bSnapToWorldGrid boolean
---@field public bSnapToVertices boolean @Snap to vertices in other meshes. Requires Enable Snapping to be true.
---@field public bSnapToEdges boolean @Snap to edges in other meshes. Requires Enable Snapping to be true.
---@field public bSnapToAxes boolean @Snap to axes of the drawing grid and axes relative to the last segment. Requires grid snapping to be disabled in viewport, and Enable Snapping to be true.
---@field public bSnapToLengths boolean @When snapping to axes, also try to snap to the length of an existing segment in the polygon. Requires grid snapping to be disabled in viewport, and Snap to Axes and Enable Snapping to be true.
---@field public bSnapToSurfaces boolean @Snap to surfaces of existing objects. Requires grid snapping to be disabled in viewport, and Enable Snapping to be true.
---@field public SnapToSurfacesOffset number @Offset for snap point on the surface of an existing object in the direction of the surface normal. Requires grid snapping to be disabled in viewport, and Snap to Surfaces and Enable Snapping to be true.
local UDrawPolygonToolSnapProperties = {}

