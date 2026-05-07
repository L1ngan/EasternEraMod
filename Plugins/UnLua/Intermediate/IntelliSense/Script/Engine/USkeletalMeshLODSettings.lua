---@class USkeletalMeshLODSettings : UDataAsset
---@field protected MinQualityLevelLod FPerQualityLevelInt @Minimum Quality Level LOD to render. Can be overridden per mesh as well as set here for all mesh instances
---@field protected MinLod FPerPlatformInt @Minimum LOD to render. Can be overridden per mesh as well as set here for all mesh instances
---@field protected DisableBelowMinLodStripping FPerPlatformBool @When true LODs below MinLod will not be stripped during cook.
---@field protected bOverrideLODStreamingSettings boolean @Whether meshes in this group override default LOD streaming settings.
---@field protected bSupportLODStreaming FPerPlatformBool @Whether meshes in this group stream LODs by default
---@field protected MaxNumStreamedLODs FPerPlatformInt @Default maximum number of streamed LODs for meshes in this group
---@field protected MaxNumOptionalLODs FPerPlatformInt @Default maximum number of optional LODs for meshes in this group (currently, need to be either 0 or > num of LODs below MinLod)
---@field protected LODGroups TArray<FSkeletalMeshLODGroupSettings>
local USkeletalMeshLODSettings = {}

