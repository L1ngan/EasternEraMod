---@class UK2Node_AnimGetter : UK2Node_CallFunction
---@field public SourceNode UAnimGraphNode_Base @The node that is required for the getter
---@field public SourceStateNode UAnimStateNodeBase @UAnimStateNode doesn't use the same hierarchy so we need to have a seperate property here to handle those.
---@field public GetterClass TSubclassOf<UObject> @The UAnimInstance derived class that implements the getter we are running
---@field public SourceAnimBlueprint UAnimBlueprint @The anim blueprint that generated this getter
---@field public CachedTitle string @Cached node title
---@field public Contexts TArray<string> @List of valid contexts for the node
local UK2Node_AnimGetter = {}

