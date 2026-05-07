---@class UAnimNotify_PlayParticleEffect : UAnimNotify
---@field public PSTemplate UParticleSystem @Particle System to Spawn
---@field public LocationOffset FVector @Location offset from the socket
---@field public RotationOffset FRotator @Rotation offset from socket
---@field public Scale FVector @Scale to spawn the particle system at
---@field public Attached boolean @Should attach to the bone/socket
---@field public SocketName string @SocketName to attach to
local UAnimNotify_PlayParticleEffect = {}

