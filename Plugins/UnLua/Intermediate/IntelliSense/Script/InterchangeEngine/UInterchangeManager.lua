---@class UInterchangeManager : UObject
---@field private RegisteredTranslatorsClass TSet<TSubclassOf<UObject>> @Caching the registered translator classes to avoid double registration.
---@field private RegisteredFactoryClasses TMap<TSubclassOf<UObject>, TSubclassOf<UObject>> @The manager will create only one factory per type.
---@field private RegisteredWriters TMap<TSubclassOf<UObject>, UInterchangeWriterBase> @The manager will create only one writer per type.
---@field private RegisteredConverters TMap<TSubclassOf<UObject>, UInterchangeAssetImportDataConverterBase> @The manager will create only one converter per type.
local UInterchangeManager = {}

---Return false if Interchange is not actively importing or exporting.
---If Interchange is active, it will display a notification to let the user know they can cancel the asynchronous import/export
---to be able to complete the operation they requested. (This is called by the exit editor operation.)
---@return boolean
function UInterchangeManager:WarnIfInterchangeIsActive() end

---Wait synchronously until all tasks are done.
---@param bCancel boolean
function UInterchangeManager:WaitUntilAllTasksDone(bCancel) end

---Call this from blueprint or python to start an asynchronous asset import process.
---This process can import many different assets into the game content.
---        and the bAutomated flag is:
---        - true, the function will return false and log a warning
---        - false, a dialog will ask
---@param ObjectToReimport UObject
---@param ImportAssetParameters FImportAssetParameters
---@return boolean
function UInterchangeManager:ScriptedReimportAssetAsync(ObjectToReimport, ImportAssetParameters) end

---Call this to start a asynchronous scene import process.
---This process can import many different assets and their transforms (USceneComponent).
---@param ContentPath string
---@param SourceData UInterchangeSourceData
---@param ImportAssetParameters FImportAssetParameters
---@return boolean
function UInterchangeManager:ScriptedImportSceneAsync(ContentPath, SourceData, ImportAssetParameters) end

---Call this from blueprint or python to start an asynchronous asset import process.
---This process can import many different assets into the game content.
---@param ContentPath string
---@param SourceData UInterchangeSourceData
---@param ImportAssetParameters FImportAssetParameters
---@return boolean
function UInterchangeManager:ScriptedImportAssetAsync(ContentPath, SourceData, ImportAssetParameters) end

---Call this to start a synchronous asset re-import process.
---This process can re-import many different assets into the game content.
---        and the bAutomated flag is:
---        - true, the function will return false and log a warning
---        - false, a dialog will ask
---@param ObjectToReimport UObject
---@param ImportAssetParameters FImportAssetParameters
---@param OutImportedObjects TArray_UObject_ @[out] 
---@return boolean
function UInterchangeManager:ReimportAsset(ObjectToReimport, ImportAssetParameters, OutImportedObjects) end

---Return true if the object is being imported, or false otherwise. If the user imports multiple file in the same folder, it's possible to
---have the same asset name in two different files.
---@param Object UObject
---@return boolean
function UInterchangeManager:IsObjectBeingImported(Object) end

---Return true if Interchange is actively importing or exporting, or false otherwise.
---@return boolean
function UInterchangeManager:IsInterchangeActive() end

---Call this to start a synchronous scene import process.
---This process can import many different assets and their transforms (USceneComponent).
---@param ContentPath string
---@param SourceData UInterchangeSourceData
---@param ImportAssetParameters FImportAssetParameters
---@return boolean
function UInterchangeManager:ImportScene(ContentPath, SourceData, ImportAssetParameters) end

---Call this to start a synchronous asset import process.
---This process can import many different assets into the game content.
---@param ContentPath string
---@param SourceData UInterchangeSourceData
---@param ImportAssetParameters FImportAssetParameters
---@param OutImportedObjects TArray_UObject_ @[out] 
---@return boolean
function UInterchangeManager:ImportAsset(ContentPath, SourceData, ImportAssetParameters, OutImportedObjects) end

---* Return the first translator that can translate the source data.
---* @@Param SourceData - The source data that you want a translator for.
---* @@return return a matching translator, or nullptr if no translators exist for the source data.
---@param SourceData UInterchangeSourceData
---@return UInterchangeTranslatorBase
function UInterchangeManager:GetTranslatorForSourceData(SourceData) end

---Returns the list of supported formats for a given Object.
---@param Object UObject
---@param SourceFileIndex integer
---@return TArray_string_
function UInterchangeManager:GetSupportedFormatsForObject(Object, SourceFileIndex) end

---Returns the list of supported formats for a given translator type.
---@param ForTranslatorType EInterchangeTranslatorType
---@return TArray_string_
function UInterchangeManager:GetSupportedFormats(ForTranslatorType) end

---Returns the list of formats supporting the specified translator asset type.
---@param ForTranslatorAssetType EInterchangeTranslatorAssetType
---@param ForTranslatorType EInterchangeTranslatorType @[opt] 
---@param bStrictMatchTranslatorType boolean @[opt] 
---@return TArray_string_
function UInterchangeManager:GetSupportedAssetTypeFormats(ForTranslatorAssetType, ForTranslatorType, bStrictMatchTranslatorType) end

---Script helper to get a registered factory for a specified class.
---@param ClassToMake TSubclassOf_UObject_
---@return TSubclassOf_UObject_
function UInterchangeManager:GetRegisteredFactoryClass(ClassToMake) end

---Return the pointer to the Interchange Manager singleton.
---@return UInterchangeManager
function UInterchangeManager.GetInterchangeManagerScripted() end

---Returns the list of supported formats for a given translator type.
---@param Asset UObject
---@return UInterchangeAssetImportData
function UInterchangeManager:GetAssetImportData(Asset) end

---Call this to start a scene export process. The caller must specify a source data.
---@param World UObject
---@param bIsAutomated boolean @[opt] 
---@return boolean
function UInterchangeManager:ExportScene(World, bIsAutomated) end

---Call this to start an asset export process. The caller must specify a source data.
---@param Asset UObject
---@param bIsAutomated boolean @[opt] 
---@return boolean
function UInterchangeManager:ExportAsset(Asset, bIsAutomated) end

---* Script helper to create a source data object that points to a file on disk.
---* @@Param InFilename: Specify a file on disk.
---* @@return: A new UInterchangeSourceData.
---@param InFileName string
---@return UInterchangeSourceData
function UInterchangeManager.CreateSourceData(InFileName) end

---Check whether there is a registered translator for this source data.
---This allows us to bypass the original asset tools system to import supported assets.
---Otherwise, returns true only if the translator supports level import
---@param SourceData UInterchangeSourceData
---@param bSceneImportOnly boolean @[opt] 
---@return boolean
function UInterchangeManager:CanTranslateSourceData(SourceData, bSceneImportOnly) end

---Returns true if Interchange can create this type of asset and is able to translate its source files.
---@param Object UObject
---@param OutFilenames TArray_string_ @[out] 
---@return boolean
function UInterchangeManager:CanReimport(Object, OutFilenames) end

---This function cancels all tasks and finishes them as fast as possible.
---We use this if the user cancels the work or if the editor exits.
function UInterchangeManager:CancelAllTasks() end

