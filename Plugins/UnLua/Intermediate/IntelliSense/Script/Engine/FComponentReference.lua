---Struct that allows for different ways to reference a component using TObjectPtr.
---If just an Actor is specified, will return RootComponent of that Actor.
---@class FComponentReference : FBaseComponentReference
---@field public OtherActor TWeakObjectPtr<AActor> @Weak Pointer to a different Actor that owns the Component. If this is not provided the reference refers to a component on this / the same actor.
local FComponentReference = {}
