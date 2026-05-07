---Curve Meta Data for each name
---Unfortunately this should be linked to FName, but no GUID because we don't have GUID in run-time
---We only add this if anything changed, by default, it is attribute curve
---@class FCurveMetaData
---@field public LinkedBones TArray<FBoneReference> @connected bones to this meta data
---@field public MaxLOD integer @max LOD (lowest LOD) to evaluate this. -1 means it will evaluate all the time.
---@field public Type FAnimCurveType @Curve type flags
local FCurveMetaData = {}
