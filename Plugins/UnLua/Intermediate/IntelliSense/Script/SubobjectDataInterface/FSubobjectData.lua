---A struct that represents a single subobject. This can be anything, but are
---most commonly components attached to an actor instance or blueprint. Keeps track
---of the handles to its parent object and any child that it has.
---If you wish to modify a subobject, use the SubobjectDataSubsystem.
---@class FSubobjectData
---@field private WeakObjectPtr TWeakObjectPtr<UObject> @Weak ptr to the object instance represented by this node (e.g. component template)
---@field private Handle FSubobjectDataHandle @Handle that will have a globally unique ID when it is constructed (i.e. when this is constructed)
---@field private ParentObjectHandle FSubobjectDataHandle @Handle to this object's parent. If this is invalid, then it is the root subobject.
---@field private ChildrenHandles TArray<FSubobjectDataHandle> @Set of child subobjects that use this subobject as a parent
local FSubobjectData = {}
