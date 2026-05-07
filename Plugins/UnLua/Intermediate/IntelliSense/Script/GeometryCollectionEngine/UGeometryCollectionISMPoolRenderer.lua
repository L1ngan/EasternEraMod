---Implementation of a geometry collection custom renderer that pushes AutoInstanceMeshes to an ISMPool.
---@class UGeometryCollectionISMPoolRenderer : UObject
---@field private CachedISMPoolComponent UISMPoolComponent @Instanced Static Mesh Pool component that is used to render our meshes.
---@field private LocalISMPoolComponent UISMPoolComponent @Set if we have an Instanced Static Mesh Pool component owned by this renderer (ie when in Editor mode). Non-transient to behave correctly under actor duplication.
local UGeometryCollectionISMPoolRenderer = {}

