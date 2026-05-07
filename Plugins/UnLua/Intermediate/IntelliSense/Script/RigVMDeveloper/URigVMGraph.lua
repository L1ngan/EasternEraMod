---The Graph represents a Function definition
---using Nodes as statements.
---Graphs can be compiled into a URigVM using the
---FRigVMCompiler.
---Graphs provide access to its Nodes, Pins and
---Links.
---@class URigVMGraph : UObject
---@field private Nodes TArray<URigVMNode>
---@field private Links TArray<URigVMLink>
---@field private DetachedLinks TArray<URigVMLink>
---@field private SelectedNodes TArray<string>
---@field private DefaultFunctionLibraryPtr TWeakObjectPtr<URigVMGraph>
---@field private ExecuteContextStruct UScriptStruct
---@field private LastStructureHash integer
---@field private bEditable boolean
---@field private LocalVariables TArray<FRigVMGraphVariableDescription>
---@field private SchemaClass TSubclassOf<URigVMSchema>
local URigVMGraph = {}

---Sets the schema class on the graph
---@param InSchemaClass TSubclassOf_URigVMSchema_
function URigVMGraph:SetSchemaClass(InSchemaClass) end

---@param InFunctionLibrary URigVMFunctionLibrary
function URigVMGraph:SetDefaultFunctionLibrary(InFunctionLibrary) end

---Returns true if this graph is the top level graph
---@return boolean
function URigVMGraph:IsTopLevelGraph() end

---Returns true if this graph is a root / top level graph
---@return boolean
function URigVMGraph:IsRootGraph() end

---Returns true if a Node with a given name is selected.
---@param InNodeName string
---@return boolean
function URigVMGraph:IsNodeSelected(InNodeName) end

---Returns a list of unique Variable descriptions within this Graph.
---Multiple Variable Nodes can share the same description.
---@return TArray_FRigVMGraphVariableDescription_
function URigVMGraph:GetVariableDescriptions() end

---Returns the names of all currently selected Nodes.
---@return TArray_string_
function URigVMGraph:GetSelectNodes() end

---Returns the schema class used by this graph
---@return TSubclassOf_URigVMSchema_
function URigVMGraph:GetSchemaClass() end

---Returns the schema used by this graph
---@return URigVMSchema
function URigVMGraph:GetSchema() end

---Returns the root / top level parent graph of this graph (or this if it is the root graph)
---@return URigVMGraph
function URigVMGraph:GetRootGraph() end

---Returns the return node of this graph
---@return URigVMFunctionReturnNode
function URigVMGraph:GetReturnNode() end

---Returns the parent graph of this graph
---@return URigVMGraph
function URigVMGraph:GetParentGraph() end

---Returns the output arguments of this graph
---@return TArray_FRigVMGraphVariableDescription_
function URigVMGraph:GetOutputArguments() end

---Returns all of the Nodes within this Graph.
---@return TArray_URigVMNode_
function URigVMGraph:GetNodes() end

---Returns the path of this graph as defined by its invoking nodes
---@return string
function URigVMGraph:GetNodePath() end

---Returns the local variables of this function
---@param bIncludeInputArguments boolean @[opt] 
---@return TArray_FRigVMGraphVariableDescription_
function URigVMGraph:GetLocalVariables(bIncludeInputArguments) end

---Returns all of the Links within this Graph.
---@return TArray_URigVMLink_
function URigVMGraph:GetLinks() end

---Returns the input arguments of this graph
---@return TArray_FRigVMGraphVariableDescription_
function URigVMGraph:GetInputArguments() end

---Returns the name of this graph (as defined by the node path)
---@return string
function URigVMGraph:GetGraphName() end

---Returns the root / top level parent graph of this graph (or this if it is the root graph)
---@return integer
function URigVMGraph:GetGraphDepth() end

---Returns array of event names
---@return TArray_string_
function URigVMGraph:GetEventNames() end

---Returns the entry node of this graph
---@return URigVMFunctionEntryNode
function URigVMGraph:GetEntryNode() end

---Returns the locally available function library
---@return URigVMFunctionLibrary
function URigVMGraph:GetDefaultFunctionLibrary() end

---Returns all of the contained graphs
---@param bRecursive boolean @[opt] 
---@return TArray_URigVMGraph_
function URigVMGraph:GetContainedGraphs(bRecursive) end

---Returns a Pin given its path, for example "Node.Color.R".
---@param InPinPath string
---@return URigVMPin
function URigVMGraph:FindPin(InPinPath) end

---Returns a Node given its name (or nullptr).
---@param InNodeName string
---@return URigVMNode
function URigVMGraph:FindNodeByName(InNodeName) end

---Returns a Node given its path (or nullptr).
---(for now this is the same as finding a node by its name.)
---@param InNodePath string
---@return URigVMNode
function URigVMGraph:FindNode(InNodePath) end

---Returns a link given its string representation,
---for example "NodeA.Color.R -> NodeB.Translation.X"
---@param InLinkPinPathRepresentation string
---@return URigVMLink
function URigVMGraph:FindLink(InLinkPinPathRepresentation) end

---Returns true if the graph contains a link given its string representation
---@param InPinPathRepresentation string
---@return boolean
function URigVMGraph:ContainsLink(InPinPathRepresentation) end

