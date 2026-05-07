---@class UNiagaraComponentRendererProperties : UNiagaraRendererProperties
---@field public ComponentType TSubclassOf<USceneComponent> @The scene component class to instantiate
---@field public ComponentCountLimit integer @The max number of components that this emitter will spawn or update each frame.
---@field public EnabledBinding FNiagaraVariableAttributeBinding @Which attribute should we use to check if component rendering should be enabled for a particle? This can be used to control the spawn-rate on a per-particle basis.
---@field public RendererVisibilityTagBinding FNiagaraVariableAttributeBinding @Which attribute should we use to check if component rendering should be enabled for a particle? This can be used to control the spawn-rate on a per-particle basis.
---@field public bAssignComponentsOnParticleID boolean @If true then components will not be automatically assigned to the first particle available, but try to stick to the same particle based on its unique id. Disabling this option is faster, but a particle can get a different component each tick, which can lead to problems with for example motion blur.
---@field public bCreateComponentFirstParticleFrame boolean @If true then new components can only be created on newly spawned particles. If a particle is not able to create a component on it's first frame (e.g. because the component limit was reached) then it will be blocked from spawning a component on subsequent frames.
---@field public bOnlyActivateNewlyAquiredComponents boolean @If true then components will only be activated when newly acquired. e.g. on particle spawn or when the particle enables/disables the component. If false, components will be always kept active while they are used by an enabled particle. This can be useful for component types that can internally activate and deactivate during their lifetimes while still being used by an enabled particle. For example NiagaraComponents that deactivate/reactivate according to scalability settings. This setting is only valid when bAssignComponentsOnParticleID is true.
---@field public bVisualizeComponents boolean @If true then the editor visualization is enabled for the component; has no effect in-game.
---@field public RendererVisibility integer @If a render visibility tag is present, particles whose tag matches this value will be visible in this renderer.
---@field public TemplateComponent USceneComponent @The object template used to create new components at runtime.
---@field public PropertyBindings TArray<FNiagaraComponentPropertyBinding>
local UNiagaraComponentRendererProperties = {}

