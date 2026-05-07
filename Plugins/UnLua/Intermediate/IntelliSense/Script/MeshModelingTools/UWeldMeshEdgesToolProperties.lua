---@class UWeldMeshEdgesToolProperties : UInteractiveToolPropertySet
---@field public Tolerance number @Edges are considered matching if both pairs of endpoint vertices are closer than this distance
---@field public bOnlyUnique boolean @Only merge unambiguous pairs that have unique duplicate-edge matches
---@field public bResolveTJunctions boolean @If enabled, after an initial attempt at Welding, attempt to resolve remaining open edges in T-junction configurations via edge splits, and then retry Weld
---@field public bSplitBowties boolean @If enabled, will split bowtie vertices before welding. This can in some cases enable more edges to be successfully welded
---@field public InitialEdges integer @Initial number of open boundary edges
---@field public RemainingEdges integer @Number of remaining open boundary edges
---@field public AttrWeldingMode EWeldMeshEdgesAttributeUIMode @Controls split-attribute welding performed after the Mesh weld.  Applies to normals, tangents, UVs and colors.
---@field public SplitNormalThreshold number @Threshold on the angle between normals used to determine if split normals should be merged
---@field public SplitTangentsThreshold number @Threshold on the angle between tangent used to determine if split tangents should be merged
---@field public SplitUVThreshold number @Threshold uv-distance used to determine if split UVs should be merged
---@field public SplitColorThreshold number @Threshold color-distance used to determine if split colors should be merged
local UWeldMeshEdgesToolProperties = {}

