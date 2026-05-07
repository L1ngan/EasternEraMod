---Structure that stores a one to many mapping from object binding ID, to object references that pertain to that ID.
---@class FLevelSequenceBindingReferences
---@field public BindingIdToReferences TMap<FGuid, FLevelSequenceBindingReferenceArray> @The map from object binding ID to an array of references that pertain to that ID
---@field public AnimSequenceInstances TSet<FGuid> @A set of object binding IDs that relate to anim sequence instances (must be a child of USkeletalMeshComponent)
---@field public PostProcessInstances TSet<FGuid> @A set of object binding IDs that relate to post process instances (must be a child of USkeletalMeshComponent)
local FLevelSequenceBindingReferences = {}
