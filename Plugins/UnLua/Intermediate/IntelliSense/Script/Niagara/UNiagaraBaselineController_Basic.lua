---Simple controller that will just spawn the given system N times. If any instance completes, it will spawn a new one to replace it.
---Can handle simple burst or looping systems.
---@class UNiagaraBaselineController_Basic : UNiagaraBaselineController
---@field private NumInstances integer
---@field private SpawnedComponents TArray<UNiagaraComponent>
local UNiagaraBaselineController_Basic = {}

