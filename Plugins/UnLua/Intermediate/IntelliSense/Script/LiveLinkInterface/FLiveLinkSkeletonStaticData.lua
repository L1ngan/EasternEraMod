---Static data for Animation purposes. Contains data about bones that shouldn't change every frame.
---@class FLiveLinkSkeletonStaticData : FLiveLinkBaseStaticData
---@field public BoneNames TArray<string> @Names of each bone in the skeleton
---@field public BoneParents TArray<integer> @Parent Indices: For each bone it specifies the index of its parent
local FLiveLinkSkeletonStaticData = {}
