---The Node represents a single statement within a Graph.
---Nodes can represent values such as Variables / Parameters,
---they can represent Function Invocations or Control Flow
---logic statements (such as If conditions of For loops).
---Additionally Nodes are used to represent Comment statements.
---Nodes contain Pins to represent parameters for Function
---Invocations or Value access on Variables / Parameters.
---@class URigVMNode : UObject
---@field protected NodeTitle string
---@field protected Position FVector2D
---@field protected Size FVector2D
---@field protected NodeColor FLinearColor
---@field protected PreviousName string
---@field protected bHasBreakpoint boolean
---@field protected bHaltedAtThisNode boolean
---@field protected TraitRootPinNames TArray<string>
---@field protected TraitDefaultValues TMap<string, FRigVMTraitDefaultValueStruct> @root trait pin store their default value in a separate property bag so that things like soft object ptr can be used and tracked in a uproperty
---@field private Pins TArray<URigVMPin>
---@field private OrphanedPins TArray<URigVMPin>
---@field protected PinCategories TArray<string>
---@field protected PinCategoryExpansion TMap<string, boolean>
local URigVMNode = {}

---@param bValue boolean
function URigVMNode:SetHasBreakpoint(bValue) end

---@param bValue boolean
function URigVMNode:SetExecutionIsHaltedAtThisNode(bValue) end

---Returns true if this should be visible in the UI
---@return boolean
function URigVMNode:IsVisibleInUI() end

---@param InName string
---@return boolean
function URigVMNode:IsTraitPin(InName) end

---Returns true if this Node is currently selected.
---@return boolean
function URigVMNode:IsSelected() end

---Returns true if this Node has no side-effects
---and no internal state.
---@return boolean
function URigVMNode:IsPure() end

---Returns all pins for a given category
---@param InCategory string
---@return boolean
function URigVMNode:IsPinCategoryExpanded(InCategory) end

---Returns true if this Node has side effects or
---internal state.
---@return boolean
function URigVMNode:IsMutable() end

---return true if this node is a loop node
---@return boolean
function URigVMNode:IsLoopNode() end

---Returns true if this Node is linked to another
---given node through any of the Nodes' Pins.
---@param InNode URigVMNode
---@return boolean
function URigVMNode:IsLinkedTo(InNode) end

---@return boolean
function URigVMNode:IsInputAggregate() end

---Returns true if this is an injected node.
---Injected nodes are managed by pins are are not visible to the user.
---@return boolean
function URigVMNode:IsInjected() end

---Returns true if this Node is the beginning of a scope
---@return boolean
function URigVMNode:IsEvent() end

---Returns true if the node is defined as non-varying
---@return boolean
function URigVMNode:IsDefinedAsVarying() end

---Returns true if the node is defined as non-varying
---@return boolean
function URigVMNode:IsDefinedAsConstant() end

---return true if this node is a control flow node
---@return boolean
function URigVMNode:IsControlFlowNode() end

---@return boolean
function URigVMNode:IsAggregate() end

---Returns true if the node has any pins of the provided direction
---@param InDirection ERigVMPinDirection
---@return boolean
function URigVMNode:HasPinOfDirection(InDirection) end

---Returns true if the node has any output pins
---@param bIncludeIO boolean @[opt] 
---@return boolean
function URigVMNode:HasOutputPin(bIncludeIO) end

---Returns true if the node has orphaned pins - which leads to a compiler error
---@return boolean
function URigVMNode:HasOrphanedPins() end

---Returns true if the node has any lazily evaluating pins
---@param bOnlyConsiderPinsWithLinks boolean @[opt] 
---@return boolean
function URigVMNode:HasLazyPin(bOnlyConsiderPinsWithLinks) end

---Returns true if the node has any io pins
---@return boolean
function URigVMNode:HasIOPin() end

---Returns true if the node has any input pins
---@param bIncludeIO boolean @[opt] 
---@return boolean
function URigVMNode:HasInputPin(bIncludeIO) end

---@return boolean
function URigVMNode:HasBreakpoint() end

---@return TArray_URigVMPin_
function URigVMNode:GetTraitPins() end

---Returns the tooltip of this node
---@return string
function URigVMNode:GetToolTipText() end

---returns all supported workflows of the node
---@param InType ERigVMUserWorkflowType
---@param InSubject UObject
---@return TArray_FRigVMUserWorkflow_
function URigVMNode:GetSupportedWorkflows(InType, InSubject) end

---Returns all sub user defined categories of a given parent category
---@param InCategory string
---@param bOnlyExisting boolean @[opt] 
---@param bRecursive boolean @[opt] 
---@return TArray_string_
function URigVMNode:GetSubPinCategories(InCategory, bOnlyExisting, bRecursive) end

---Returns the 2d size of this node - used for UI.
---@return FVector2D
function URigVMNode:GetSize() end

---@return URigVMPin
function URigVMNode:GetSecondAggregatePin() end

---Returns the top level / root Graph of this Node
---@return URigVMGraph
function URigVMNode:GetRootGraph() end

---Returns the name of the node prior to the renaming
---@return string
function URigVMNode:GetPreviousFName() end

---Returns the 2d position of this node - used for UI.
---@return FVector2D
function URigVMNode:GetPosition() end

---Returns all pins for a given category
---@param InCategory string
---@return TArray_URigVMPin_
function URigVMNode:GetPinsForCategory(InCategory) end

---Returns all of the top-level Pins of this Node.
---@return TArray_URigVMPin_
function URigVMNode:GetPins() end

---Returns the name of pin category
---@param InCategory string
---@return string
function URigVMNode:GetPinCategoryName(InCategory) end

---Returns all user defined categories on this node
---@return TArray_string_
function URigVMNode:GetPinCategories() end

---Returns the parent pin category of the given category (or an empty string in case there's no parent)
---@param InCategory string
---@param bOnlyExisting boolean @[opt] 
---@return string
function URigVMNode:GetParentPinCategory(InCategory, bOnlyExisting) end

---Returns all parent categories of a given
---@param InCategory string
---@param bOnlyExisting boolean @[opt] 
---@param bIncludeSelf boolean @[opt] 
---@return TArray_string_
function URigVMNode:GetParentPinCategories(InCategory, bOnlyExisting, bIncludeSelf) end

---Returns all of the top-level orphaned Pins of this Node.
---@return TArray_URigVMPin_
function URigVMNode:GetOrphanedPins() end

---@return URigVMPin
function URigVMNode:GetOppositeAggregatePin() end

---Returns the title of this Node - used for UI.
---@return string
function URigVMNode:GetNodeTitle() end

---Returns the a . separated string containing all of the
---names used to reach this Node within the Graph.
---(for now this is the same as the Node's name)
---@param bRecursive boolean @[opt] 
---@return string
function URigVMNode:GetNodePath(bRecursive) end

---Returns the pin UI layout for this node
---@param bIncludeEmptyCategories boolean @[opt] 
---@return FRigVMNodeLayout
function URigVMNode:GetNodeLayout(bIncludeEmptyCategories) end

---Returns the current index of the Node within the Graph.
---@return integer
function URigVMNode:GetNodeIndex() end

---Returns the color of this node - used for UI.
---@return FLinearColor
function URigVMNode:GetNodeColor() end

---@param InLastAggregatePinName string
---@return string
function URigVMNode:GetNextAggregateName(InLastAggregatePinName) end

---Returns all links to any pin on this node
---@return TArray_URigVMLink_
function URigVMNode:GetLinks() end

---Returns a list of Nodes connected as targets to
---this Node as the source.
---@return TArray_URigVMNode_
function URigVMNode:GetLinkedTargetNodes() end

---Returns a list of Nodes connected as sources to
---this Node as the target.
---@return TArray_URigVMNode_
function URigVMNode:GetLinkedSourceNodes() end

---Returns the injection info of this Node (or nullptr)
---@return URigVMInjectionInfo
function URigVMNode:GetInjectionInfo() end

---Returns the graph nesting depth of this node
---@return integer
function URigVMNode:GetGraphDepth() end

---Returns the Graph of this Node
---@return URigVMGraph
function URigVMNode:GetGraph() end

---@return URigVMPin
function URigVMNode:GetFirstAggregatePin() end

---Returns the name of the event
---@return string
function URigVMNode:GetEventName() end

---Returns all of the Pins of this Node (including SubPins).
---@return TArray_URigVMPin_
function URigVMNode:GetAllPinsRecursively() end

---@return TArray_URigVMPin_
function URigVMNode:GetAggregateOutputs() end

---@return TArray_URigVMPin_
function URigVMNode:GetAggregateInputs() end

---Returns a root pin given its name
---@param InPinName string
---@return URigVMPin
function URigVMNode:FindRootPinByName(InPinName) end

---Returns a Pin given it's partial pin path below
---this node (for example: "Color.R")
---@param InPinPath string
---@return URigVMPin
function URigVMNode:FindPin(InPinPath) end

---@return URigVMLibraryNode
function URigVMNode:FindFunctionForNode() end

---Returns the first execute pin
---@return URigVMPin
function URigVMNode:FindExecutePin() end

---@return boolean
function URigVMNode:ExecutionIsHaltedAtThisNode() end

---Returns true if this node can only exist once in a graph
---@return boolean
function URigVMNode:CanOnlyExistOnce() end

---returns true if the node can be upgraded
---@return boolean
function URigVMNode:CanBeUpgraded() end

