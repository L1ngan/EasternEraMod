---This is a mapping table between each bone in a particular skeletal mesh and the tracks of this animation set.
---@class FAnimSetMeshLinkup
---@field public BoneToTrackTable TArray<integer> @Mapping table. Size must be same as size of SkelMesh reference skeleton. No index should be more than the number of tracks in this AnimSet. -1 indicates no track for this bone - will use reference pose instead.
local FAnimSetMeshLinkup = {}
