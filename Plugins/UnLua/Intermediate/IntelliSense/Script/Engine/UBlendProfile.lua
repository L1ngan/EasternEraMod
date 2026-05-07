---A blend profile is a set of per-bone scales that can be used in transitions and blend lists
---to tweak the weights of specific bones. The scales are applied to the normal weight for that bone
---@class UBlendProfile : UObject
---@field public OwningSkeleton USkeleton @The skeleton that owns this profile
---@field public ProfileEntries TArray<FBlendProfileBoneEntry> @List of blend scale entries
---@field public Mode EBlendProfileMode @Blend Profile Mode. Read EBlendProfileMode for more details
local UBlendProfile = {}

