---Structure for animated Actor objects.
---@class FLevelSequenceObject
---@field private ObjectOrOwner TLazyObjectPtr<UObject> @The object or the owner of the object being possessed.
---@field private ComponentName string @Optional name of an ActorComponent.
---@field private CachedComponent TWeakObjectPtr<UObject> @Cached pointer to the Actor component (only if ComponentName is set).
local FLevelSequenceObject = {}
