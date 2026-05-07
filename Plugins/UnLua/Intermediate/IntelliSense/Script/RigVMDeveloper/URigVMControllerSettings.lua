---Default settings for the RigVM Controller
---@class URigVMControllerSettings : UObject
---@field public bAutoResolveTemplateNodesWhenLinkingExecute boolean @When adding a link to an execute pin on a template node, this functionality automatically resolves the template node to the most commonly used type.
---@field public TemplateDefaultTypes TMap<string, FRigVMController_CommonTypePerTemplate> @The commonly used types for a template node
local URigVMControllerSettings = {}

