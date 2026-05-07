---Handles attachment replication to clients.
---@class FRepAttachment
---@field public AttachParent AActor @Actor we are attached to, movement replication will not happen while AttachParent is non-nullptr
---@field public LocationOffset FVector_NetQuantize100 @Location offset from attach parent
---@field public RelativeScale3D FVector_NetQuantize100 @Scale relative to attach parent
---@field public RotationOffset FRotator @Rotation offset from attach parent
---@field public AttachSocket string @Specific socket we are attached to
---@field public AttachComponent USceneComponent @Specific component we are attached to
local FRepAttachment = {}
