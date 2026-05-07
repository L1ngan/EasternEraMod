---Timed Niagara Effect Notify
---Allows a looping Niagara effect to be played in an animation that will activate
---at the beginning of the notify and deactivate at the end.
---@class UAnimNotifyState_TimedNiagaraEffect : UAnimNotifyState
---@field public Template UNiagaraSystem @The niagara system to spawn for the notify state
---@field public SocketName string @The socket or bone to attach the system to
---@field public LocationOffset FVector @Offset from the socket or bone to place the Niagara system
---@field public RotationOffset FRotator @Rotation offset from the socket or bone for the Niagara system
---@field public Scale FVector @Scale to spawn the Niagara system at
---@field public bApplyRateScaleAsTimeDilation boolean @Should we set the animation rate scale as time dilation on the spawn effect?
---@field public bDestroyAtEnd boolean @Whether the Niagara system should be immediately destroyed at the end of the notify state or be allowed to finish
local UAnimNotifyState_TimedNiagaraEffect = {}

---Return FXSystemComponent created from SpawnEffect
---@param MeshComp UMeshComponent
---@return UFXSystemComponent
function UAnimNotifyState_TimedNiagaraEffect:GetSpawnedEffect(MeshComp) end

