---Validation rule to check for unwanted tick dependencies.
---@class UNiagaraValidationRule_TickDependencyCheck : UNiagaraValidationRule
---@field public Severity ENiagaraValidationSeverity @How do we want to repro the error in the stack
---@field public bCheckActorComponentInterface boolean @Check that the actor component interface isn't adding a tick dependency on the CPU.
---@field public bCheckCameraDataInterface boolean @Check that the camera data interface isn't adding a tick dependency on the CPU.
---@field public bCheckSkeletalMeshInterface boolean @Check that the skeletal mesh interface isn't adding a tick dependency on the CPU.
---@field public EffectTypesToExclude TArray<TSoftObjectPtr<UNiagaraEffectType>> @If the system uses one of these effect types the rule will not be run.
local UNiagaraValidationRule_TickDependencyCheck = {}

