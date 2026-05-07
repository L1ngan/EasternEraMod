---@class USkeletalBodySetup : UBodySetup
---@field public CurrentPhysicalAnimationProfile FPhysicalAnimationProfile @dummy place for customization inside phat. Profiles are ordered dynamically and we need a static place for detail customization
---@field public bSkipScaleFromAnimation boolean @If true we ignore scale changes from animation. This is useful for subtle scale animations like breathing where the physics collision should remain unchanged
---@field private PhysicalAnimationData TArray<FPhysicalAnimationProfile>
local USkeletalBodySetup = {}

