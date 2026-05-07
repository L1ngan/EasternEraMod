---Timed Particle Effect Notify
---Allows a looping particle effect to be played in an animation that will activate
---at the beginning of the notify and deactivate at the end.
---@class UAnimNotifyState_TimedParticleEffect : UAnimNotifyState
---@field public PSTemplate UParticleSystem @The particle system to spawn for the notify state
---@field public SocketName string @The socket or bone to attach the system to
---@field public LocationOffset FVector @Offset from the socket or bone to place the particle system
---@field public RotationOffset FRotator @Rotation offset from the socket or bone for the particle system
---@field public bDestroyAtEnd boolean @Whether the particle system should be immediately destroyed at the end of the notify state or be allowed to finish
---@field public PreviousPSTemplates TArray<UParticleSystem> @The following arrays are used to handle property changes during a state. Because we can't store any stateful data here we can't know which emitter is ours. The best metric we have is an emitter on our Mesh Component with the same template and socket name we have defined. Because these can change at any time we need to track previous versions when we are in an editor build. Refactor when stateful data is possible, tracking our component instead.
---@field public PreviousSocketNames TArray<string>
local UAnimNotifyState_TimedParticleEffect = {}

