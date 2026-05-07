---@class UNiagaraGeometryCacheRendererProperties : UNiagaraRendererProperties
---@field public GeometryCaches TArray<FNiagaraGeometryCacheReference> @Reference to the geometry cache assets to use. If ArrayIndexBinding is not set, a random element is used for each particle.
---@field public SourceMode ENiagaraRendererSourceDataMode @Whether or not to draw a single element for the Emitter or to draw the particles.
---@field public bIsLooping boolean @If true, then the geometry cache keeps playing in a loop
---@field public ComponentCountLimit integer @The max number of components that this emitter will spawn or update each frame.
---@field public PositionBinding FNiagaraVariableAttributeBinding @Which attribute should we use for the geometry cache position?
---@field public RotationBinding FNiagaraVariableAttributeBinding @Which attribute should we use for the geometry cache rotation?
---@field public ScaleBinding FNiagaraVariableAttributeBinding @Which attribute should we use for the geometry cache component scale?
---@field public ElapsedTimeBinding FNiagaraVariableAttributeBinding @Which attribute should we use for the geometry cache's current animation time?
---@field public EnabledBinding FNiagaraVariableAttributeBinding @Which attribute should we use to check if rendering should be enabled?
---@field public ArrayIndexBinding FNiagaraVariableAttributeBinding @Which attribute should we use to pick the element in the geometry cache array for this renderer? If not set, a random element will be used.
---@field public RendererVisibilityTagBinding FNiagaraVariableAttributeBinding @Which attribute should we use for the renderer visibility tag?
---@field public RendererVisibility integer @If a render visibility tag is present, particles whose tag matches this value will be visible in this renderer.
---@field public bAssignComponentsOnParticleID boolean @If true then components will not be automatically assigned to the first particle available, but try to stick to the same particle based on its unique id. Disabling this option is faster, but a particle can get a different component each tick, which can lead to problems with for example motion blur.
---@field public MaterialParameters FNiagaraRendererMaterialParameters @If this array has entries, we will create a MaterialInstanceDynamic per Emitter instance from Material and set the Material parameters using the Niagara simulation variables listed.
local UNiagaraGeometryCacheRendererProperties = {}

