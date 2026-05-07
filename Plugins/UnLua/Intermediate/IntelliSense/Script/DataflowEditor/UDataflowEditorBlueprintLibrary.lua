---@class UDataflowEditorBlueprintLibrary : UBlueprintFunctionLibrary
local UDataflowEditorBlueprintLibrary = {}

---@param Dataflow UDataflow
---@param NodeName string
---@param PropertyName string
---@param Propertyvalue string
---@return boolean
function UDataflowEditorBlueprintLibrary.SetDataflowNodeProperty(Dataflow, NodeName, PropertyName, Propertyvalue) end

---Connect the output oif a node to the input of another
---@param Dataflow UDataflow
---@param FromNodeName string
---@param OutputName string
---@param ToNodeName string
---@param InputName string
---@return boolean
function UDataflowEditorBlueprintLibrary.ConnectDataflowNodes(Dataflow, FromNodeName, OutputName, ToNodeName, InputName) end

---Add a specific node , return the node name
---@param Dataflow UDataflow
---@param NodeTypeName string
---@param BaseName string
---@param Location FVector2D
---@return string
function UDataflowEditorBlueprintLibrary.AddDataflowNode(Dataflow, NodeTypeName, BaseName, Location) end

---@param Dataflow UDataflow
---@param ClipboardContent string
---@param Location FVector2D
---@return boolean
function UDataflowEditorBlueprintLibrary.AddDataflowFromClipboardContent(Dataflow, ClipboardContent, Location) end

