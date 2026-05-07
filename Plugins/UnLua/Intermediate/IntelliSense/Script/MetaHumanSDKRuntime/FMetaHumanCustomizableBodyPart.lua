---@class FMetaHumanCustomizableBodyPart
---@field public ControlRigClass TSubclassOf<UControlRig> @Control rig to run on the body part. Evaluation happens after the base skeleton.
---@field public ControlRigLODThreshold integer @* Max LOD level to evaluate the assigned control rig for the body part. * For example if you have the threshold set to 2, the control rig will be evaluated for LOD 0, 1, and 2. Setting it to -1 will always evaluate it and disable LODing.
---@field public PhysicsAsset UPhysicsAsset @Physics asset used for rigid body simulation on the body part. Evaluation happens after the base skeleton.
---@field public RigidBodyLODThreshold integer @* Max LOD level to simulate the rigid bodies of the assigned physics asset. * For example if you have the threshold set to 2, simulation will be enabled for LOD 0, 1, and 2. Setting it to -1 will make it simulate always and disable LODing.
---@field public ComponentName string
local FMetaHumanCustomizableBodyPart = {}
