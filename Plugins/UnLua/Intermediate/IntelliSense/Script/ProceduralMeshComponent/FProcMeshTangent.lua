---Struct used to specify a tangent vector for a vertex
---The Y tangent is computed from the cross product of the vertex normal (Tangent Z) and the TangentX member.
---@class FProcMeshTangent
---@field public TangentX FVector @Direction of X tangent for this vertex
---@field public bFlipTangentY boolean @Bool that indicates whether we should flip the Y tangent when we compute it using cross product
local FProcMeshTangent = {}
