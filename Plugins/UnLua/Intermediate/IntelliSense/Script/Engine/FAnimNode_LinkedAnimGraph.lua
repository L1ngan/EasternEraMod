---@class FAnimNode_LinkedAnimGraph : FAnimNode_CustomProperty
---@field public InputPoses TArray<FPoseLink> @Input poses for the node, intentionally not accessible because if there's no input nodes in the target class we don't want to show these as pins
---@field public InputPoseNames TArray<string> @List of input pose names, 1-1 with pose links about, built by the compiler
---@field public InstanceClass TSubclassOf<UAnimInstance> @The class spawned for this linked instance
---@field protected PendingBlendOutProfile UBlendProfile @Optional blend profile to use during inertial blending (pulled from the prior state's blend out)
---@field protected PendingBlendInProfile UBlendProfile @Optional blend profile to use during inertial blending (pulled from the new state's blend in)
---@field public bReceiveNotifiesFromLinkedInstances boolean @Whether named notifies will be received by this linked instance from other instances (outer or other linked instances)
---@field public bPropagateNotifiesToLinkedInstances boolean @Whether named notifies will be propagated from this linked instance to other instances (outer or other linked instances)
local FAnimNode_LinkedAnimGraph = {}
