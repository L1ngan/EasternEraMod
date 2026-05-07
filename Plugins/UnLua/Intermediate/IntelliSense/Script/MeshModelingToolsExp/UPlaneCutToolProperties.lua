---Standard properties of the plane cut operation
---@class UPlaneCutToolProperties : UInteractiveToolPropertySet
---@field public bKeepBothHalves boolean @If true, both halves of the cut are computed
---@field public SpacingBetweenHalves number @If keeping both halves, separate the two pieces by this amount
---@field public bExportSeparatedPiecesAsNewMeshAssets boolean @If true, meshes cut into multiple pieces will be saved as separate assets on 'accept'.
---@field public bShowPreview boolean
---@field public bFillCutHole boolean @If true, the cut surface is filled with simple planar hole fill surface(s)
---@field public bFillSpans boolean @If true, will attempt to fill cut holes even if they're ill-formed (e.g. because they connect to pre-existing holes in the geometry)
---@field public bSimplifyAlongCut boolean @If true, will simplify triangulation along plane cut when doing so will not affect the shape, UVs or PolyGroups
local UPlaneCutToolProperties = {}

