---@class USeamSculptToolProperties : UInteractiveToolPropertySet
---@field public bShowWireframe boolean
---@field public bHitBackFaces boolean
---@field public PathSimilarityWeight number @Setting this above 0 will include a measure of path similarity to seam transfer, so that among  similarly short paths, we pick one that lies closer to the edge. Useful in cases where the path  is on the wrong diagonal to the triangulation, because it prefers a closely zigzagging path over  a wider "up and over" path that has similar length. If set to 0, only path length is used.
local USeamSculptToolProperties = {}

