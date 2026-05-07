---Task that will run another state tree in the current state while allowing the current tree to continue selection and process of child state.
---It will succeed, fail or run depending on the result of the parallel tree.
---Less efficient then Linked Asset state, it has the advantage of allowing multiple trees to run in parallel.
---@class FStateTreeRunParallelStateTreeTask : FStateTreeTaskCommonBase
---@field protected StateTreeOverrideTag FGameplayTag @If set the task will look at the linked state tree override to replace the state tree it's running.
---@field protected EventHandlingPriority EStateTreeTransitionPriority @At what priority the events should be handled in the parallel State Tree. If set to 'Normal' the order of the States in the State Tree will define the handling order. If the priority is set to Low, the main tree is let to handle the transitions first. If set to High or above, the parallel tree has change to handle events first. If multiple tasks has same priority, the State order of the States defines the handling order. The tree handling order is: States and handle from leaf to root, tasks before and handled before transitions per State.
local FStateTreeRunParallelStateTreeTask = {}
