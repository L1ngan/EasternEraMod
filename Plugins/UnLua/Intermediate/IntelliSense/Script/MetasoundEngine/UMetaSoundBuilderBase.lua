---Base implementation of MetaSound builder
---@class UMetaSoundBuilderBase : UObject
---@field protected Builder FMetaSoundFrontendDocumentBuilder
---@field protected ClassName FMetasoundFrontendClassName
---@field protected bIsAttached boolean
local UMetaSoundBuilderBase = {}

---Sets the node's input default value (used if no connection to the given node input is present)
---@param NodeInputHandle FMetaSoundBuilderNodeInputHandle
---@param Literal FMetasoundFrontendLiteral
---@param OutResult EMetaSoundBuilderResult @[out] 
function UMetaSoundBuilderBase:SetNodeInputDefault(NodeInputHandle, Literal, OutResult) end

---Sets the given graph output's name to the new name.
---Result succeeds if the name was successfully changed or the new name is the same as the old name, and fails if the given output name doesn't exist.
---@param OutputName string
---@param NewName string
---@param OutResult EMetaSoundBuilderResult @[out] 
function UMetaSoundBuilderBase:SetGraphOutputName(OutputName, NewName, OutResult) end

---Disconnects the given graph output's respective template nodes and sets the graph output's DataType should it not match the current DataType.
---Result succeeds if the DataType was successfully changed or if the provided DataType is already the output's current DataType.
---@param OutputName string
---@param DataType string
---@param OutResult EMetaSoundBuilderResult @[out] 
function UMetaSoundBuilderBase:SetGraphOutputDataType(OutputName, DataType, OutResult) end

---Disconnects the given graph output's respective template nodes and sets the graph output's AccessType should it not match the current AccessType.
---Result succeeds if the AccessType was successfully changed or if the provided AccessType is already the output's current AccessType.
---@param OutputName string
---@param AccessType EMetasoundFrontendVertexAccessType
---@param OutResult EMetaSoundBuilderResult @[out] 
function UMetaSoundBuilderBase:SetGraphOutputAccessType(OutputName, AccessType, OutResult) end

---Sets the given graph input's name to the new name.
---Result succeeds if the name was successfully changed or the new name is the same as the old name, and fails if the given input name doesn't exist.
---@param InputName string
---@param NewName string
---@param OutResult EMetaSoundBuilderResult @[out] 
function UMetaSoundBuilderBase:SetGraphInputName(InputName, NewName, OutResult) end

---Sets the input node's default value, overriding the default provided by the referenced graph if the graph is a preset.
---@param InputName string
---@param Literal FMetasoundFrontendLiteral
---@param OutResult EMetaSoundBuilderResult @[out] 
function UMetaSoundBuilderBase:SetGraphInputDefault(InputName, Literal, OutResult) end

---Disconnects the given graph input's respective template nodes and sets the graph input's DataType should it not match the current DataType.
---Result succeeds if the DataType was successfully changed or if the provided DataType is already the input's current DataType.
---@param InputName string
---@param DataType string
---@param OutResult EMetaSoundBuilderResult @[out] 
function UMetaSoundBuilderBase:SetGraphInputDataType(InputName, DataType, OutResult) end

---Disconnects the given graph input's respective template nodes and sets the graph input's AccessType should it not match the current AccessType.
---Result succeeds if the AccessType was successfully changed or if the provided AccessType is already the input's current AccessType.
---@param InputName string
---@param AccessType EMetasoundFrontendVertexAccessType
---@param OutResult EMetaSoundBuilderResult @[out] 
function UMetaSoundBuilderBase:SetGraphInputAccessType(InputName, AccessType, OutResult) end

---Removes dependencies in document that are no longer referenced by nodes
function UMetaSoundBuilderBase:RemoveUnusedDependencies() end

---Removes node input literal default if set, reverting the value to be whatever the node class defaults the value to.
---Returns success if value was removed, false if not removed (i.e. wasn't set to begin with).
---@param InputHandle FMetaSoundBuilderNodeInputHandle
---@param OutResult EMetaSoundBuilderResult @[out] 
function UMetaSoundBuilderBase:RemoveNodeInputDefault(InputHandle, OutResult) end

---Removes node and any associated connections from the current build graph. (Advanced) Optionally, remove unused dependencies
---from the internal dependency list on successful removal of node.
---@param NodeHandle FMetaSoundNodeHandle
---@param OutResult EMetaSoundBuilderResult @[out] 
---@param bRemoveUnusedDependencies boolean @[opt] 
function UMetaSoundBuilderBase:RemoveNode(NodeHandle, OutResult, bRemoveUnusedDependencies) end

---Removes the interface with the given name from the builder's MetaSound. Removes any graph inputs
---and outputs associated with the given interface and their respective connections (if any).
---@param InterfaceName string
---@param OutResult EMetaSoundBuilderResult @[out] 
function UMetaSoundBuilderBase:RemoveInterface(InterfaceName, OutResult) end

---Removes graph variable from the current build graph if it exists; sets result to succeeded if it was removed and failed if it was not.
---@param Name string
---@param OutResult EMetaSoundBuilderResult @[out] 
function UMetaSoundBuilderBase:RemoveGraphVariable(Name, OutResult) end

---Removes output from all paged graphs if it exists; sets result to succeeded if it was removed and failed if it was not.
---@param Name string
---@param OutResult EMetaSoundBuilderResult @[out] 
function UMetaSoundBuilderBase:RemoveGraphOutput(Name, OutResult) end

---Removes input from all paged graphs if it exists; sets result to succeeded if it was removed and failed if it was not.
---@param Name string
---@param OutResult EMetaSoundBuilderResult @[out] 
function UMetaSoundBuilderBase:RemoveGraphInput(Name, OutResult) end

---Returns if a given node output and node input are connected.
---@param OutputHandle FMetaSoundBuilderNodeOutputHandle
---@param InputHandle FMetaSoundBuilderNodeInputHandle
---@return boolean
function UMetaSoundBuilderBase:NodesAreConnected(OutputHandle, InputHandle) end

---Returns if a given node output is connected.
---@param OutputHandle FMetaSoundBuilderNodeOutputHandle
---@return boolean
function UMetaSoundBuilderBase:NodeOutputIsConnected(OutputHandle) end

---Returns if a given node input has connections.
---@param InputHandle FMetaSoundBuilderNodeInputHandle
---@return boolean
function UMetaSoundBuilderBase:NodeInputIsConnected(InputHandle) end

---Returns whether this is a preset.
---@return boolean
function UMetaSoundBuilderBase:IsPreset() end

---Returns if a given interface is declared.
---@param InterfaceName string
---@return boolean
function UMetaSoundBuilderBase:InterfaceIsDeclared(InterfaceName) end

---Returns the MetaSound asset's graph class name (used by the MetaSound Node Class Registry)
---@return FMetasoundFrontendClassName
function UMetaSoundBuilderBase:GetRootGraphClassName() end

---Return the asset referenced by this preset builder. Returns nullptr if the builder is not a preset.
---@return UObject
function UMetaSoundBuilderBase:GetReferencedPresetAsset() end

---Returns whether the given node output is a constructor pin
---@param OutputHandle FMetaSoundBuilderNodeOutputHandle
---@return boolean
function UMetaSoundBuilderBase:GetNodeOutputIsConstructorPin(OutputHandle) end

---Returns node output's data if valid (including things like name and datatype).
---@param OutputHandle FMetaSoundBuilderNodeOutputHandle
---@param Name string @[out] 
---@param DataType string @[out] 
---@param OutResult EMetaSoundBuilderResult @[out] 
function UMetaSoundBuilderBase:GetNodeOutputData(OutputHandle, Name, DataType, OutResult) end

---Returns whether the given node input is a constructor pin
---@param InputHandle FMetaSoundBuilderNodeInputHandle
---@return boolean
function UMetaSoundBuilderBase:GetNodeInputIsConstructorPin(InputHandle) end

---Returns node input's literal value if set on graph, otherwise fails and returns default literal.
---@param InputHandle FMetaSoundBuilderNodeInputHandle
---@param OutResult EMetaSoundBuilderResult @[out] 
---@return FMetasoundFrontendLiteral
function UMetaSoundBuilderBase:GetNodeInputDefault(InputHandle, OutResult) end

---Returns node input's data if valid (including things like name and datatype).
---@param InputHandle FMetaSoundBuilderNodeInputHandle
---@param Name string @[out] 
---@param DataType string @[out] 
---@param OutResult EMetaSoundBuilderResult @[out] 
function UMetaSoundBuilderBase:GetNodeInputData(InputHandle, Name, DataType, OutResult) end

---Returns node input's class literal value if set, otherwise fails and returns default literal.
---@param InputHandle FMetaSoundBuilderNodeInputHandle
---@param OutResult EMetaSoundBuilderResult @[out] 
---@return FMetasoundFrontendLiteral
function UMetaSoundBuilderBase:GetNodeInputClassDefault(InputHandle, OutResult) end

---Gets the graph variable's default literal value.
---@param VariableName string
---@param OutResult EMetaSoundBuilderResult @[out] 
---@return FMetasoundFrontendLiteral
function UMetaSoundBuilderBase:GetGraphVariableDefault(VariableName, OutResult) end

---Gets names of all graph outputs.
---@param OutResult EMetaSoundBuilderResult @[out] 
---@return TArray_string_
function UMetaSoundBuilderBase:GetGraphOutputNames(OutResult) end

---Gets names of all graph inputs.
---@param OutResult EMetaSoundBuilderResult @[out] 
---@return TArray_string_
function UMetaSoundBuilderBase:GetGraphInputNames(OutResult) end

---Gets the graph input's default literal value.
---@param InputName string
---@param OutResult EMetaSoundBuilderResult @[out] 
---@return FMetasoundFrontendLiteral
function UMetaSoundBuilderBase:GetGraphInputDefault(InputName, OutResult) end

---Returns node outputs by the given DataType (ex. "Audio", "Trigger", "String", "Bool", "Float", "Int32", etc.).
---@param NodeHandle FMetaSoundNodeHandle
---@param OutResult EMetaSoundBuilderResult @[out] 
---@param DataType string
---@return TArray_FMetaSoundBuilderNodeOutputHandle_
function UMetaSoundBuilderBase:FindNodeOutputsByDataType(NodeHandle, OutResult, DataType) end

---Returns all node outputs.
---@param NodeHandle FMetaSoundNodeHandle
---@param OutResult EMetaSoundBuilderResult @[out] 
---@return TArray_FMetaSoundBuilderNodeOutputHandle_
function UMetaSoundBuilderBase:FindNodeOutputs(NodeHandle, OutResult) end

---Returns output's parent node if the input is valid, otherwise returns invalid node handle.
---@param OutputHandle FMetaSoundBuilderNodeOutputHandle
---@param OutResult EMetaSoundBuilderResult @[out] 
---@return FMetaSoundNodeHandle
function UMetaSoundBuilderBase:FindNodeOutputParent(OutputHandle, OutResult) end

---Returns node output by the given name.
---@param NodeHandle FMetaSoundNodeHandle
---@param OutputName string
---@param OutResult EMetaSoundBuilderResult @[out] 
---@return FMetaSoundBuilderNodeOutputHandle
function UMetaSoundBuilderBase:FindNodeOutputByName(NodeHandle, OutputName, OutResult) end

---Returns node inputs by the given DataType (ex. "Audio", "Trigger", "String", "Bool", "Float", "Int32", etc.).
---@param NodeHandle FMetaSoundNodeHandle
---@param OutResult EMetaSoundBuilderResult @[out] 
---@param DataType string
---@return TArray_FMetaSoundBuilderNodeInputHandle_
function UMetaSoundBuilderBase:FindNodeInputsByDataType(NodeHandle, OutResult, DataType) end

---Returns all node inputs.
---@param NodeHandle FMetaSoundNodeHandle
---@param OutResult EMetaSoundBuilderResult @[out] 
---@return TArray_FMetaSoundBuilderNodeInputHandle_
function UMetaSoundBuilderBase:FindNodeInputs(NodeHandle, OutResult) end

---Returns input's parent node if the input is valid, otherwise returns invalid node handle.
---@param InputHandle FMetaSoundBuilderNodeInputHandle
---@param OutResult EMetaSoundBuilderResult @[out] 
---@return FMetaSoundNodeHandle
function UMetaSoundBuilderBase:FindNodeInputParent(InputHandle, OutResult) end

---Returns node input by the given name if it exists, or an invalid handle if not found.
---@param NodeHandle FMetaSoundNodeHandle
---@param InputName string
---@param OutResult EMetaSoundBuilderResult @[out] 
---@return FMetaSoundBuilderNodeInputHandle
function UMetaSoundBuilderBase:FindNodeInputByName(NodeHandle, InputName, OutResult) end

---Returns output's parent node if the input is valid, otherwise returns invalid node handle.
---@param NodeHandle FMetaSoundNodeHandle
---@param OutResult EMetaSoundBuilderResult @[out] 
---@return FMetasoundFrontendVersion
function UMetaSoundBuilderBase:FindNodeClassVersion(NodeHandle, OutResult) end

---Returns output nodes associated with a given interface.
---@param InterfaceName string
---@param OutResult EMetaSoundBuilderResult @[out] 
---@return TArray_FMetaSoundNodeHandle_
function UMetaSoundBuilderBase:FindInterfaceOutputNodes(InterfaceName, OutResult) end

---Returns input nodes associated with a given interface.
---@param InterfaceName string
---@param OutResult EMetaSoundBuilderResult @[out] 
---@return TArray_FMetaSoundNodeHandle_
function UMetaSoundBuilderBase:FindInterfaceInputNodes(InterfaceName, OutResult) end

---Returns graph output node by the given name if it exists, or an invalid handle if not found.
---@param OutputName string
---@param OutDataType string @[out] 
---@param NodeInputHandle FMetaSoundBuilderNodeInputHandle @[out] 
---@param OutResult EMetaSoundBuilderResult @[out] 
---@return FMetaSoundNodeHandle
function UMetaSoundBuilderBase:FindGraphOutputNode(OutputName, OutDataType, NodeInputHandle, OutResult) end

---Returns graph input node by the given name if it exists, or an invalid handle if not found.
---@param InputName string
---@param OutDataType string @[out] 
---@param NodeOutputHandle FMetaSoundBuilderNodeOutputHandle @[out] 
---@param OutResult EMetaSoundBuilderResult @[out] 
---@return FMetaSoundNodeHandle
function UMetaSoundBuilderBase:FindGraphInputNode(InputName, OutDataType, NodeOutputHandle, OutResult) end

---Disconnects two nodes using defined MetaSound Interface Bindings registered with the MetaSound Interface registry. Returns success if
---all connections were found and removed, failed if any connections were not.
---@param FromNodeHandle FMetaSoundNodeHandle
---@param ToNodeHandle FMetaSoundNodeHandle
---@param OutResult EMetaSoundBuilderResult @[out] 
function UMetaSoundBuilderBase:DisconnectNodesByInterfaceBindings(FromNodeHandle, ToNodeHandle, OutResult) end

---Disconnects node output to a node input. Returns success if connection was removed, failed if not.
---@param NodeOutputHandle FMetaSoundBuilderNodeOutputHandle
---@param NodeInputHandle FMetaSoundBuilderNodeInputHandle
---@param OutResult EMetaSoundBuilderResult @[out] 
function UMetaSoundBuilderBase:DisconnectNodes(NodeOutputHandle, NodeInputHandle, OutResult) end

---Removes all connections from a given node output. Returns success if all connections were removed, failed if not.
---@param NodeOutputHandle FMetaSoundBuilderNodeOutputHandle
---@param OutResult EMetaSoundBuilderResult @[out] 
function UMetaSoundBuilderBase:DisconnectNodeOutput(NodeOutputHandle, OutResult) end

---Removes connection to a given node input. Returns success if connection was removed, failed if not.
---@param NodeInputHandle FMetaSoundBuilderNodeInputHandle
---@param OutResult EMetaSoundBuilderResult @[out] 
function UMetaSoundBuilderBase:DisconnectNodeInput(NodeInputHandle, OutResult) end

---Convert this builder to a MetaSound source preset with the given referenced source builder
---@param ReferencedNodeClass TScriptInterface_UMetaSoundDocumentInterface_
---@param OutResult EMetaSoundBuilderResult @[out] 
function UMetaSoundBuilderBase:ConvertToPreset(ReferencedNodeClass, OutResult) end

---Converts this preset to a fully accessible MetaSound; sets result to succeeded if it was converted successfully and failed if it was not.
---@param OutResult EMetaSoundBuilderResult @[out] 
function UMetaSoundBuilderBase:ConvertFromPreset(OutResult) end

---Returns whether node output exists.
---@param Output FMetaSoundBuilderNodeOutputHandle
---@return boolean
function UMetaSoundBuilderBase:ContainsNodeOutput(Output) end

---Returns whether node input exists.
---@param Input FMetaSoundBuilderNodeInputHandle
---@return boolean
function UMetaSoundBuilderBase:ContainsNodeInput(Input) end

---Returns whether node exists.
---@param Node FMetaSoundNodeHandle
---@return boolean
function UMetaSoundBuilderBase:ContainsNode(Node) end

---Connects two nodes using defined MetaSound Interface Bindings registered with the MetaSound Interface registry.
---@param FromNodeHandle FMetaSoundNodeHandle
---@param ToNodeHandle FMetaSoundNodeHandle
---@param OutResult EMetaSoundBuilderResult @[out] 
function UMetaSoundBuilderBase:ConnectNodesByInterfaceBindings(FromNodeHandle, ToNodeHandle, OutResult) end

---Connects node output to a node input. Does *NOT* provide loop detection for performance reasons.  Loop detection is checked on class registration when built or played.
---Returns succeeded if connection made, failed if connection already exists with input, the data types do not match, or the connection is not supported due to access type
---incompatibility (ex. constructor input to non-constructor input).
---@param NodeOutputHandle FMetaSoundBuilderNodeOutputHandle
---@param NodeInputHandle FMetaSoundBuilderNodeInputHandle
---@param OutResult EMetaSoundBuilderResult @[out] 
function UMetaSoundBuilderBase:ConnectNodes(NodeOutputHandle, NodeInputHandle, OutResult) end

---Connects a given node output to the graph output with the given name.
---@param GraphOutputName string
---@param NodeOutputHandle FMetaSoundBuilderNodeOutputHandle
---@param OutResult EMetaSoundBuilderResult @[out] 
function UMetaSoundBuilderBase:ConnectNodeOutputToGraphOutput(GraphOutputName, NodeOutputHandle, OutResult) end

---Connects a given node's outputs to all graph outputs for shared interfaces implemented on both the node's referenced class and the builder's MetaSound graph. Returns inputs of connected output nodes.
---@param NodeHandle FMetaSoundNodeHandle
---@param OutResult EMetaSoundBuilderResult @[out] 
---@return TArray_FMetaSoundBuilderNodeInputHandle_
function UMetaSoundBuilderBase:ConnectNodeOutputsToMatchingGraphInterfaceOutputs(NodeHandle, OutResult) end

---Connects a given node input to the graph input with the given name.
---@param GraphInputName string
---@param NodeInputHandle FMetaSoundBuilderNodeInputHandle
---@param OutResult EMetaSoundBuilderResult @[out] 
function UMetaSoundBuilderBase:ConnectNodeInputToGraphInput(GraphInputName, NodeInputHandle, OutResult) end

---Connects a given node's inputs to all graph inputs for shared interfaces implemented on both the node's referenced class and the builder's MetaSound graph. Returns outputs of connected input nodes.
---@param NodeHandle FMetaSoundNodeHandle
---@param OutResult EMetaSoundBuilderResult @[out] 
---@return TArray_FMetaSoundBuilderNodeOutputHandle_
function UMetaSoundBuilderBase:ConnectNodeInputsToMatchingGraphInterfaceInputs(NodeHandle, OutResult) end

---Builds a transient MetaSound with the provided builder options, copying the underlying MetaSound
---managed by this builder and registering it with the MetaSound Node Registry as a unique class. If
---existing MetaSound exists with the provided NameBase, will make object with unique name with the given
---NameBase as prefix.
---@param NameBase string
---@return TScriptInterface_UMetaSoundDocumentInterface_
function UMetaSoundBuilderBase:BuildNewMetaSound(NameBase) end

---Copies a transient MetaSound with the provided builder options, copying the underlying MetaSound
---managed by this builder and registering it with the MetaSound Node Registry as a unique name.
---If 'Force Unique Class Name' is true, registers MetaSound as a new class in the registry, potentially
---invalidating existing references in other MetaSounds. Not permissible to overwrite MetaSound asset,
---only transient MetaSound (see EditorSubsystem for overwriting assets at edit time).
---@param ExistingMetaSound TScriptInterface_UMetaSoundDocumentInterface_
---@param bForceUniqueClassName boolean @[opt] 
function UMetaSoundBuilderBase:BuildAndOverwriteMetaSound(ExistingMetaSound, bForceUniqueClassName) end

---@param Parent UObject
---@param Options FMetaSoundBuilderOptions
---@return TScriptInterface_UMetaSoundDocumentInterface_
function UMetaSoundBuilderBase:Build(Parent, Options) end

---Adds node referencing the highest native class version of the given class name to the document.
---Returns a node handle to the created node if successful, or an invalid handle if it failed.
---@param ClassName FMetasoundFrontendClassName
---@param OutResult EMetaSoundBuilderResult @[out] 
---@param MajorVersion integer @[opt] 
---@return FMetaSoundNodeHandle
function UMetaSoundBuilderBase:AddNodeByClassName(ClassName, OutResult, MajorVersion) end

---Adds a node to the graph using the provided MetaSound asset as its defining NodeClass.
---Returns a node handle to the created node if successful, or an invalid handle if it failed.
---@param NodeClass TScriptInterface_UMetaSoundDocumentInterface_
---@param OutResult EMetaSoundBuilderResult @[out] 
---@return FMetaSoundNodeHandle
function UMetaSoundBuilderBase:AddNode(NodeClass, OutResult) end

---Adds an interface registered with the given name to the graph, adding associated input and output nodes.
---@param InterfaceName string
---@param OutResult EMetaSoundBuilderResult @[out] 
function UMetaSoundBuilderBase:AddInterface(InterfaceName, OutResult) end

---Adds a graph variable node with the given name, DataType, and sets to default value.
---@param Name string
---@param OutResult EMetaSoundBuilderResult @[out] 
---@return FMetaSoundNodeHandle
function UMetaSoundBuilderBase:AddGraphVariableSetNode(Name, OutResult) end

---Adds a graph variable node with the given name, DataType, and sets to default value.
---@param Name string
---@param OutResult EMetaSoundBuilderResult @[out] 
---@return FMetaSoundNodeHandle
function UMetaSoundBuilderBase:AddGraphVariableGetNode(Name, OutResult) end

---Adds a graph variable node with the given name, DataType, and sets to default value.
---@param Name string
---@param OutResult EMetaSoundBuilderResult @[out] 
---@return FMetaSoundNodeHandle
function UMetaSoundBuilderBase:AddGraphVariableGetDelayedNode(Name, OutResult) end

---Adds a graph variable node with the given name, DataType, and sets to default value.
---@param Name string
---@param DataType string
---@param DefaultValue FMetasoundFrontendLiteral
---@param OutResult EMetaSoundBuilderResult @[out] 
function UMetaSoundBuilderBase:AddGraphVariable(Name, DataType, DefaultValue, OutResult) end

---Adds a graph output node with the given name, DataType, and sets output node's input to default value.
---Returns the new output node's input handle if it was successfully created, or an invalid handle if it failed.
---@param Name string
---@param DataType string
---@param DefaultValue FMetasoundFrontendLiteral
---@param OutResult EMetaSoundBuilderResult @[out] 
---@param bIsConstructorOutput boolean @[opt] 
---@return FMetaSoundBuilderNodeInputHandle
function UMetaSoundBuilderBase:AddGraphOutputNode(Name, DataType, DefaultValue, OutResult, bIsConstructorOutput) end

---Adds a graph input node with the given name, DataType, and sets the graph input to default value.
---Returns the new input node's output handle if it was successfully created, or an invalid handle if it failed.
---@param Name string
---@param DataType string
---@param DefaultValue FMetasoundFrontendLiteral
---@param OutResult EMetaSoundBuilderResult @[out] 
---@param bIsConstructorInput boolean @[opt] 
---@return FMetaSoundBuilderNodeOutputHandle
function UMetaSoundBuilderBase:AddGraphInputNode(Name, DataType, DefaultValue, OutResult, bIsConstructorInput) end

