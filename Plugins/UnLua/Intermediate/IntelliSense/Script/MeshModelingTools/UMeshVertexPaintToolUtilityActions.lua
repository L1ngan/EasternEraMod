---@class UMeshVertexPaintToolUtilityActions : UMeshVertexPaintToolActionPropertySet
---@field public Operation EMeshVertexPaintToolUtilityOperations @Operation to apply to current Vertex Colors
---@field public SourceChannel EMeshVertexPaintColorChannel
---@field public SourceValue number
---@field public WeightMap string @Target Vertex Weight Map
---@field public WeightMapsList TArray<string> @internal list used to implement above
---@field public TargetChannels FModelingToolsColorChannelFilter
---@field public TargetChannel EMeshVertexPaintColorChannel
---@field public bCopyToHiRes boolean @Copy colors to HiRes Source Mesh, if it exists
---@field public CopyToLODName string @Target LOD to copy Colors to
---@field public LODNamesList TArray<string>
local UMeshVertexPaintToolUtilityActions = {}

---this function is called provide set of available weight maps
---@return TArray_string_
function UMeshVertexPaintToolUtilityActions:GetWeightMapsFunc() end

---@return TArray_string_
function UMeshVertexPaintToolUtilityActions:GetLODNamesFunc() end

---Apply the Operation currently selected below
function UMeshVertexPaintToolUtilityActions:ApplySelectedOperation() end

