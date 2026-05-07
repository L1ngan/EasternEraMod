---Contains data for a group of assets to import
---@class UAssetImportTask : UObject
---@field public Filename string @Filename to import
---@field public DestinationPath string @Path where asset will be imported to
---@field public DestinationName string @Optional custom name to import as (if you are using interchange the name must be set in a pipeline and this field will be ignored)
---@field public bReplaceExisting boolean @Overwrite existing assets
---@field public bReplaceExistingSettings boolean @Replace existing settings when overwriting existing assets
---@field public bAutomated boolean @Avoid dialogs
---@field public bSave boolean @Save after importing
---@field public bAsync boolean @Perform the import asynchronously for file formats where async import is available
---@field public Factory UFactory @Optional factory to use
---@field public Options UObject @Import options specific to the type of asset
---@field public ImportedObjectPaths TArray<string> @Paths to objects created or updated after import
---@field public Result TArray<UObject>
local UAssetImportTask = {}

---Query whether this asynchronous import task is complete, and the results are ready to read.
---This will always return true in the case of a blocking import.
---@return boolean
function UAssetImportTask:IsAsyncImportComplete() end

---Get the list of imported objects.
---Note that if the import was asynchronous, this will block until the results are ready.
---To test whether asynchronous results are ready or not, use IsAsyncImportComplete().
---@return TArray_UObject_
function UAssetImportTask:GetObjects() end

