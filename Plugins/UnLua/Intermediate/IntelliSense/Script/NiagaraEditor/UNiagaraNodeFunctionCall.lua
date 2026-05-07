---@class UNiagaraNodeFunctionCall : UNiagaraNodeWithDynamicPins
---@field public FunctionScript UNiagaraScript
---@field public SelectedScriptVersion FGuid
---@field public FunctionScriptAssetObjectPath string @A path to a script asset which can be used to assign the function script the first time that default pins are generated. This is used so that the function nodes can be populated in the graph context menu without having to load all of the actual script assets.
---@field public Signature FNiagaraFunctionSignature @Some functions can be provided a signature directly rather than a script.
---@field public FunctionSpecifiers TMap<string, string>
---@field public PropagatedStaticSwitchParameters TArray<FNiagaraPropagatedVariable> @All the input values the function propagates to the next higher caller instead of forcing the user to set them directly.
---@field public PreviousScriptVersion FGuid @Can be used by the ui after a version change to display change notes
---@field public PythonUpgradeScriptWarnings string @Can be used by the ui after a version change to display change notes
---@field public DebugState ENiagaraFunctionDebugState
---@field public bInheritDebugStatus boolean @Controls whether the debug state of the current function gets propagated into this function call.
---@field protected CachedChangeId FGuid @Adjusted every time that we compile this script. Lets us know that we might differ from any cached versions.
---@field protected InvalidScriptVersionReference FGuid @If a script version we reference goes away we select a fallback version, but save the original version to generate warnings.
---@field protected FunctionDisplayName string
---@field protected MessageStore FNiagaraMessageStore
---@field protected StackMessages TArray<FNiagaraStackMessage>
---@field protected BoundPinNames TMap<FGuid, string>
local UNiagaraNodeFunctionCall = {}

