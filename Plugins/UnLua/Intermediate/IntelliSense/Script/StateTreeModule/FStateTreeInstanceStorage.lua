---Storage for the actual instance data.
---@class FStateTreeInstanceStorage
---@field protected InstanceStructs FInstancedStructContainer @Struct instances (Not transient, as we use FStateTreeInstanceData to store default values for instance data)
---@field protected ExecutionState FStateTreeExecutionState @Execution state of the state tree instance.
---@field protected TemporaryInstances TArray<FStateTreeTemporaryInstanceData> @Temporary instances
---@field protected TransitionRequests TArray<FStateTreeTransitionRequest> @Requested transitions
---@field protected GlobalParameters FInstancedPropertyBag @Global parameters
---@field protected UniqueIdGenerator integer @Unique id.
local FStateTreeInstanceStorage = {}
