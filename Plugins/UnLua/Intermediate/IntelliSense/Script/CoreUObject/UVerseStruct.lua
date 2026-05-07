---namespace Verse
---@class UVerseStruct : UScriptStruct
---@field public VerseClassFlags integer @EVerseClassFlags
---@field public QualifiedName Unknown
---@field public InitFunction UFunction @Function used for initialization
---@field public ModuleClass TSubclassOf<UObject> @Parent module class
---@field public Guid FGuid @GUID to be able to match old version of this struct to new one
---@field public FactoryFunction UFunction
---@field public OverrideFactoryFunction UFunction
---@field public ConstructorEffects EVerseEffectSet
---@field private CachedCookedMetaDataPtr UStructCookedMetaData
local UVerseStruct = {}

