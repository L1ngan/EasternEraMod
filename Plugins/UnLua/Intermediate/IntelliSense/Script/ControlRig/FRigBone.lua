---@class FRigBone : FRigElement
---@field public ParentName string
---@field public ParentIndex integer
---@field public InitialTransform FTransform @Initial global transform that is saved in this rig
---@field public GlobalTransform FTransform
---@field public LocalTransform FTransform
---@field public Dependents TArray<integer> @dependent list - direct dependent for child or anything that needs to update due to this
---@field public Type ERigBoneType @the source of the bone to differentiate procedurally generated, imported etc
local FRigBone = {}
