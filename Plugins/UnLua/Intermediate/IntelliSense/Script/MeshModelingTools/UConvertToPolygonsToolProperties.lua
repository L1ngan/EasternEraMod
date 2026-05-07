---@class UConvertToPolygonsToolProperties : UInteractiveToolPropertySet
---@field public ConversionMode EConvertToPolygonsMode @Strategy to use to group triangles
---@field public AngleTolerance number @Tolerance for planarity
---@field public bUseAverageGroupNormal boolean @Whether to compute Face Normal Deviation based on the overall PolyGroup's average normal, or to only consider the normals of the individual triangles
---@field public NumPoints integer @Furthest-Point Sample count, approximately this number of polygroups will be generated
---@field public bSplitExisting boolean @If enabled, then furthest-point sampling happens with respect to existing Polygroups, ie the existing groups are further subdivided
---@field public bNormalWeighted boolean @If true, region-growing in Sampling modes will be controlled by face normals, resulting in regions with borders that are more-aligned with curvature ridges
---@field public NormalWeighting number @This parameter modulates the effect of normal weighting during region-growing
---@field public QuadAdjacencyWeight number @Bias for Quads that are adjacent to already-discovered Quads. Set to 0 to disable.
---@field public QuadMetricClamp number @Set to values below 1 to ignore less-likely triangle pairings
---@field public QuadSearchRounds integer @Iteratively repeat quad-searching in uncertain areas, to try to slightly improve results
---@field public bRespectUVSeams boolean @If true, polygroup borders will not cross existing UV seams
---@field public bRespectHardNormals boolean @If true, polygroup borders will not cross existing hard normal seams
---@field public MinGroupSize integer @Minimum number of triangles to include in a group. Any group containing fewer triangles will be merged with an adjacent group (if possible).
---@field public bShowGroupColors boolean @Display each group with a different auto-generated color
---@field public bCalculateNormals boolean @If true, normals are recomputed per-group, with hard edges at group boundaries
---@field public GroupLayer string @Select PolyGroup layer to use.
---@field public OptionsList TArray<string> @internal list used to implement above
---@field public bShowNewLayerName boolean
---@field public NewLayerName string @Name of the new Group Layer
local UConvertToPolygonsToolProperties = {}

---Provides set of available group layers
---@return TArray_string_
function UConvertToPolygonsToolProperties:GetGroupOptionsList() end

