---UEditorInteractiveToolsContext is an extension/adapter of an InteractiveToolsContext designed
---for use in the UE Editor. Currently this implementation assumes that it is created by a
---Mode Manager (FEditorModeTools), and that the Mode Manager will call various API functions
---like Render() and Tick() when necessary.
---allows it to be easily embedded inside an FEdMode. A set of functions are provided which can be
---called from the FEdMode functions of the same name. These will handle the data type
---conversions and forwarding calls necessary to operate the ToolsContext
---@class UEditorInteractiveToolsContext : UInteractiveToolsContext
---@field public StandardVertexColorMaterial UMaterialInterface
local UEditorInteractiveToolsContext = {}

