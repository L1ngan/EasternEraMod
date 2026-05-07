---UModelingSceneSnappingManager is an implementation of snapping suitable for use in
---Modeling Tools/Gizmos (and potentially other places).
---Currently Supports:
---   - snap to position/rotation grid
---   - snap to mesh vertex position
---   - snap to mesh edge position
---Snapping to mesh vertex/edge positions currently works for Volume (BrushComponent), StaticMeshComponent,
---and DynamicMeshComponent.
---Currently the StaticMesh vertex/edge snapping is dependent on the Physics
---system, and may fail or return nonsense results in some cases, due to the physics
---complex-collision mesh deviating from the source-model mesh.
---@class UModelingSceneSnappingManager : USceneSnappingManager
---@field protected ParentContext UInteractiveToolsContext
local UModelingSceneSnappingManager = {}

