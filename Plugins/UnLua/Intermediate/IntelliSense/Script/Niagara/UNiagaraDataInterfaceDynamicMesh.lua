---Data Interface that can create mesh geometry at runtime from triangle data (e.g. to render a custom generated mesh per particle)
---@class UNiagaraDataInterfaceDynamicMesh : UNiagaraDataInterface
---@field public Sections TArray<FNiagaraDynamicMeshSection> @Sections to render, each section will generally result in a draw call. Triangles are contiguous between sections, i.e. Section[1] triangles will begin after Section[0].NumTriangles
---@field public Materials TArray<FNiagaraDynamicMeshMaterial> @List of materials to use
---@field public NumVertices integer @Allocates space for the number of vertices we will use, leave as zero if you intend to allocate dynamically via VM calls.
---@field public NumTexCoords integer @Allocates space for the number of texture coordinates requested.
---@field public bHasColors boolean @Allocates space for vertex colors when enabled.
---@field public bHasTangentBasis boolean @Allocates space for tangent basis when enabled.
---@field public bClearTrianglesPerFrame boolean @Should we auto clear section triangle allocations per frame or not.
---@field public DefaultBounds FBox @Should we auto clear section triangle allocations per frame or not.
local UNiagaraDataInterfaceDynamicMesh = {}

