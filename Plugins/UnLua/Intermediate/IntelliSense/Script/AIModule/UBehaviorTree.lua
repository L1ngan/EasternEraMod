---@class UBehaviorTree : UObject
---@field public RootNode UBTCompositeNode @root node of loaded tree
---@field public BTGraph UEdGraph @Graph for Behavior Tree
---@field public LastEditedDocuments TArray<FEditedDocumentInfo> @Info about the graphs we last edited
---@field public BlackboardAsset UBlackboardData @blackboard asset for this tree
---@field public RootDecorators TArray<UBTDecorator> @root level decorators, used by subtrees
---@field public RootDecoratorOps TArray<FBTDecoratorLogic> @logic operators for root level decorators, used by subtrees
local UBehaviorTree = {}

---Returns BlackboardData referenced by the owner object.
---@return UBlackboardData
function UBehaviorTree:GetBlackboardAsset() end

