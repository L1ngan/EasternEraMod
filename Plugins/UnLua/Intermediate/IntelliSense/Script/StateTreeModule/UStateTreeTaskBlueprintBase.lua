---* Base class for Blueprint based Tasks.
---@class UStateTreeTaskBlueprintBase : UStateTreeNodeBlueprintBase
---@field protected bShouldStateChangeOnReselect boolean @If set to true, the task will receive EnterState/ExitState even if the state was previously active. Generally this should be true for action type tasks, like playing animation, and false on state like tasks like claiming a resource that is expected to be acquired on child states.
---@field protected bShouldCallTickOnlyOnEvents boolean @If set to true, Tick() is called. Default false.
---@field protected bShouldCopyBoundPropertiesOnTick boolean @If set to true, copy the values of bound properties before calling Tick(). Default true.
---@field protected bShouldCopyBoundPropertiesOnExitState boolean @If set to true, copy the values of bound properties before calling ExitState(). Default true.
---@field public bConsideredForCompletion boolean @True if the task is considered for completion. False if the task runs in the background without affecting the state completion.
---@field public bCanEditConsideredForCompletion boolean @True if the user can edit bConsideredForCompletion in the editor.
local UStateTreeTaskBlueprintBase = {}

---Unregisters the callback bound to the listener.
---@param Listener FStateTreeDelegateListener
function UStateTreeTaskBlueprintBase:UnbindDelegate(Listener) end

---@param DeltaTime number
---@return EStateTreeRunStatus
function UStateTreeTaskBlueprintBase:ReceiveTick(DeltaTime) end

---Called right after a state has been completed, but before new state has been selected. StateCompleted is called in reverse order to allow to propagate state to other Tasks that
---are executed earlier in the tree. Note that StateCompleted is not called if conditional transition changes the state.
---@param CompletionStatus EStateTreeRunStatus
---@param CompletedActiveStates FStateTreeActiveStates
function UStateTreeTaskBlueprintBase:ReceiveStateCompleted(CompletionStatus, CompletedActiveStates) end

---Called during state tree tick when the task is on active state.
---Use FinishTask() to set the task execution completed. State completion is controlled by completed tasks.
---Triggering GameplayTasks and other latent action should generally be done on EnterState. Tick is called on each update (or event)
---and can cause huge amount of task added if the logic is not handled carefully.
---Tick should be generally be used for monitoring that require polling, or actions that require constant ticking.
---Note: The method is called only if bShouldCallTick or bShouldCallTickOnlyOnEvents is set.
---@param DeltaTime number
function UStateTreeTaskBlueprintBase:ReceiveLatentTick(DeltaTime) end

---Called when a new state is entered and task is part of active states.
---Use FinishTask() to set the task execution completed. State completion is controlled by completed tasks.
---GameplayTasks and other latent actions should be generally triggered on EnterState. When using a GameplayTasks it's required
---to manually cancel active tasks on ExitState if the GameplayTask's lifetime is tied to the State Tree task.
---@param Transition FStateTreeTransitionResult
function UStateTreeTaskBlueprintBase:ReceiveLatentEnterState(Transition) end

---Called when a current state is exited and task is part of active states.
---@param Transition FStateTreeTransitionResult
function UStateTreeTaskBlueprintBase:ReceiveExitState(Transition) end

---@param Transition FStateTreeTransitionResult
---@return EStateTreeRunStatus
function UStateTreeTaskBlueprintBase:ReceiveEnterState(Transition) end

---Finish the task and sets it's status.
---@param bSucceeded boolean @[opt] 
function UStateTreeTaskBlueprintBase:FinishTask(bSucceeded) end

---Broadcasts the dispatcher. It will triggers bound callback (bound with BindDelegate) and bound transitions.
---@param Dispatcher FStateTreeDelegateDispatcher
function UStateTreeTaskBlueprintBase:BroadcastDelegate(Dispatcher) end

---Registers the callback to the listener.
---If the listener was previously registered, then unregister it first before registering it again with the new delegate callback.
---The listener is bound to a dispatcher in the editor.
---@param Listener FStateTreeDelegateListener
---@param Delegate Delegate
function UStateTreeTaskBlueprintBase:BindDelegate(Listener, Delegate) end

