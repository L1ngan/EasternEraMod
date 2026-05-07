---A camera node that moves the camera to an actor.
---@class UAttachToActorCameraNode : UCameraNode
---@field public Attachment FCameraActorAttachmentInfo @The actor to attach to.
---@field public AttachmentDataID FCameraContextDataID @The data ID for the attachment info.
---@field public AttachToLocation FBooleanCameraParameter @Whether to move the camera to the actor's location.
---@field public AttachToRotation FBooleanCameraParameter @Whether to align the camera rotation to the actor's orientation.
local UAttachToActorCameraNode = {}

