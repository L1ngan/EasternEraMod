---Options when adding a new subobject
---@class FAddNewSubobjectParams
---@field public ParentHandle FSubobjectDataHandle
---@field public NewClass TSubclassOf<UObject> @The class of the new subobject that will be added
---@field public BlueprintContext UBlueprint @Pointer to the blueprint context that this subobject is in. If this is null, it is assumed that this subobject is being added to an instance.
---@field public bSkipMarkBlueprintModified boolean @Optionally skip marking this blueprint as modified (e.g. if we're handling that externally
---@field public bConformTransformToParent boolean @Whether the newly created component should keep its transform, or conform it to its parent
local FAddNewSubobjectParams = {}
