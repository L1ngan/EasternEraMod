---@class UVariantObjectBinding : UObject
---@field private CachedActorLabel string @Whenever we resolve, we cache the actor label here so that if we can't resolve anymore we can better indicate which actor is missing, instead of just saying 'Unloaded binding'
---@field private ObjectPtr FSoftObjectPath
---@field private LazyObjectPtr TLazyObjectPtr<UObject>
---@field private CapturedProperties TArray<UPropertyValue>
---@field private FunctionCallers TArray<FFunctionCaller>
local UVariantObjectBinding = {}

