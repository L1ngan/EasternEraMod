---Struct that allows for different ways to reference a component using TSoftObjectPtr.
---If just an Actor is specified, will return RootComponent of that Actor.
---@class FSoftComponentReference : FBaseComponentReference
---@field public OtherActor TSoftObjectPtr<AActor> @Soft Pointer to a different Actor that owns the Component. If this is not provided the reference refers to a component on this / the same actor.
local FSoftComponentReference = {}
