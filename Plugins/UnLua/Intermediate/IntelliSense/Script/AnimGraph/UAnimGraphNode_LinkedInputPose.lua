---@class UAnimGraphNode_LinkedInputPose : UAnimGraphNode_Base
---@field public Node FAnimNode_LinkedInputPose
---@field public Inputs TArray<FAnimBlueprintFunctionPinInfo>
---@field public FunctionReference FMemberReference @Reference to the stub function we use to build our parameters
---@field public InputPoseIndex integer @The index of the input pose, used alongside FunctionReference to build parameters
local UAnimGraphNode_LinkedInputPose = {}

