---Attachment information for a camera rig.
---@class FCameraActorAttachmentInfo
---@field public Actor AActor @The actor to attach to.
---@field public SocketName string @An optional socket to attach to on the actor.
---@field public BoneName string @An optional bone to attach to on the actor.
---@field public Weight number @The weight of this attachment. Unused if only one attachment is used.
local FCameraActorAttachmentInfo = {}
