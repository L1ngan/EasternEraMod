---Collection of Niagara parameters and their metadata, which is synced to all other assets in the project.
---This can be used to enforce consistent naming and default values for commonly used parameters.
---@class UNiagaraParameterDefinitions : UNiagaraParameterDefinitionsBase
---@field private bPromoteToTopInAddMenus boolean @If true then these parameters will appear as top level entry in add menus (e.g. in the module editor)
---@field private MenuSortOrder integer @Defines the sort order in add menus. Entries with smaller numbers are displayed first.
---@field private ScriptVariables TArray<UNiagaraScriptVariable>
---@field private ExternalParameterDefinitionsSubscriptions TArray<FParameterDefinitionsBindingNameSubscription>
local UNiagaraParameterDefinitions = {}

