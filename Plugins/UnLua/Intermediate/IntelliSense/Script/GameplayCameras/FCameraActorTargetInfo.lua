---Targeting information for a camera rig.
---@class FCameraActorTargetInfo
---@field public Actor AActor @The actor to target.
---@field public SocketName string @An optional socket to target on the actor.
---@field public BoneName string @An optional bone to target on the actor.
---@field public TargetShape ECameraTargetShape @Specifies the shape of the target.
---@field public TargetSize number @Specifies the size of target. Only used if TargetShape is set to manual bounds.
---@field public Weight number @The weight of this target. Unused when only one target is used.
local FCameraActorTargetInfo = {}
