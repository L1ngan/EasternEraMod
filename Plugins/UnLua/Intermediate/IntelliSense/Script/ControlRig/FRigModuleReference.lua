---@class FRigModuleReference
---@field public Name string
---@field public ParentModuleName string
---@field public Class TSoftClassPtr<UControlRig>
---@field public ConfigOverrides FControlRigOverrideContainer
---@field public Bindings TMap<string, string>
---@field public PreviousName string @ExternalVariableName (current module) -> SourceExternalVariableNamespacedPath (root rig or other module)
---@field public PreviousParentName string
local FRigModuleReference = {}
