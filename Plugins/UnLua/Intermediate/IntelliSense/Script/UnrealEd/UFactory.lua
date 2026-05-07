---Base class for all factories
---An object responsible for creating and importing new objects.
---@class UFactory : UObject
---@field protected bCreateNew boolean @The default value to return from CanCreateNew()
---@field public SupportedClass TSubclassOf<UObject> @The class manufactured by this factory.
---@field public ContextClass TSubclassOf<UObject> @Class of the context object used to help create the object.
---@field public Formats TArray<string> @List of formats supported by the factory. Each entry is of the form "ext;Description" where ext is the file extension.
---@field public bEditAfterNew boolean @true if the associated editor should be opened after creating a new object.
---@field public bEditorImport boolean @true if the factory imports objects from files.
---@field public bText boolean @true if the factory imports objects from text.
---@field public ImportPriority integer @Determines the order in which factories are tried when importing or reimporting an object.       Factories with higher priority values will go first. Factories with negative priorities will be excluded.
---@field public AutomatedImportData UAutomatedAssetImportData @Data for how to import files via the automated command line importing interface
---@field public AssetImportTask UAssetImportTask @Task for importing file via script interfaces
---@field protected OverwriteYesOrNoToAllState integer @For interactive object imports, this value indicates whether the user wants objects to be automatically overwritten (See EAppReturnType), or -1 if the user should be prompted.
local UFactory = {}

---Import object(s) using a task via script
---@param InTask UAssetImportTask
---@return boolean
function UFactory:ScriptFactoryCreateFile(InTask) end

---Whether the specified file can be imported by this factory. (Implemented in script)
---@param Filename string
---@return boolean
function UFactory:ScriptFactoryCanImport(Filename) end

