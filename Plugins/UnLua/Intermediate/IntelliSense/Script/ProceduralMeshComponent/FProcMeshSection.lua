---One section of the procedural mesh. Each material has its own section.
---@class FProcMeshSection
---@field public ProcVertexBuffer TArray<FProcMeshVertex> @Vertex buffer for this section
---@field public ProcIndexBuffer TArray<integer> @Index buffer for this section
---@field public SectionLocalBox FBox @Local bounding box of section
---@field public bEnableCollision boolean @Should we build collision data for triangles in this section
---@field public bSectionVisible boolean @Should we display this section
local FProcMeshSection = {}
