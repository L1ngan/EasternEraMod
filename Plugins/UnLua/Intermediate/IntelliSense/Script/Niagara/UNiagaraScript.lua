---Scripts are function graphs that define the runtime execution for a Niagara system (similar to a Blueprint).
---There are three types of scripts:
---1) Module: can be added as a standalone part to the emitter stack and encapsulates a single behavior, for example "Add Velocity"
---2) Dynamic input: has a single output value and can be added to any input in the stack to compute such a value, for example "Random Vector"
---3) Function: usually reserved for helper functions; can only be called from within modules or dynamic inputs
---@class UNiagaraScript : UNiagaraScriptBase
---@field public ValidationRules TArray<UNiagaraValidationRule> @A set of rules to apply when this script is used in the stack. To create your own rules, write a custom class that extends UNiagaraValidationRule.
---@field public Usage ENiagaraScriptUsage @how this script is to be used. cannot be private due to use of GET_MEMBER_NAME_CHECKED
---@field private UsageId FGuid @Specifies a unique id for use when there are multiple scripts with the same usage, e.g. events.
---@field private ExposedVersion FGuid @The exposed version is the version that is used by default when a user adds this script somewhere. It is basically the published version and allows a script maintainer to create and test newer versions that are not used by normal users.
---@field private bVersioningEnabled boolean @If true then this script asset uses active version control to track changes.
---@field private VersionData TArray<FVersionedNiagaraScriptData> @Contains all of the versioned script data.
---@field public RapidIterationParameters FNiagaraParameterStore @Contains all of the top-level values that are iterated on in the UI. These are usually "Module" variables in the graph. They don't necessarily have to be in the order that they are expected in the uniform table.
---@field public RapidIterationParametersCookedEditorCache FNiagaraParameterStore
---@field public VersionToOpenInEditor FGuid @This is used as a transient value to open a specific version in the graph editor
---@field private ScriptExecutionParamStoreCPU FNiagaraScriptExecutionParameterStore
---@field private ScriptExecutionParamStoreGPU FNiagaraScriptExecutionParameterStore
---@field private ScriptExecutionParamStore FNiagaraScriptExecutionParameterStore @The equivalent of ScriptExecutionParamStoreCPU (or GPU) cooked for the given platform.
---@field private ScriptExecutionBoundParameters TArray<FNiagaraBoundParameter> @The cooked binding data between ScriptExecutionParamStore and RapidIterationParameters.
---@field private CachedScriptVMId FNiagaraVMExecutableDataId @Adjusted every time that we compile this script. Lets us know that we might differ from any cached versions.
---@field private ActiveCompileRoots TArray<UObject>
---@field private CachedScriptVM FNiagaraVMExecutableData @Compiled VM bytecode and data necessary to run this script.
---@field private CachedParameterCollectionReferences TArray<UNiagaraParameterCollection>
---@field private CachedDefaultDataInterfaces TArray<FNiagaraScriptDataInterfaceInfo>
---@field private ResolvedDataInterfaces TArray<FNiagaraScriptResolvedDataInterfaceInfo>
---@field private ResolvedUserDataInterfaceBindings TArray<FNiagaraResolvedUserDataInterfaceBinding>
---@field private CachedDefaultUObjects TArray<FNiagaraScriptUObjectCompileInfo> @Populated from compilation process, used to generate resolved list
---@field private ResolvedUObjectInfos TArray<FNiagaraResolvedUObjectInfo> @Resolved objects are used to populate the script parameter stores, they are 1:1 mapping from variable -> object
---@field private DataInterfacesPendingInvalidation TArray<UNiagaraDataInterface> @These data interfaces are populated via InvalidateAndEmptyDefaultDataInterfaces().  This helps avoid naming conflicts of the DataInterfaces stored within CachedDefaultDataInterfaces.  When we are updating the compiled data we end up creating new DataInterfaces but we want to ensure that they are deterministically named, and simply having the original DI become unreferenced leaves us in a state where a non-deterministic GC during the cook process could free the DI, but is not guaranteed.  We resolve this by renaming our invalidated DI, thus creating room for the newly created DI to be named properly.  The last caveat is that we have to be careful about when we rename the DI as the package containing the DI may get reloaded, which would recreate the DI (with the original name) leaving us, once again, in a state where the named slot is taken.
local UNiagaraScript = {}

function UNiagaraScript:RaiseOnGPUCompilationComplete() end

