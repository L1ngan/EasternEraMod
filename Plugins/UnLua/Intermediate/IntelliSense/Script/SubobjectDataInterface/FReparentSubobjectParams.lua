---Options for reparenting subobjects
---@class FReparentSubobjectParams
---@field public NewParentHandle FSubobjectDataHandle @The handle of the subobject to reparent to.
---@field public BlueprintContext UBlueprint @Pointer to the blueprint context that this subobject is in. If this is null, it is assumed that this subobject is being added to an instance.
---@field public ActorPreviewContext AActor @The preview actor context to be used if in a blueprint context. This must have a value if BlueprintContext is needed.
local FReparentSubobjectParams = {}
