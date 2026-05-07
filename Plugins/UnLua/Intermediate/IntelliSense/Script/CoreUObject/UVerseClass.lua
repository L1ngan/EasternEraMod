---@class UVerseClass : UClass
---@field public SolClassFlags integer
---@field public TaskClasses TArray<TSubclassOf<UObject>> @All coroutine task classes belonging to this class (one for each coroutine in this class)
---@field public InitInstanceFunction UFunction @Initialization function
---@field public PersistentVars TArray<FVersePersistentVar>
---@field public SessionVars TArray<FVerseSessionVar>
---@field public VarAccessors TMap<string, FVerseClassVarAccessors>
---@field public ConstructorEffects EVerseEffectSet
---@field public MangledPackageVersePath string
---@field public PackageRelativeVersePath string @Storing as FName since it's shared between classes
---@field public DisplayNameToUENameFunctionMap TMap<string, string>
---@field public DirectInterfaces TArray<TSubclassOf<UObject>> @All interface class types that this class implements
---@field public PropertiesWrittenByInitCDO TArray<Unknown>
---@field public FunctionMangledNames TMap<string, string> @Store a mapping from all previous function mangled names used by the code generator to the current version of name mangling.  Store NAME_None if there are multiple possible current versions for any previous version.  If a previous function mangled name matches the current mangled name, nothing is stored.
---@field public PredictsFunctionNames TArray<string>
---@field private CachedCookedMetaDataPtr UClassCookedMetaData
local UVerseClass = {}

