---Branch between two Managed Array Collections based on Boolean condition
---@class FBranchCollectionDataflowNode : FDataflowNode
---@field public TrueCollection FManagedArrayCollection @Collection input for the 'true' case
---@field public FalseCollection FManagedArrayCollection @Collection input for the 'false' case
---@field public bCondition boolean @Condition to select which Collection is chosen as ChosenCollection
---@field public ChosenCollection FManagedArrayCollection @Output Collection
local FBranchCollectionDataflowNode = {}
