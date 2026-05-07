---USkeleton : that links between mesh and animation
---        - Bone hierarchy for animations
---        - Bone/track linkup between mesh and animation
---        - Retargetting related
---@class USkeleton : UObject
---@field protected BoneTree TArray<FBoneNode> @Skeleton bone tree - each contains name and parent index*
---@field protected PreviewForwardAxis integer @Preview axis to consider as "forward" for the skeleton. Only used for preview purposes.
---@field protected VirtualBoneGuid FGuid @Guid for virtual bones. Separate so that we don't have to dirty the original guid when only changing virtual bones
---@field protected VirtualBones TArray<FVirtualBone> @Array of this skeletons virtual bones. These are new bones are links between two existing bones and are baked into all the skeletons animations
---@field protected CompatibleSkeletons TArray<TSoftObjectPtr<USkeleton>> @The list of compatible skeletons. This skeleton will be able to use animation data originating from skeletons within this array, such as animation sequences. This property is not bi-directional. This is an array of TSoftObjectPtr in order to prevent all skeletons to be loaded, as we only want to load things on demand. As this is EditAnywhere and an array of TSoftObjectPtr, checking validity of pointers is needed.
---@field protected bUseRetargetModesFromCompatibleSkeleton boolean @Should we use the per bone translational retarget mode from the source (compatible) skeleton's instead of from this skeleton? On default this is disabled. Enabling this would allow you to have one shared set of animations. You would configure the retarget settings on the animation skeleton. Then every character that plays animations from this source skeleton will use the translational retarget settings from the source skeleton, which saves you from having to configure the retarget modes for every bone in every character as they can be setup just once now on the animation skeleton.
---@field public Sockets TArray<USkeletalMeshSocket> @Array of named socket locations, set up in editor and used as a shortcut instead of specifying everything explicitly to AttachComponent in the SkeletalMeshComponent.
---@field public BlendProfiles TArray<UBlendProfile> @List of blend profiles available in this skeleton
---@field private SlotGroups TArray<FAnimSlotGroup> @serialized slot groups and slot names.
---@field private PreviewSkeletalMesh TSoftObjectPtr<USkeletalMesh> @The default skeletal mesh to use when previewing this skeleton
---@field private AdditionalPreviewSkeletalMeshes TSoftObjectPtr<UDataAsset> @The additional skeletal meshes to use when previewing this skeleton
---@field public AnimationNotifies TArray<string> @AnimNotifiers that has been created. Right now there is no delete step for this, but in the future we'll supply delete*
---@field public PreviewAttachedAssetContainer FPreviewAssetAttachContainer @Attached assets component for this skeleton
---@field protected AssetUserData TArray<UAssetUserData> @Array of user data stored with the asset
---@field protected AssetUserDataEditorOnly TArray<UAssetUserData> @Array of user data stored with the asset
local USkeleton = {}

---Get the specified blend profile by name
---@param InProfileName string
---@return UBlendProfile
function USkeleton:GetBlendProfile(InProfileName) end

---@param SourceSkeleton TSoftObjectPtr_USkeleton_
function USkeleton:AddCompatibleSkeletonSoft(SourceSkeleton) end

---@param SourceSkeleton USkeleton
function USkeleton:AddCompatibleSkeleton(SourceSkeleton) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function USkeleton:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function USkeleton:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function USkeleton:AddAssetUserDataOfClass(InUserDataClass) end

