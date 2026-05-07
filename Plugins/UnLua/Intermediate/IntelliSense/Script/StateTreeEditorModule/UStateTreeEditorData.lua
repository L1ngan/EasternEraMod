---Edit time data for StateTree asset. This data gets baked into runtime format before being used by the StateTreeInstance.
---@class UStateTreeEditorData : UObject
---@field public Schema UStateTreeSchema @Schema describing which inputs, evaluators, and tasks a StateTree can contain
---@field public RootParameters FStateTreeStateParameters
---@field private RootParametersGuid FGuid @Public parameters ID that could be used for bindings within the Tree.
---@field private RootParameterPropertyBag FInstancedPropertyBag @Public parameters property bag that could be used for bindings within the Tree.
---@field public Evaluators TArray<FStateTreeEditorNode>
---@field public GlobalTasks TArray<FStateTreeEditorNode>
---@field public GlobalTasksCompletion EStateTreeTaskCompletionType
---@field public EditorBindings FStateTreeEditorPropertyBindings
---@field public Colors TSet<FStateTreeEditorColor> @Color Options to assign to a State
---@field public SubTrees TArray<UStateTreeState> @Top level States.
---@field public Breakpoints TArray<FStateTreeEditorBreakpoint> @Transient list of breakpoints added in the debugging session. These will be lost if the asset gets reloaded. If there is eventually a change to make those persist with the asset we need to prune all dangling breakpoints after states/tasks got removed.
---@field public CompiledDispatchers TArray<FStateTreeEditorDelegateDispatcherCompiledBinding> @List of the previous compiled delegate dispatchers. Saved in the editor data to be duplicated transient.
local UStateTreeEditorData = {}

