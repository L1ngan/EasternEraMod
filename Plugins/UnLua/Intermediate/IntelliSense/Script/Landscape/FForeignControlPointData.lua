---structs for ForeignWorldSplineDataMap
---these are editor-only, but we don't have the concept of an editor-only USTRUCT
---@class FForeignControlPointData
---@field public ModificationKey FGuid
---@field public MeshComponent UControlPointMeshComponent
---@field public Identifier TLazyObjectPtr<ULandscapeSplineControlPoint>
local FForeignControlPointData = {}
