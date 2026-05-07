---Data used just to initialize an IKRigSkeleton from outside systems
---The input skeleton may be different than the skeleton that the IK Rig asset was created for, within some limits.
---1. It must have all the Bones that the IK Rig asset referenced (must be a sub-set)
---2. All the bones must have the same parents (no change in hierarchy)
---You can however add additional bones, change the reference pose (including proportions) and the bone indices.
---This allows you to run the same IK Rig asset on somewhat different skeletal meshes.
---To validate compatibility use UIKRigProcess::IsIKRigCompatibleWithSkeleton()
---@class FIKRigInputSkeleton
local FIKRigInputSkeleton = {}
