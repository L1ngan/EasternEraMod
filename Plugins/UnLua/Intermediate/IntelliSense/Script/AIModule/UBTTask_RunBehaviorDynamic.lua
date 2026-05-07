---RunBehaviorDynamic task allows pushing subtrees on execution stack.
---Subtree asset can be assigned at runtime with SetDynamicSubtree function of BehaviorTreeComponent.
---Does NOT support subtree's root level decorators!
---@class UBTTask_RunBehaviorDynamic : UBTTaskNode
---@field protected InjectionTag FGameplayTag @Gameplay tag that will identify this task for subtree injection
---@field protected DefaultBehaviorAsset UBehaviorTree @default behavior to run
---@field protected BehaviorAsset UBehaviorTree @current subtree
local UBTTask_RunBehaviorDynamic = {}

