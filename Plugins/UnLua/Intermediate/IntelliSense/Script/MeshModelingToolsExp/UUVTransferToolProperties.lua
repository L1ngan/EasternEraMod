---@class UUVTransferToolProperties : UInteractiveToolPropertySet
---@field public bReverseDirection boolean @If false, the first selected mesh's UV's are applied to the second selected mesh. If true, the  reverse direction is used.
---@field public bTransferSeamsOnly boolean @If true, we only transfer the seams without trying to transfer actual UV element values.
---@field public bClearExistingSeams boolean @If true, clears existing seams on the destination mesh before carrying over new ones.
---@field public PathSimilarityWeight number @Setting this above 0 will include a measure of path similarity to seam transfer, so that among  similarly short paths, we pick one that lies closer to the edge. Useful in cases where the path  is on the wrong diagonal to the triangulation, because it prefers a closely zigzagging path over  a wider "up and over" path that has similar length. If set to 0, only path length is used.
---@field public bShowWireframes boolean
---@field public bShowSeams boolean
---@field public VertexSearchDistance number @How far to look for a corresponding vertex on the destination. The destination is expected to  be a simplified version of source using existing vertices, so this should not need to be set high.
local UUVTransferToolProperties = {}

