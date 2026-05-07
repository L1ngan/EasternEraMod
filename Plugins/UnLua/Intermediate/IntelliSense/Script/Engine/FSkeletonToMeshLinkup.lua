---This is a mapping table between bone in a particular skeletal mesh and bone of this skeleton set.
---@class FSkeletonToMeshLinkup
---@field public SkeletonToMeshTable TArray<integer> @Mapping table. Size must be same as size of bone tree (not Mesh Ref Pose). No index should be more than the number of bones in this skeleton -1 indicates no match for this bone - will be ignored.
---@field public MeshToSkeletonTable TArray<integer> @Mapping table. Size must be same as size of ref pose (not bone tree). No index should be more than the number of bones in this skeletalmesh -1 indicates no match for this bone - will be ignored.
local FSkeletonToMeshLinkup = {}
