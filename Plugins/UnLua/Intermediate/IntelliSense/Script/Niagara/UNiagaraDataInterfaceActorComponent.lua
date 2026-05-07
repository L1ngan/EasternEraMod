---Data interface that gives you access to actor & component information.
---@class UNiagaraDataInterfaceActorComponent : UNiagaraDataInterface
---@field public SourceMode ENDIActorComponentSourceMode @Controls how we find the actor / component we want to bind to.
---@field public LocalPlayerIndex integer @, EditConditionHides))
---@field public SourceActor TLazyObjectPtr<AActor> @Optional source actor to use, if the user parameter binding is valid this will be ignored.
---@field public ActorOrComponentParameter FNiagaraUserParameterBinding @User parameter binding to use, overrides SourceActor.  Can be set by Blueprint, etc.
---@field public bRequireCurrentFrameData boolean @When this option is disabled, we use the previous frame's data for the skeletal mesh and can often issue the simulation early. This greatly       reduces overhead and allows the game thread to run faster, but comes at a tradeoff if the dependencies might leave gaps or other visual artifacts.
local UNiagaraDataInterfaceActorComponent = {}

