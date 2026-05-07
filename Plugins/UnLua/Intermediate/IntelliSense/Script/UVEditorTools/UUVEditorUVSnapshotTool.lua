---UV Snapshot Tool
---Exports a texture asset of a UV Layout
---@class UUVEditorUVSnapshotTool : UInteractiveTool
---@field private Target UUVEditorToolMeshInput @Mesh input to UV Editor
---@field private UVShellSettings UUVEditorBakeUVShellProperties @Property set for bake and result
---@field private PreviewGeoBackgroundQuad UPreviewGeometry @Preview Geometry for display in Unwrapped viewport
---@field private CachedUVMap UTexture2D @Internal cache of bake uv texture result
local UUVEditorUVSnapshotTool = {}

