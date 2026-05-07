---@class UAnimNotify_PlayNiagaraEffect : UAnimNotify
---@field public Template UNiagaraSystem @Niagara System to Spawn
---@field public LocationOffset FVector @Location offset from the socket
---@field public RotationOffset FRotator @Rotation offset from socket
---@field public Scale FVector @Scale to spawn the Niagara system at
---@field public bAbsoluteScale boolean @Whether or not we are in absolute scale mode
---@field public Attached boolean @Should attach to the bone/socket
---@field public SocketName string @SocketName to attach to
local UAnimNotify_PlayNiagaraEffect = {}

---Return FXSystemComponent created from SpawnEffect
---@return UFXSystemComponent
function UAnimNotify_PlayNiagaraEffect:GetSpawnedEffect() end

