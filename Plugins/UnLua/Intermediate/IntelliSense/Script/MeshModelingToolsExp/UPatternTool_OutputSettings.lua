---Output Settings for the Pattern Tool
---@class UPatternTool_OutputSettings : UInteractiveToolPropertySet
---@field public bSeparateActors boolean @Emit a separate Actor for each pattern element
---@field public bConvertToDynamic boolean @Emit StaticMesh pattern elements as DynamicMeshes
---@field public bCreateISMCs boolean @Create InstancedStaticMeshComponents instead multiple StaticMeshComponents, for StaticMesh pattern elements
---@field public bHaveStaticMeshes boolean @internal, used to control state of Instance settings
---@field public bEnableCreateISMCs boolean @internal, used to disable the creation of ISMCs
local UPatternTool_OutputSettings = {}

