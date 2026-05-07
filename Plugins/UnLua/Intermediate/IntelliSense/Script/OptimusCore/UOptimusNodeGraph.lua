---@class UOptimusNodeGraph : UObject
---@field protected GraphType EOptimusNodeGraphType @The type of graph this represents.
---@field protected bViewLocationSet boolean
---@field protected ViewLocation FVector2D
---@field protected ViewZoom number
---@field private Nodes TArray<UOptimusNode>
---@field private Links TArray<UOptimusNodeLink> @FIXME: Use a map.
---@field private NodePairs TArray<UOptimusNodePair>
---@field private SubGraphs TArray<UOptimusNodeGraph>
local UOptimusNodeGraph = {}

---@param InGraph UOptimusNodeGraph
---@param InNewName string
---@return boolean
function UOptimusNodeGraph:RenameGraphDirect(InGraph, InNewName) end

---@param InGraph UOptimusNodeGraph
---@param InNewName string
---@return boolean
function UOptimusNodeGraph:RenameGraph(InGraph, InNewName) end

---@param InNodes TArray_UOptimusNode_
---@return boolean
function UOptimusNodeGraph:RemoveNodes(InNodes) end

---@param InNode UOptimusNode
---@return boolean
function UOptimusNodeGraph:RemoveNode(InNode) end

---
---FIXME: Use UOptimusNodeLink instead.
---@param InNodeOutputPin UOptimusNodePin
---@param InNodeInputPin UOptimusNodePin
---@return boolean
function UOptimusNodeGraph:RemoveLink(InNodeOutputPin, InNodeInputPin) end

---
---@param InNodePin UOptimusNodePin
---@return boolean
function UOptimusNodeGraph:RemoveAllLinks(InNodePin) end

---@param InGraph UOptimusNodeGraph
---@param InInsertBefore integer
---@return boolean
function UOptimusNodeGraph:MoveGraphDirect(InGraph, InInsertBefore) end

---Returns true if the node in question is a function sub-graph node that can be expanded
---into a group of nodes using ExpandFunctionToNodes.
---@param InNode UOptimusNode
---@return boolean
function UOptimusNodeGraph:IsSubGraphReference(InNode) end

---Returns true if the node in question is a kernel function node that can be converted to
---a custom kernel using ConvertFunctionToCustomKernel.
---@param InNode UOptimusNode
---@return boolean
function UOptimusNodeGraph:IsKernelFunction(InNode) end

---Returns true if the node in question is a function reference node that can be expanded
---into a group of nodes using ExpandFunctionToNodes.
---@param InNode UOptimusNode
---@return boolean
function UOptimusNodeGraph:IsFunctionReference(InNode) end

---@return boolean
function UOptimusNodeGraph:IsFunctionGraph() end

---@return boolean
function UOptimusNodeGraph:IsExecutionGraph() end

---Returns true if the node in question is a custom kernel node that can be converted to
---a kernel function with ConvertCustomKernelToFunction.
---@param InNode UOptimusNode
---@return boolean
function UOptimusNodeGraph:IsCustomKernel(InNode) end

---@return EOptimusNodeGraphType
function UOptimusNodeGraph:GetGraphType() end

---@return TArray_UOptimusNodeGraph_
function UOptimusNodeGraph:GetGraphs() end

---@return integer
function UOptimusNodeGraph:GetGraphIndex() end

---Take a function or subgraph node and expand it in-place, replacing the given function
---node. The function definition still remains, if a function node was expanded. If a
---sub-graph was expanded, the sub-graph is deleted.
---@param InGraphReferenceNode UOptimusNode
---@return TArray_UOptimusNode_
function UOptimusNodeGraph:ExpandCollapsedNodes(InGraphReferenceNode) end

---Duplicate a collection of nodes from the same graph, using the InPosition position
---to be the top-left origin of the pasted nodes.
---@param InNodes TArray_UOptimusNode_
---@param InPosition FVector2D
---@return boolean
function UOptimusNodeGraph:DuplicateNodes(InNodes, InPosition) end

---@param InNode UOptimusNode
---@param InPosition FVector2D
---@return UOptimusNode
function UOptimusNodeGraph:DuplicateNode(InNode, InPosition) end

---Take a function node convert it to a subgraph node in-place
---@param InFunctionNode UOptimusNode
---@return boolean
function UOptimusNodeGraph:ConvertToSubGraph(InFunctionNode) end

---Take a subgraph node convert it to a function in-place
---@param InSubGraphNode UOptimusNode
---@return boolean
function UOptimusNodeGraph:ConvertToFunction(InSubGraphNode) end

---Takes a kernel function and unpackages to a custom kernel. If the given node is not a
---kernel function or cannot be converted, a nullptr is returned.
---@param InKernelFunction UOptimusNode
---@return UOptimusNode
function UOptimusNodeGraph:ConvertFunctionToCustomKernel(InKernelFunction) end

---Takes a custom kernel and converts to a packaged function. If the given node is not a
---custom kernel or cannot be converted, a nullptr is returned.
---@param InCustomKernel UOptimusNode
---@return UOptimusNode
function UOptimusNodeGraph:ConvertCustomKernelToFunction(InCustomKernel) end

---Take a set of nodes and collapse them into a subgraph, replacing the given nodes
---with a new subgraph node and returning it.
---@param InNodes TArray_UOptimusNode_
---@return UOptimusNode
function UOptimusNodeGraph:CollapseNodesToSubGraph(InNodes) end

---Take a set of nodes and collapse them into a single function, replacing the given nodes
---with the new function node and returning it. A new function definition is made available
---as a new Function graph in the package.
---@param InNodes TArray_UOptimusNode_
---@return UOptimusNode
function UOptimusNodeGraph:CollapseNodesToFunction(InNodes) end

---@param InVariableDesc UOptimusVariableDescription
---@param InPosition FVector2D
---@return UOptimusNode
function UOptimusNodeGraph:AddVariableGetNode(InVariableDesc, InPosition) end

---@param InDataTypeRef FOptimusDataTypeRef
---@param InPosition FVector2D
---@return UOptimusNode
function UOptimusNodeGraph:AddValueNode(InDataTypeRef, InPosition) end

---@param InResourceDesc UOptimusResourceDescription
---@param InPosition FVector2D
---@return UOptimusNode
function UOptimusNodeGraph:AddResourceSetNode(InResourceDesc, InPosition) end

---@param InResourceDesc UOptimusResourceDescription
---@param InPosition FVector2D
---@return UOptimusNode
function UOptimusNodeGraph:AddResourceNode(InResourceDesc, InPosition) end

---@param InResourceDesc UOptimusResourceDescription
---@param InPosition FVector2D
---@return UOptimusNode
function UOptimusNodeGraph:AddResourceGetNode(InResourceDesc, InPosition) end

---TODO: Add magic connection from a pin.
---@param InNodeClass TSubclassOf_UOptimusNode_
---@param InPosition FVector2D
---@return UOptimusNode
function UOptimusNodeGraph:AddNode(InNodeClass, InPosition) end

---@param InPosition FVector2D
---@return TArray_UOptimusNode_
function UOptimusNodeGraph:AddLoopTerminalNodes(InPosition) end

---@param InNodeOutputPin UOptimusNodePin
---@param InNodeInputPin UOptimusNodePin
---@return boolean
function UOptimusNodeGraph:AddLink(InNodeOutputPin, InNodeInputPin) end

---@param InFunctionGraph UOptimusFunctionNodeGraph
---@param InPosition FVector2D
---@return UOptimusNode
function UOptimusNodeGraph:AddFunctionReferenceNode(InFunctionGraph, InPosition) end

---@param InDataInterfaceClass TSubclassOf_UOptimusComputeDataInterface_
---@param InPosition FVector2D
---@return UOptimusNode
function UOptimusNodeGraph:AddDataInterfaceNode(InDataInterfaceClass, InPosition) end

---@param InComponentBinding UOptimusComponentSourceBinding
---@param InPosition FVector2D
---@return UOptimusNode
function UOptimusNodeGraph:AddComponentBindingGetNode(InComponentBinding, InPosition) end

---@param InPosition FVector2D
---@param InSize FVector2D
---@param InColor FLinearColor
---@return UOptimusNode
function UOptimusNodeGraph:AddCommentNode(InPosition, InSize, InColor) end

