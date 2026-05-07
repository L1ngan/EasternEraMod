---The Controller is the sole authority to perform changes
---on the Graph. The Controller itself is stateless.
---The Controller offers a Modified event to subscribe to
---for user interface views - so they can be informed about
---any change that's happening within the Graph.
---The Controller routes all changes through the Graph itself,
---so you can have N Controllers performing edits on 1 Graph,
---and N Views subscribing to 1 Controller.
---In Python you can also subscribe to this event to be
---able to react to topological changes of the Graph there.
---@class URigVMController : UObject
---@field private ModifiedEventDynamic MulticastDelegate
---@field private Graphs TArray<URigVMGraph>
---@field private SchemaClass TSubclassOf<URigVMSchema>
local URigVMController = {}

---Upgrades a set of nodes with each corresponding next known version
---@param InNodeNames TArray_string_
---@param bRecursive boolean @[opt] 
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return TArray_URigVMNode_
function URigVMController:UpgradeNodes(InNodeNames, bRecursive, bSetupUndoRedo, bPrintPythonCommand) end

---Turns a resolved templated node(s) back into its template.
---@param InNodeNames TArray_string_
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:UnresolveTemplateNodes(InNodeNames, bSetupUndoRedo, bPrintPythonCommand) end

---Un-does the last action on the stack.
---Note: This should really only be used for unit tests,
---use the GEditor's main Undo method instead.
---@return boolean
function URigVMController:Undo() end

---Removes the binging of a pin to a variable
---This causes a PinBoundVariableChanged modified event.
---@param InPinPath string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:UnbindPinFromVariable(InPinPath, bSetupUndoRedo, bPrintPythonCommand) end

---@param InFunctionReferenceNodeName string
---@param InNewFunctionIdentifier FRigVMGraphFunctionIdentifier
---@param bSetupOrphanPins boolean
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:SwapFunctionReferenceByName(InFunctionReferenceNodeName, InNewFunctionIdentifier, bSetupOrphanPins, bSetupUndoRedo, bPrintPythonCommand) end

---@param InFunctionReferenceNode URigVMFunctionReferenceNode
---@param InNewFunctionIdentifier FRigVMGraphFunctionIdentifier
---@param bSetupOrphanPins boolean
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:SwapFunctionReference(InFunctionReferenceNode, InNewFunctionIdentifier, bSetupOrphanPins, bSetupUndoRedo, bPrintPythonCommand) end

---@param InOldFunctionIdentifier FRigVMGraphFunctionIdentifier
---@param InNewFunctionIdentifier FRigVMGraphFunctionIdentifier
---@param bSetupOrphanPins boolean
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:SwapAllFunctionReferences(InOldFunctionIdentifier, InNewFunctionIdentifier, bSetupOrphanPins, bSetupUndoRedo, bPrintPythonCommand) end

---Resets the function's guid to a new one and splits it from the former variant set
---@param InFunctionName string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:SplitFunctionVariant(InFunctionName, bSetupUndoRedo, bPrintPythonCommand) end

---Adds a Function / Struct Node to the edited Graph.
---UnitNode represent a RIGVM_METHOD declaration on a USTRUCT.
---This causes a NodeAdded modified event.
---@param InNode URigVMUnitNode
---@param InDefaults string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:SetUnitNodeDefaults(InNode, InDefaults, bSetupUndoRedo, bPrintPythonCommand) end

---Sets the schema class on the controller
---@param InSchemaClass TSubclassOf_URigVMSchema_
function URigVMController:SetSchemaClass(InSchemaClass) end

---@param InSchema URigVMSchema
function URigVMController:SetSchema(InSchema) end

---Sets the remapped variable on a function reference node
---@param InFunctionRefNode URigVMFunctionReferenceNode
---@param InInnerVariableName string
---@param InOuterVariableName string
---@param bSetupUndoRedo boolean @[opt] 
---@return boolean
function URigVMController:SetRemappedVariable(InFunctionRefNode, InInnerVariableName, InOuterVariableName, bSetupUndoRedo) end

---Sets the pin to be watched (or not)
---This causes a PinWatchedChanged modified event.
---@param InPinPath string
---@param bIsWatched boolean
---@param bSetupUndoRedo boolean @[opt] 
---@return boolean
function URigVMController:SetPinIsWatched(InPinPath, bIsWatched, bSetupUndoRedo) end

---Changes a pin category's expansion state. The category is UI relevant only and used
---to order pins in the user interface of the node as well as on the details panel.
---@param InPinPath string
---@param InIndexInCategory integer
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:SetPinIndexInCategory(InPinPath, InIndexInCategory, bSetupUndoRedo, bPrintPythonCommand) end

---Sets the pin to be expanded or not
---This causes a PinExpansionChanged modified event.
---@param InPinPath string
---@param bIsExpanded boolean
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:SetPinExpansion(InPinPath, bIsExpanded, bSetupUndoRedo, bPrintPythonCommand) end

---Sets the pin display name. The display name is UI relevant only.
---@param InPinPath string
---@param InDisplayName string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:SetPinDisplayName(InPinPath, InDisplayName, bSetupUndoRedo, bPrintPythonCommand) end

---Sets the default value of a pin given its pinpath.
---This causes a PinDefaultValueChanged modified event.
---@param InPinPath string
---@param InDefaultValue string
---@param bResizeArrays boolean @[opt] 
---@param bSetupUndoRedo boolean @[opt] 
---@param bMergeUndoAction boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@param bSetValueOnLinkedPins boolean @[opt] 
---@return boolean
function URigVMController:SetPinDefaultValue(InPinPath, InDefaultValue, bResizeArrays, bSetupUndoRedo, bMergeUndoAction, bPrintPythonCommand, bSetValueOnLinkedPins) end

---Changes a pin category's index. The category is UI relevant only and used
---to order pins in the user interface of the node as well as on the details panel.
---@param InNodeName string
---@param InPinCategory string
---@param InNewIndex integer
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:SetPinCategoryIndex(InNodeName, InPinCategory, InNewIndex, bSetupUndoRedo, bPrintPythonCommand) end

---Changes a pin category's expansion state. The category is UI relevant only and used
---to order pins in the user interface of the node as well as on the details panel.
---@param InNodeName string
---@param InPinCategory string
---@param bIsExpanded boolean
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:SetPinCategoryExpansion(InNodeName, InPinCategory, bIsExpanded, bSetupUndoRedo, bPrintPythonCommand) end

---Sets the pin category. The category is UI relevant only and used
---to order pins in the user interface of the node as well as on the details panel.
---@param InPinPath string
---@param InCategory string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:SetPinCategory(InPinPath, InCategory, bSetupUndoRedo, bPrintPythonCommand) end

---Sets the raw node title of a node in the graph.
---Some nodes generate customs node titles that override this setting.
---@param InNodeName string
---@param InNodeTitle string
---@param bSetupUndoRedo boolean @[opt] 
---@param bMergeUndoAction boolean @[opt] 
---@return boolean
function URigVMController:SetNodeTitleByName(InNodeName, InNodeTitle, bSetupUndoRedo, bMergeUndoAction) end

---Sets the raw node title of a node in the graph.
---Some nodes generate customs node titles that override this setting.
---@param InNode URigVMNode
---@param InNodeTitle string
---@param bSetupUndoRedo boolean @[opt] 
---@param bMergeUndoAction boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:SetNodeTitle(InNode, InNodeTitle, bSetupUndoRedo, bMergeUndoAction, bPrintPythonCommand) end

---Sets the size of a node in the graph by name.
---This causes a NodeSizeChanged modified event.
---@param InNodeName string
---@param InSize FVector2D
---@param bSetupUndoRedo boolean @[opt] 
---@param bMergeUndoAction boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:SetNodeSizeByName(InNodeName, InSize, bSetupUndoRedo, bMergeUndoAction, bPrintPythonCommand) end

---Sets the size of a node in the graph.
---This causes a NodeSizeChanged modified event.
---@param InNode URigVMNode
---@param InSize FVector2D
---@param bSetupUndoRedo boolean @[opt] 
---@param bMergeUndoAction boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:SetNodeSize(InNode, InSize, bSetupUndoRedo, bMergeUndoAction, bPrintPythonCommand) end

---Selects the nodes given the selection
---This might cause several NodeDeselected modified event.
---@param InNodeNames TArray_string_
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:SetNodeSelection(InNodeNames, bSetupUndoRedo, bPrintPythonCommand) end

---Sets the position of a node in the graph by name.
---This causes a NodePositionChanged modified event.
---@param InNodeName string
---@param InPosition FVector2D
---@param bSetupUndoRedo boolean @[opt] 
---@param bMergeUndoAction boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:SetNodePositionByName(InNodeName, InPosition, bSetupUndoRedo, bMergeUndoAction, bPrintPythonCommand) end

---Sets the position of a node in the graph.
---This causes a NodePositionChanged modified event.
---@param InNode URigVMNode
---@param InPosition FVector2D
---@param bSetupUndoRedo boolean @[opt] 
---@param bMergeUndoAction boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:SetNodePosition(InNode, InPosition, bSetupUndoRedo, bMergeUndoAction, bPrintPythonCommand) end

---Applies a complete node layout to a node
---@param InNodeName string
---@param InLayout FRigVMNodeLayout
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:SetNodeLayout(InNodeName, InLayout, bSetupUndoRedo, bPrintPythonCommand) end

---Sets the keywords of a node in the graph.
---This causes a NodeKeywordsChanged modified event.
---@param InNodeName string
---@param InKeywords string
---@param bSetupUndoRedo boolean @[opt] 
---@param bMergeUndoAction boolean @[opt] 
---@return boolean
function URigVMController:SetNodeKeywordsByName(InNodeName, InKeywords, bSetupUndoRedo, bMergeUndoAction) end

---Sets the keywords of a node in the graph.
---This causes a NodeKeywordsChanged modified event.
---@param InNode URigVMCollapseNode
---@param InKeywords string
---@param bSetupUndoRedo boolean @[opt] 
---@param bMergeUndoAction boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:SetNodeKeywords(InNode, InKeywords, bSetupUndoRedo, bMergeUndoAction, bPrintPythonCommand) end

---Sets the keywords of a node in the graph.
---This causes a NodeDescriptionChanged modified event.
---@param InNodeName string
---@param InDescription string
---@param bSetupUndoRedo boolean @[opt] 
---@param bMergeUndoAction boolean @[opt] 
---@return boolean
function URigVMController:SetNodeDescriptionByName(InNodeName, InDescription, bSetupUndoRedo, bMergeUndoAction) end

---Sets the function description of a node in the graph.
---This causes a NodeDescriptionChanged modified event.
---@param InNode URigVMCollapseNode
---@param InDescription string
---@param bSetupUndoRedo boolean @[opt] 
---@param bMergeUndoAction boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:SetNodeDescription(InNode, InDescription, bSetupUndoRedo, bMergeUndoAction, bPrintPythonCommand) end

---Sets the color of a node in the graph by name.
---This causes a NodeColorChanged modified event.
---@param InNodeName string
---@param InColor FLinearColor
---@param bSetupUndoRedo boolean @[opt] 
---@param bMergeUndoAction boolean @[opt] 
---@return boolean
function URigVMController:SetNodeColorByName(InNodeName, InColor, bSetupUndoRedo, bMergeUndoAction) end

---Sets the color of a node in the graph.
---This causes a NodeColorChanged modified event.
---@param InNode URigVMNode
---@param InColor FLinearColor
---@param bSetupUndoRedo boolean @[opt] 
---@param bMergeUndoAction boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:SetNodeColor(InNode, InColor, bSetupUndoRedo, bMergeUndoAction, bPrintPythonCommand) end

---Sets the category of a node in the graph.
---This causes a NodeCategoryChanged modified event.
---@param InNodeName string
---@param InCategory string
---@param bSetupUndoRedo boolean @[opt] 
---@param bMergeUndoAction boolean @[opt] 
---@return boolean
function URigVMController:SetNodeCategoryByName(InNodeName, InCategory, bSetupUndoRedo, bMergeUndoAction) end

---Sets the category of a node in the graph.
---This causes a NodeCategoryChanged modified event.
---@param InNode URigVMCollapseNode
---@param InCategory string
---@param bSetupUndoRedo boolean @[opt] 
---@param bMergeUndoAction boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:SetNodeCategory(InNode, InCategory, bSetupUndoRedo, bMergeUndoAction, bPrintPythonCommand) end

---@param InVariableName string
---@param InCPPType string
---@param InCPPTypeObjectPath string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:SetLocalVariableTypeFromObjectPath(InVariableName, InCPPType, InCPPTypeObjectPath, bSetupUndoRedo, bPrintPythonCommand) end

---Sets the type of the local variable
---@param InVariableName string
---@param InCPPType string
---@param InCPPTypeObject UObject
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:SetLocalVariableType(InVariableName, InCPPType, InCPPTypeObject, bSetupUndoRedo, bPrintPythonCommand) end

---@param InVariableName string
---@param InDefaultValue string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:SetLocalVariableDefaultValue(InVariableName, InDefaultValue, bSetupUndoRedo, bPrintPythonCommand) end

---Helper function to disable a series of checks that can be ignored during a unit test
---@param bIsRunning boolean
function URigVMController:SetIsRunningUnitTest(bIsRunning) end

---Sets the currently edited Graph of this controller.
---This causes a GraphChanged modified event.
---@param InGraph URigVMGraph
function URigVMController:SetGraph(InGraph) end

---Sets the index for an exposed pin. This can be used to move the pin up and down on the node.
---@param InPinName string
---@param InNewIndex integer
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:SetExposedPinIndex(InPinName, InNewIndex, bSetupUndoRedo, bPrintPythonCommand) end

---Sets the comment text and properties of a comment node in the graph by name.
---This causes a CommentTextChanged modified event.
---@param InNodeName string
---@param InCommentText string
---@param InCommentFontSize integer
---@param bInCommentBubbleVisible boolean
---@param bInCommentColorBubble boolean
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:SetCommentTextByName(InNodeName, InCommentText, InCommentFontSize, bInCommentBubbleVisible, bInCommentColorBubble, bSetupUndoRedo, bPrintPythonCommand) end

---Sets the comment text and properties of a comment node in the graph.
---This causes a CommentTextChanged modified event.
---@param InNode URigVMNode
---@param InCommentText string
---@param InCommentFontSize integer
---@param bInCommentBubbleVisible boolean
---@param bInCommentColorBubble boolean
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:SetCommentText(InNode, InCommentText, InCommentFontSize, bInCommentBubbleVisible, bInCommentColorBubble, bSetupUndoRedo, bPrintPythonCommand) end

---Sets the size of the array pin
---This causes a PinArraySizeChanged modified event.
---@param InArrayPinPath string
---@param InSize integer
---@param InDefaultValue string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:SetArrayPinSize(InArrayPinPath, InSize, InDefaultValue, bSetupUndoRedo, bPrintPythonCommand) end

---@param InActionStack URigVMActionStack
function URigVMController:SetActionStack(InActionStack) end

---Selects a single node in the graph by name.
---This causes a NodeSelected / NodeDeselected modified event.
---@param InNodeName string
---@param bSelect boolean @[opt] 
---@param bSetupUndoRedo boolean @[opt] 
---@return boolean
function URigVMController:SelectNodeByName(InNodeName, bSelect, bSetupUndoRedo) end

---Selects a single node in the graph.
---This causes a NodeSelected / NodeDeselected modified event.
---@param InNode URigVMNode
---@param bSelect boolean @[opt] 
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:SelectNode(InNode, bSelect, bSetupUndoRedo, bPrintPythonCommand) end

---Resolves a wildcard pin on any node
---@param InPinPath string
---@param InCPPType string
---@param InCPPTypeObjectPath string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:ResolveWildCardPin(InPinPath, InCPPType, InCPPTypeObjectPath, bSetupUndoRedo, bPrintPythonCommand) end

---Resets the default value of a pin given its pinpath.
---This causes a PinDefaultValueChanged modified event.
---@param InPinPath string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:ResetPinDefaultValue(InPinPath, bSetupUndoRedo, bPrintPythonCommand) end

---Resets the default value of a list of pin given the pinpaths.
---@param InPinPaths TArray_string_
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:ResetDefaultValueForPins(InPinPaths, bSetupUndo, bPrintPythonCommand) end

---Resets the default value of all pins of a list of nodes
---@param InNodeNames TArray_string_
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:ResetDefaultValueForAllPinsOnNodes(InNodeNames, bSetupUndo, bPrintPythonCommand) end

---Resets the default value of all pins of a given node
---@param InNodeName string
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:ResetDefaultValueForAllPinsOnNode(InNodeName, bSetupUndo, bPrintPythonCommand) end

---Refreshes the variable node with the new data
---@param InNodeName string
---@param InVariableName string
---@param InCPPType string
---@param InCPPTypeObject UObject
---@param bSetupUndoRedo boolean
---@return URigVMVariableNode
function URigVMController:ReplaceParameterNodeWithVariable(InNodeName, InVariableName, InCPPType, InCPPTypeObject, bSetupUndoRedo) end

---Renames a variable in the graph.
---This causes a VariableRenamed modified event.
---@param InOldName string
---@param InNewName string
---@param bSetupUndoRedo boolean @[opt] 
---@return boolean
function URigVMController:RenameVariable(InOldName, InNewName, bSetupUndoRedo) end

---Renames a pin category. The category is UI relevant only and used
---to order pins in the user interface of the node as well as on the details panel.
---@param InNodeName string
---@param InOldPinCategory string
---@param InNewPinCategory string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:RenamePinCategory(InNodeName, InOldPinCategory, InNewPinCategory, bSetupUndoRedo, bPrintPythonCommand) end

---Renames a parameter in the graph.
---This causes a ParameterRenamed modified event.
---@param InOldName string
---@param InNewName string
---@param bSetupUndoRedo boolean @[opt] 
---@return boolean
function URigVMController:RenameParameter(InOldName, InNewName, bSetupUndoRedo) end

---Renames a node in the graph
---This causes a NodeRenamed modified event.
---@param InNode URigVMNode
---@param InNewName string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:RenameNode(InNode, InNewName, bSetupUndoRedo, bPrintPythonCommand) end

---Rename a local variable from the graph
---@param InVariableName string
---@param InNewVariableName string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:RenameLocalVariable(InVariableName, InNewVariableName, bSetupUndoRedo, bPrintPythonCommand) end

---Renames a function in the function library
---@param InOldFunctionName string
---@param InNewFunctionName string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:RenameFunction(InOldFunctionName, InNewFunctionName, bSetupUndoRedo, bPrintPythonCommand) end

---Renames an exposed pin in the graph controlled by this
---@param InOldPinName string
---@param InNewPinName string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:RenameExposedPin(InOldPinName, InNewPinName, bSetupUndoRedo, bPrintPythonCommand) end

---Removes a trait from a node
---@param InNodeName string
---@param InTraitName string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:RemoveTrait(InNodeName, InTraitName, bSetupUndoRedo, bPrintPythonCommand) end

---Adds a tag to a function variant
---@param InFunctionName string
---@param InTagName string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:RemoveTagFromFunctionVariant(InFunctionName, InTagName, bSetupUndoRedo, bPrintPythonCommand) end

---Removes a pin category. The category is UI relevant only and used
---to order pins in the user interface of the node as well as on the details panel.
---@param InNodeName string
---@param InPinCategory string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:RemovePinCategory(InNodeName, InPinCategory, bSetupUndoRedo, bPrintPythonCommand) end

---Removes a list of nodes from the graph given the names
---This causes a NodeRemoved modified event.
---@param InNodeNames TArray_string_
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:RemoveNodesByName(InNodeNames, bSetupUndoRedo, bPrintPythonCommand) end

---Removes a list of nodes from the graph
---This causes a NodeRemoved modified event.
---@param InNodes TArray_URigVMNode_
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:RemoveNodes(InNodes, bSetupUndoRedo, bPrintPythonCommand) end

---Removes a node from the graph given the node's name.
---This causes a NodeRemoved modified event.
---@param InNodeName string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:RemoveNodeByName(InNodeName, bSetupUndoRedo, bPrintPythonCommand) end

---Removes a node from the graph
---This causes a NodeRemoved modified event.
---@param InNode URigVMNode
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:RemoveNode(InNode, bSetupUndoRedo, bPrintPythonCommand) end

---Remove a local variable from the graph
---@param InVariableName string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:RemoveLocalVariable(InVariableName, bSetupUndoRedo, bPrintPythonCommand) end

---Removes an injected node
---This causes a NodeRemoved modified event.
---@param InPinPath string
---@param bAsInput boolean
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:RemoveInjectedNode(InPinPath, bAsInput, bSetupUndoRedo, bPrintPythonCommand) end

---Removes a function from a function library graph
---@param InFunctionName string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:RemoveFunctionFromLibrary(InFunctionName, bSetupUndoRedo, bPrintPythonCommand) end

---Removes an exposed pin from the graph controlled by this
---@param InPinName string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:RemoveExposedPin(InPinName, bSetupUndoRedo, bPrintPythonCommand) end

---Removes an array element pin from an array pin.
---This causes a PinArraySizeChanged modified event.
---@param InArrayElementPinPath string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:RemoveArrayPin(InArrayElementPinPath, bSetupUndoRedo, bPrintPythonCommand) end

---@param InPinPath string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:RemoveAggregatePin(InPinPath, bSetupUndoRedo, bPrintPythonCommand) end

---Refreshes the variable node with the new data
---@param InNodeName string
---@param InVariableName string
---@param InCPPType string
---@param InCPPTypeObject UObject
---@param bSetupUndoRedo boolean
---@param bSetupOrphanPins boolean @[opt] 
function URigVMController:RefreshVariableNode(InNodeName, InVariableName, InCPPType, InCPPTypeObject, bSetupUndoRedo, bSetupOrphanPins) end

---Re-does the last action on the stack.
---Note: This should really only be used for unit tests,
---use the GEditor's main Undo method instead.
---@return boolean
function URigVMController:Redo() end

---Pushes a new graph to the stack
---This causes a GraphChanged modified event.
---@param InGraph URigVMGraph
---@param bSetupUndoRedo boolean @[opt] 
---@return boolean
function URigVMController:PushGraph(InGraph, bSetupUndoRedo) end

---Promotes a pin to a variable
---@param InPinPath string
---@param bCreateVariableNode boolean
---@param InNodePosition FVector2D
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:PromotePinToVariable(InPinPath, bCreateVariableNode, InNodePosition, bSetupUndoRedo, bPrintPythonCommand) end

---Turns a collapse node into a function node
---@param InNodeName string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@param bRemoveFunctionDefinition boolean @[opt] 
---@return string
function URigVMController:PromoteFunctionReferenceNodeToCollapseNode(InNodeName, bSetupUndoRedo, bPrintPythonCommand, bRemoveFunctionDefinition) end

---Turns a collapse node into a function node
---@param InNodeName string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@param InExistingFunctionDefinitionPath string
---@return string
function URigVMController:PromoteCollapseNodeToFunctionReferenceNode(InNodeName, bSetupUndoRedo, bPrintPythonCommand, InExistingFunctionDefinitionPath) end

---Pops the last graph off the stack
---This causes a GraphChanged modified event.
---@param bSetupUndoRedo boolean @[opt] 
---@return URigVMGraph
function URigVMController:PopGraph(bSetupUndoRedo) end

---performs all actions representing the workflow
---@param InWorkflow FRigVMUserWorkflow
---@param InOptions URigVMUserWorkflowOptions
---@param bSetupUndoRedo boolean @[opt] 
---@return boolean
function URigVMController:PerformUserWorkflow(InWorkflow, InOptions, bSetupUndoRedo) end

---Opens an undo bracket / scoped transaction for
---a series of actions to be performed as one step on the
---Undo stack. This is primarily useful for Python.
---This causes a UndoBracketOpened modified event.
---@param InTitle string
---@return boolean
function URigVMController:OpenUndoBracket(InTitle) end

---Mark a function as public/private in the function library
---@param InFunctionName string
---@param bInIsPublic boolean
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:MarkFunctionAsPublic(InFunctionName, bInIsPublic, bSetupUndoRedo, bPrintPythonCommand) end

---Turns a binding to a variable node
---@param InPinPath string
---@param InNodePosition FVector2D
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:MakeVariableNodeFromBinding(InPinPath, InNodePosition, bSetupUndoRedo, bPrintPythonCommand) end

---creates the options struct for a given workflow
---@param InSubject UObject
---@param InWorkflow FRigVMUserWorkflow
---@return URigVMUserWorkflowOptions
function URigVMController:MakeOptionsForWorkflow(InSubject, InWorkflow) end

---Turns a variable node into one or more bindings
---@param InNodeName string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:MakeBindingsFromVariableNode(InNodeName, bSetupUndoRedo, bPrintPythonCommand) end

---Copies a series of function declaratioms into this graph's local function library
---@param InFunctionDefinitions TArray_FRigVMGraphFunctionIdentifier_
---@param bLocalizeDependentPrivateFunctions boolean @[opt] 
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return TMap_FRigVMGraphFunctionIdentifier__URigVMLibraryNode_
function URigVMController:LocalizeFunctions(InFunctionDefinitions, bLocalizeDependentPrivateFunctions, bSetupUndoRedo, bPrintPythonCommand) end

---Copies a function declaration into this graph's local function library
---@param InHostPath string
---@param InFunctionName string
---@param bLocalizeDependentPrivateFunctions boolean @[opt] 
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return URigVMLibraryNode
function URigVMController:LocalizeFunctionFromPath(InHostPath, InFunctionName, bLocalizeDependentPrivateFunctions, bSetupUndoRedo, bPrintPythonCommand) end

---@param InFunctionDefinition FRigVMGraphFunctionIdentifier
---@param bLocalizeDependentPrivateFunctions boolean @[opt] 
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return URigVMLibraryNode
function URigVMController:LocalizeFunction(InFunctionDefinition, bLocalizeDependentPrivateFunctions, bSetupUndoRedo, bPrintPythonCommand) end

---Merges the function's guid with a provided one to join the variant set
---@param InFunctionName string
---@param InGuid FGuid
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:JoinFunctionVariant(InFunctionName, InGuid, bSetupUndoRedo, bPrintPythonCommand) end

---Returns true if the controller is currently transacting
---@return boolean
function URigVMController:IsTransacting() end

---Returns true if reporting is enabled
---@return boolean
function URigVMController:IsReportingEnabled() end

---Returns true if a function is marked as public in the function library
---@param InFunctionName string
---@return boolean
function URigVMController:IsFunctionPublic(InFunctionName) end

---Inserts an array element pin into an array pin.
---This causes a PinArraySizeChanged modified event.
---@param InArrayPinPath string
---@param InIndex integer @[opt] 
---@param InDefaultValue string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return string
function URigVMController:InsertArrayPin(InArrayPinPath, InIndex, InDefaultValue, bSetupUndoRedo, bPrintPythonCommand) end

---Exports the given nodes as text
---@param InText string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommands boolean @[opt] 
---@return TArray_string_
function URigVMController:ImportNodesFromText(InText, bSetupUndoRedo, bPrintPythonCommands) end

---Returns all supported unit structs for a given template notation
---@param InNotation string
---@return TArray_UScriptStruct_
function URigVMController.GetUnitStructsForTemplate(InNotation) end

---Returns the top level graph
---@return URigVMGraph
function URigVMController:GetTopLevelGraph() end

---Returns the template for a given function (or an empty string)
---@param InFunction UScriptStruct
---@param InMethodName string @[opt] 
---@return string
function URigVMController.GetTemplateForUnitStruct(InFunction, InMethodName) end

---Returns the schema used by this controller
---@return URigVMSchema
function URigVMController:GetSchema() end

---Returns all registered unit structs
---@return TArray_UScriptStruct_
function URigVMController.GetRegisteredUnitStructs() end

---Returns all registered template notations
---@return TArray_string_
function URigVMController.GetRegisteredTemplates() end

---Returns the default value of a pin given its pinpath.
---@param InPinPath string
---@return string
function URigVMController:GetPinDefaultValue(InPinPath) end

---Returns the currently edited Graph of this controller.
---@return URigVMGraph
function URigVMController:GetGraph() end

---Returns another controller for a given graph
---@param InGraph URigVMGraph
---@return URigVMController
function URigVMController:GetControllerForGraph(InGraph) end

---@return URigVMActionStack
function URigVMController:GetActionStack() end

---@return TArray_string_
function URigVMController:GeneratePythonCommands() end

---Returns all variant refs related to the given function
---@param InFunctionName string
---@return TArray_FRigVMVariantRef_
function URigVMController:FindVariantsOfFunction(InFunctionName) end

---@param InHostPath string
---@param InFunctionName string
---@return FRigVMGraphFunctionIdentifier
function URigVMController:FindGraphFunctionIdentifier(InHostPath, InFunctionName) end

---@param InHostPath string
---@param InFunctionName string
---@return FRigVMGraphFunctionHeader
function URigVMController:FindGraphFunctionHeaderByName(InHostPath, InFunctionName) end

---@param InFunctionIdentifier FRigVMGraphFunctionIdentifier
---@return FRigVMGraphFunctionHeader
function URigVMController:FindGraphFunctionHeader(InFunctionIdentifier) end

---Exports the selected nodes as text
---@param bIncludeExteriorLinks boolean @[opt] 
---@return string
function URigVMController:ExportSelectedNodesToText(bIncludeExteriorLinks) end

---Exports the given node as text
---@param InNode URigVMNode
---@param bIncludeExteriorLinks boolean @[opt] 
---@return string
function URigVMController:ExportNodeToText(InNode, bIncludeExteriorLinks) end

---Exports the given nodes as text
---@param InNodeNames TArray_string_
---@param bIncludeExteriorLinks boolean @[opt] 
---@return string
function URigVMController:ExportNodesToText(InNodeNames, bIncludeExteriorLinks) end

---Turns a library node into its contained nodes
---@param InNodeName string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return TArray_URigVMNode_
function URigVMController:ExpandLibraryNode(InNodeName, bSetupUndoRedo, bPrintPythonCommand) end

---Enables or disables the error reporting of this Controller.
---@param bEnabled boolean @[opt] 
function URigVMController:EnableReporting(bEnabled) end

---Ejects the last injected node on a pin
---@param InPinPath string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return URigVMNode
function URigVMController:EjectNodeFromPin(InPinPath, bSetupUndoRedo, bPrintPythonCommand) end

---Duplicates an array element pin.
---This causes a PinArraySizeChanged modified event.
---@param InArrayElementPinPath string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return string
function URigVMController:DuplicateArrayPin(InArrayElementPinPath, bSetupUndoRedo, bPrintPythonCommand) end

---Creates a variant of a function given the name of an existing function variant
---@param InFunctionName string
---@param InVariantName string @[opt] 
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return URigVMLibraryNode
function URigVMController:CreateFunctionVariant(InFunctionName, InVariantName, bSetupUndoRedo, bPrintPythonCommand) end

---Turns a series of nodes into a Collapse node
---@param InNodeNames TArray_string_
---@param InCollapseNodeName string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@param bIsAggregate boolean @[opt] 
---@return URigVMCollapseNode
function URigVMController:CollapseNodes(InNodeNames, InCollapseNodeName, bSetupUndoRedo, bPrintPythonCommand, bIsAggregate) end

---Closes an undo bracket / scoped transaction.
---This is primarily useful for Python.
---This causes a UndoBracketClosed modified event.
---@return boolean
function URigVMController:CloseUndoBracket() end

---Clears the pin category. The category is UI relevant only and used
---to order pins in the user interface of the node as well as on the details panel.
---@param InPinPath string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:ClearPinCategory(InPinPath, bSetupUndoRedo, bPrintPythonCommand) end

---Clears the overrides on a given list of pin paths
---@param InPinPaths TArray_string_
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:ClearOverrideOnPins(InPinPaths, bSetupUndo, bPrintPythonCommand) end

---Clears an override on a given pin path
---@param InPinPath string
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:ClearOverrideOnPin(InPinPath, bSetupUndo, bPrintPythonCommand) end

---Clears the overrides for all pins of a list of nodes
---@param InNodeNames TArray_string_
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:ClearOverrideOnAllPinsOnNodes(InNodeNames, bSetupUndo, bPrintPythonCommand) end

---Clears the overrides for all pins on a node
---@param InNodeName string
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:ClearOverrideOnAllPinsOnNode(InNodeName, bSetupUndo, bPrintPythonCommand) end

---Deselects all currently selected nodes in the graph.
---This might cause several NodeDeselected modified event.
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:ClearNodeSelection(bSetupUndoRedo, bPrintPythonCommand) end

---Removes any layout information from a node
---@param InNodeName string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:ClearNodeLayout(InNodeName, bSetupUndoRedo, bPrintPythonCommand) end

---Removes all (but one) array element pin from an array pin.
---This causes a PinArraySizeChanged modified event.
---@param InArrayPinPath string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:ClearArrayPin(InArrayPinPath, bSetupUndoRedo, bPrintPythonCommand) end

---Changes the type of an exposed pin in the graph controlled by this
---@param InPinName string
---@param InCPPType string
---@param InCPPTypeObjectPath string
---@param bSetupUndoRedo boolean @[out] 
---@param bSetupOrphanPins boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:ChangeExposedPinType(InPinName, InCPPType, InCPPTypeObjectPath, bSetupUndoRedo, bSetupOrphanPins, bPrintPythonCommand) end

---Exports the given nodes as text
---@param InText string
---@return boolean
function URigVMController:CanImportNodesFromText(InText) end

---Cancels an undo bracket / scoped transaction.
---This is primarily useful for Python.
---This causes a UndoBracketCanceled modified event.
---@return boolean
function URigVMController:CancelUndoBracket() end

---Removes a link from the graph.
---This causes a LinkRemoved modified event.
---@param InOutputPinPath string
---@param InInputPinPath string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:BreakLink(InOutputPinPath, InInputPinPath, bSetupUndoRedo, bPrintPythonCommand) end

---Removes all links on a given pin from the graph.
---This might cause multiple LinkRemoved modified event.
---@param InPinPath string
---@param bAsInput boolean @[opt] 
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:BreakAllLinks(InPinPath, bAsInput, bSetupUndoRedo, bPrintPythonCommand) end

---Binds a pin to a variable (or removes the binding given NAME_None)
---This causes a PinBoundVariableChanged modified event.
---@param InPinPath string
---@param InNewBoundVariablePath string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:BindPinToVariable(InPinPath, InNewBoundVariablePath, bSetupUndoRedo, bPrintPythonCommand) end

---Adds a Variable Node to the edited Graph given a struct object path name.
---Variables represent local work state for the function and
---can be read from (bIsGetter == true) or written to (bIsGetter == false).
---This causes a NodeAdded modified event.
---@param InVariableName string
---@param InCPPType string
---@param InCPPTypeObjectPath string
---@param bIsGetter boolean
---@param InDefaultValue string
---@param InPosition FVector2D
---@param InNodeName string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return URigVMVariableNode
function URigVMController:AddVariableNodeFromObjectPath(InVariableName, InCPPType, InCPPTypeObjectPath, bIsGetter, InDefaultValue, InPosition, InNodeName, bSetupUndoRedo, bPrintPythonCommand) end

---Adds a Variable Node to the edited Graph.
---Variables represent local work state for the function and
---can be read from and written to.
---This causes a NodeAdded modified event.
---@param InVariableName string
---@param InCPPType string
---@param InCPPTypeObject UObject
---@param bIsGetter boolean
---@param InDefaultValue string
---@param InPosition FVector2D
---@param InNodeName string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return URigVMVariableNode
function URigVMController:AddVariableNode(InVariableName, InCPPType, InCPPTypeObject, bIsGetter, InDefaultValue, InPosition, InNodeName, bSetupUndoRedo, bPrintPythonCommand) end

---Adds a Function / Struct Node to the edited Graph.
---UnitNode represent a RIGVM_METHOD declaration on a USTRUCT.
---This causes a NodeAdded modified event.
---@param InScriptStruct UScriptStruct
---@param InDefaults string
---@param InMethodName string @[opt] 
---@param InPosition FVector2D
---@param InNodeName string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return URigVMUnitNode
function URigVMController:AddUnitNodeWithDefaults(InScriptStruct, InDefaults, InMethodName, InPosition, InNodeName, bSetupUndoRedo, bPrintPythonCommand) end

---Adds a Function / Struct Node to the edited Graph given its struct object path name.
---UnitNode represent a RIGVM_METHOD declaration on a USTRUCT.
---This causes a NodeAdded modified event.
---@param InScriptStructPath string
---@param InMethodName string @[opt] 
---@param InPosition FVector2D
---@param InNodeName string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return URigVMUnitNode
function URigVMController:AddUnitNodeFromStructPath(InScriptStructPath, InMethodName, InPosition, InNodeName, bSetupUndoRedo, bPrintPythonCommand) end

---Adds a Function / Struct Node to the edited Graph.
---UnitNode represent a RIGVM_METHOD declaration on a USTRUCT.
---This causes a NodeAdded modified event.
---@param InScriptStruct UScriptStruct
---@param InMethodName string @[opt] 
---@param InPosition FVector2D
---@param InNodeName string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return URigVMUnitNode
function URigVMController:AddUnitNode(InScriptStruct, InMethodName, InPosition, InNodeName, bSetupUndoRedo, bPrintPythonCommand) end

---Adds a trait to a node
---@param InNodeName string
---@param InTraitTypeObjectPath string
---@param InTraitName string @[opt] 
---@param InDefaultValue string
---@param InPinIndex integer @[opt] 
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return string
function URigVMController:AddTrait(InNodeName, InTraitTypeObjectPath, InTraitName, InDefaultValue, InPinIndex, bSetupUndoRedo, bPrintPythonCommand) end

---Adds a template node to the graph.
---@param InNotation string
---@param InPosition FVector2D
---@param InNodeName string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return URigVMTemplateNode
function URigVMController:AddTemplateNode(InNotation, InPosition, InNodeName, bSetupUndoRedo, bPrintPythonCommand) end

---Adds a tag to a function variant
---@param InFunctionName string
---@param InTag FRigVMTag
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:AddTagToFunctionVariant(InFunctionName, InTag, bSetupUndoRedo, bPrintPythonCommand) end

---@param InScriptStruct UScriptStruct
---@param InPosition FVector2D
---@param InNodeName string
---@param bSetupUndoRedo boolean @[opt] 
---@return URigVMNode
function URigVMController:AddSelectNodeFromStruct(InScriptStruct, InPosition, InNodeName, bSetupUndoRedo) end

---Adds a select node to the graph.
---Select nodes can be used to pick between multiple values based on an index.
---@param InCPPType string
---@param InCPPTypeObjectPath string
---@param InPosition FVector2D
---@param InNodeName string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return URigVMNode
function URigVMController:AddSelectNode(InCPPType, InCPPTypeObjectPath, InPosition, InNodeName, bSetupUndoRedo, bPrintPythonCommand) end

---Adds a Reroute Node on an existing Pin to the editor Graph.
---Reroute Nodes can be used to visually improve the data flow,
---they don't require any additional memory though and are purely
---cosmetic. This causes a NodeAdded modified event.
---@param InPinPath string
---@param bAsInput boolean
---@param InPosition FVector2D
---@param InNodeName string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return URigVMRerouteNode
function URigVMController:AddRerouteNodeOnPin(InPinPath, bAsInput, InPosition, InNodeName, bSetupUndoRedo, bPrintPythonCommand) end

---Adds a Reroute Node on an existing Link to the edited Graph given the Link's string representation.
---Reroute Nodes can be used to visually improve the data flow,
---they don't require any additional memory though and are purely
---cosmetic. This causes a NodeAdded modified event.
---@param InLinkPinPathRepresentation string
---@param InPosition FVector2D
---@param InNodeName string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return URigVMRerouteNode
function URigVMController:AddRerouteNodeOnLinkPath(InLinkPinPathRepresentation, InPosition, InNodeName, bSetupUndoRedo, bPrintPythonCommand) end

---Adds a Reroute Node on an existing Link to the edited Graph.
---Reroute Nodes can be used to visually improve the data flow,
---they don't require any additional memory though and are purely
---cosmetic. This causes a NodeAdded modified event.
---@param InLink URigVMLink
---@param InPosition FVector2D
---@param InNodeName string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return URigVMRerouteNode
function URigVMController:AddRerouteNodeOnLink(InLink, InPosition, InNodeName, bSetupUndoRedo, bPrintPythonCommand) end

---Adds a Parameter Node to the edited Graph given a struct object path name.
---Parameters represent input or output arguments to the Graph / Function.
---Input Parameters are constant values / literals.
---This causes a NodeAdded modified event.
---@param InParameterName string
---@param InCPPType string
---@param InCPPTypeObjectPath string
---@param bIsInput boolean
---@param InDefaultValue string
---@param InPosition FVector2D
---@param InNodeName string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return URigVMParameterNode
function URigVMController:AddParameterNodeFromObjectPath(InParameterName, InCPPType, InCPPTypeObjectPath, bIsInput, InDefaultValue, InPosition, InNodeName, bSetupUndoRedo, bPrintPythonCommand) end

---Adds a Parameter Node to the edited Graph.
---Parameters represent input or output arguments to the Graph / Function.
---Input Parameters are constant values / literals.
---This causes a NodeAdded modified event.
---@param InParameterName string
---@param InCPPType string
---@param InCPPTypeObject UObject
---@param bIsInput boolean
---@param InDefaultValue string
---@param InPosition FVector2D
---@param InNodeName string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return URigVMParameterNode
function URigVMController:AddParameterNode(InParameterName, InCPPType, InCPPTypeObject, bIsInput, InDefaultValue, InPosition, InNodeName, bSetupUndoRedo, bPrintPythonCommand) end

---Adds an override to a given list of pin paths
---@param InPinPaths TArray_string_
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:AddOverrideToPins(InPinPaths, bSetupUndo, bPrintPythonCommand) end

---Adds an override to the given pin path
---@param InPinPath string
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:AddOverrideToPin(InPinPath, bSetupUndo, bPrintPythonCommand) end

---Adds an override to all pins on a list of nodes
---@param InNodeNames TArray_string_
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:AddOverrideToAllPinsOnNodes(InNodeNames, bSetupUndo, bPrintPythonCommand) end

---Adds an override to all pins on a node
---@param InNodeName string
---@param bSetupUndo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:AddOverrideToAllPinsOnNode(InNodeName, bSetupUndo, bPrintPythonCommand) end

---Add a local variable to the graph given a struct object path name.
---@param InVariableName string
---@param InCPPType string
---@param InCPPTypeObjectPath string
---@param InDefaultValue string
---@param bSetupUndoRedo boolean @[opt] 
---@return FRigVMGraphVariableDescription
function URigVMController:AddLocalVariableFromObjectPath(InVariableName, InCPPType, InCPPTypeObjectPath, InDefaultValue, bSetupUndoRedo) end

---Add a local variable to the graph
---@param InVariableName string
---@param InCPPType string
---@param InCPPTypeObject UObject
---@param InDefaultValue string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return FRigVMGraphVariableDescription
function URigVMController:AddLocalVariable(InVariableName, InCPPType, InCPPTypeObject, InDefaultValue, bSetupUndoRedo, bPrintPythonCommand) end

---Adds a link to the graph.
---This causes a LinkAdded modified event.
---@param InOutputPinPath string
---@param InInputPinPath string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@param InUserDirection ERigVMPinDirection @[opt] 
---@param bCreateCastNode boolean @[opt] 
---@return boolean
function URigVMController:AddLink(InOutputPinPath, InInputPinPath, bSetupUndoRedo, bPrintPythonCommand, InUserDirection, bCreateCastNode) end

---Adds an entry invocation node
---This causes a NodeAdded modified event.
---@param InEntryName string
---@param InPosition FVector2D
---@param InNodeName string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return URigVMInvokeEntryNode
function URigVMController:AddInvokeEntryNode(InEntryName, InPosition, InNodeName, bSetupUndoRedo, bPrintPythonCommand) end

---Adds a Function / Struct Node to the edited Graph as an injected node
---UnitNode represent a RIGVM_METHOD declaration on a USTRUCT.
---This causes a NodeAdded modified event.
---@param InPinPath string
---@param bAsInput boolean
---@param InScriptStructPath string
---@param InMethodName string
---@param InInputPinName string
---@param InOutputPinName string
---@param InNodeName string
---@param bSetupUndoRedo boolean @[opt] 
---@return URigVMInjectionInfo
function URigVMController:AddInjectedNodeFromStructPath(InPinPath, bAsInput, InScriptStructPath, InMethodName, InInputPinName, InOutputPinName, InNodeName, bSetupUndoRedo) end

---Adds a Function / Struct Node to the edited Graph as an injected node
---UnitNode represent a RIGVM_METHOD declaration on a USTRUCT.
---This causes a NodeAdded modified event.
---@param InPinPath string
---@param bAsInput boolean
---@param InScriptStruct UScriptStruct
---@param InMethodName string
---@param InInputPinName string
---@param InOutputPinName string
---@param InNodeName string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return URigVMInjectionInfo
function URigVMController:AddInjectedNode(InPinPath, bAsInput, InScriptStruct, InMethodName, InInputPinName, InOutputPinName, InNodeName, bSetupUndoRedo, bPrintPythonCommand) end

---@param InScriptStruct UScriptStruct
---@param InPosition FVector2D
---@param InNodeName string
---@param bSetupUndoRedo boolean @[opt] 
---@return URigVMNode
function URigVMController:AddIfNodeFromStruct(InScriptStruct, InPosition, InNodeName, bSetupUndoRedo) end

---Adds an if node to the graph.
---If nodes can be used to pick between two values based on a condition.
---@param InCPPType string
---@param InCPPTypeObjectPath string
---@param InPosition FVector2D
---@param InNodeName string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return URigVMNode
function URigVMController:AddIfNode(InCPPType, InCPPTypeObjectPath, InPosition, InNodeName, bSetupUndoRedo, bPrintPythonCommand) end

---Adds a function definition to a function library graph
---@param InFunctionName string
---@param bMutable boolean
---@param InNodePosition FVector2D
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return URigVMLibraryNode
function URigVMController:AddFunctionToLibrary(InFunctionName, bMutable, InNodePosition, bSetupUndoRedo, bPrintPythonCommand) end

---Adds a function reference / invocation to the graph
---@param InFunctionDefinition FRigVMGraphFunctionHeader
---@param InNodePosition FVector2D
---@param InNodeName string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return URigVMFunctionReferenceNode
function URigVMController:AddFunctionReferenceNodeFromDescription(InFunctionDefinition, InNodePosition, InNodeName, bSetupUndoRedo, bPrintPythonCommand) end

---@param InFunctionDefinition URigVMLibraryNode
---@param InNodePosition FVector2D
---@param InNodeName string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return URigVMFunctionReferenceNode
function URigVMController:AddFunctionReferenceNode(InFunctionDefinition, InNodePosition, InNodeName, bSetupUndoRedo, bPrintPythonCommand) end

---Adds a free Reroute Node
---@param InCPPType string
---@param InCPPTypeObjectPath string
---@param bIsConstant boolean
---@param InCustomWidgetName string
---@param InDefaultValue string
---@param InPosition FVector2D
---@param InNodeName string
---@param bSetupUndoRedo boolean @[opt] 
---@return URigVMRerouteNode
function URigVMController:AddFreeRerouteNode(InCPPType, InCPPTypeObjectPath, bIsConstant, InCustomWidgetName, InDefaultValue, InPosition, InNodeName, bSetupUndoRedo) end

---@param InHostPath string
---@param InFunctionName string
---@param InNodePosition FVector2D
---@param InNodeName string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return URigVMFunctionReferenceNode
function URigVMController:AddExternalFunctionReferenceNode(InHostPath, InFunctionName, InNodePosition, InNodeName, bSetupUndoRedo, bPrintPythonCommand) end

---Adds an exposed pin to the graph controlled by this
---@param InPinName string
---@param InDirection ERigVMPinDirection
---@param InCPPType string
---@param InCPPTypeObjectPath string
---@param InDefaultValue string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return string
function URigVMController:AddExposedPin(InPinName, InDirection, InCPPType, InCPPTypeObjectPath, InDefaultValue, bSetupUndoRedo, bPrintPythonCommand) end

---Adds an enum node to the graph
---Enum nodes can be used to represent constant enum values within the graph
---@param InCPPTypeObjectPath string
---@param InPosition FVector2D
---@param InNodeName string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return URigVMEnumNode
function URigVMController:AddEnumNode(InCPPTypeObjectPath, InPosition, InNodeName, bSetupUndoRedo, bPrintPythonCommand) end

---Adds a new pin category. The category is UI relevant only and used
---to order pins in the user interface of the node as well as on the details panel.
---@param InNodeName string
---@param InCategory string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:AddEmptyPinCategory(InNodeName, InCategory, bSetupUndoRedo, bPrintPythonCommand) end

---Adds a default tag to a function variant
---@param InFunctionName string
---@param InTagName string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return boolean
function URigVMController:AddDefaultTagToFunctionVariant(InFunctionName, InTagName, bSetupUndoRedo, bPrintPythonCommand) end

---Adds a Comment Node to the edited Graph.
---Comments can be used to annotate the Graph.
---This causes a NodeAdded modified event.
---@param InCommentText string
---@param InPosition FVector2D
---@param InSize FVector2D @[opt] 
---@param InColor FLinearColor @[opt] 
---@param InNodeName string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return URigVMCommentNode
function URigVMController:AddCommentNode(InCommentText, InPosition, InSize, InColor, InNodeName, bSetupUndoRedo, bPrintPythonCommand) end

---Adds a branch node to the graph.
---Branch nodes can be used to split the execution of into multiple branches,
---allowing to drive behavior by logic.
---@param InPosition FVector2D
---@param InNodeName string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return URigVMNode
function URigVMController:AddBranchNode(InPosition, InNodeName, bSetupUndoRedo, bPrintPythonCommand) end

---Adds an array element pin to the end of an array pin.
---This causes a PinArraySizeChanged modified event.
---@param InArrayPinPath string
---@param InDefaultValue string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return string
function URigVMController:AddArrayPin(InArrayPinPath, InDefaultValue, bSetupUndoRedo, bPrintPythonCommand) end

---Adds a Array Node to the edited Graph given a struct object path name.
---This causes a NodeAdded modified event.
---@param InOpCode ERigVMOpCode
---@param InCPPType string
---@param InCPPTypeObjectPath string
---@param InPosition FVector2D
---@param InNodeName string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@param bIsPatching boolean @[opt] 
---@return URigVMNode
function URigVMController:AddArrayNodeFromObjectPath(InOpCode, InCPPType, InCPPTypeObjectPath, InPosition, InNodeName, bSetupUndoRedo, bPrintPythonCommand, bIsPatching) end

---Adds a Array Node to the edited Graph.
---This causes a NodeAdded modified event.
---@param InOpCode ERigVMOpCode
---@param InCPPType string
---@param InCPPTypeObject UObject
---@param InPosition FVector2D
---@param InNodeName string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@param bIsPatching boolean @[opt] 
---@return URigVMNode
function URigVMController:AddArrayNode(InOpCode, InCPPType, InCPPTypeObject, InPosition, InNodeName, bSetupUndoRedo, bPrintPythonCommand, bIsPatching) end

---@param InNodeName string
---@param InPinName string
---@param InDefaultValue string
---@param bSetupUndoRedo boolean @[opt] 
---@param bPrintPythonCommand boolean @[opt] 
---@return string
function URigVMController:AddAggregatePin(InNodeName, InPinName, InDefaultValue, bSetupUndoRedo, bPrintPythonCommand) end

