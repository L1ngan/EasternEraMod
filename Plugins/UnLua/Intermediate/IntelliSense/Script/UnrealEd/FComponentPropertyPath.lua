---Describes a chain of properties from the parent actor of a given component, to the component itself.
---@class FComponentPropertyPath
---@field private ParentOwningActor TWeakObjectPtr<AActor>
---@field private LastResortComponentPtr TWeakObjectPtr<UActorComponent>
---@field private PropertyChain TArray<FPropertyNameAndIndex>
local FComponentPropertyPath = {}
