---UPreviewMesh internally spawns a APreviewMeshActor to hold the preview mesh object.
---We use this AInternalToolFrameworkActor subclass so that we can identify such objects
---at higher levels (for example to prevent them from being deleted in the Editor)
---@class APreviewMeshActor : AInternalToolFrameworkActor
local APreviewMeshActor = {}

