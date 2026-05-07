---@class FNiagaraEventScriptProperties : FNiagaraEmitterScriptProperties
---@field public ExecutionMode EScriptExecutionMode @Controls which particles have the event script run on them.
---@field public SpawnNumber integer @Controls whether or not particles are spawned as a result of handling the event. Only valid for EScriptExecutionMode::SpawnedParticles. If Random Spawn Number is used, this will act as the maximum spawn range.
---@field public MaxEventsPerFrame integer @Controls how many events are consumed by this event handler. If there are more events generated than this value, they will be ignored.
---@field public SourceEmitterID FGuid @Id of the Emitter Handle that generated the event. If all zeroes, the event generator is assumed to be this emitter.
---@field public SourceEventName string @The name of the event generated. This will be "Collision" for collision events and the Event Name field on the DataSetWrite node in the module graph for others.
---@field public bRandomSpawnNumber boolean @Whether using a random spawn number.
---@field public MinSpawnNumber integer @The minimum spawn number when random spawn is used. Spawn Number is used as the maximum range.
---@field public UpdateAttributeInitialValues boolean @Should Event Spawn Scripts modify the Initial values for particle attributes they modify.
local FNiagaraEventScriptProperties = {}
