---@class UAnimationSharingManager : UObject
---@field protected Skeletons TArray<USkeleton> @Array of unique skeletons, matches PerSkeletonData array entries
---@field protected PerSkeletonData TArray<UAnimSharingInstance> @Sharing data required for the unique Skeleton setups
local UAnimationSharingManager = {}

---Register an Actor with this Animation Sharing manager, according to the SharingSkeleton
---@param InActor AActor
---@param SharingSkeleton USkeleton
function UAnimationSharingManager:RegisterActorWithSkeletonBP(InActor, SharingSkeleton) end

---Returns the AnimationSharing Manager, nullptr if none was set up
---@param WorldContextObject UObject
---@return UAnimationSharingManager
function UAnimationSharingManager.GetAnimationSharingManager(WorldContextObject) end

---Create an Animation Sharing Manager using the provided Setup
---@param WorldContextObject UObject
---@param Setup UAnimationSharingSetup
---@return boolean
function UAnimationSharingManager.CreateAnimationSharingManager(WorldContextObject, Setup) end

---Returns whether or not the animation sharing is enabled
---@return boolean
function UAnimationSharingManager.AnimationSharingEnabled() end

