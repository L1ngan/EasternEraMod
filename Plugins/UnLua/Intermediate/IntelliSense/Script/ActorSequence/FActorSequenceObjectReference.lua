---An external reference to an level sequence object, resolvable through an arbitrary context.
---@class FActorSequenceObjectReference
---@field private Type EActorSequenceObjectReferenceType @The type of the binding
---@field private ActorId FGuid @The ID of the actor - if this is set, we're either the owner actor, or an object outside of the context
---@field private PathToComponent string @Path to the component from its owner actor
local FActorSequenceObjectReference = {}
