---@class UAssetToolsImpl : UObject
local UAssetToolsImpl = {}

---Function that renames all FSoftObjectPath object with the old asset path to the new one.
---@param PackagesToCheck TArray_UPackage_
---@param AssetRedirectorMap TMap_FSoftObjectPath__FSoftObjectPath_
function UAssetToolsImpl:RenameReferencingSoftObjectPaths(PackagesToCheck, AssetRedirectorMap) end

---Renames assets using the specified names.
---@param AssetsAndNames TArray_FAssetRenameData_
---@param bAutoCheckout boolean @[opt] 
---@return EAssetRenameResult
function UAssetToolsImpl:RenameAssetsWithDialog(AssetsAndNames, bAutoCheckout) end

---Renames assets using the specified names.
---@param AssetsAndNames TArray_FAssetRenameData_
---@return boolean
function UAssetToolsImpl:RenameAssets(AssetsAndNames) end

---Opens editor for assets
---@param Assets TArray_UObject_
function UAssetToolsImpl:OpenEditorForAssets(Assets) end

---Migrate packages and dependencies to another folder
---@param PackageNamesToMigrate TArray_string_
---@param DestinationPath string
---@param Options FMigrationOptions @[opt] 
function UAssetToolsImpl:MigratePackages(PackageNamesToMigrate, DestinationPath, Options) end

---Determines whether an asset is considered read-only for editing, based on its flags and the current permissions (@@see GetWritableFolderPermissionList).
---@param AssetData FAssetData
---@return boolean
function UAssetToolsImpl:IsAssetReadOnly(AssetData) end

---Imports assets using tasks specified.
---@param ImportTasks TArray_UAssetImportTask_
function UAssetToolsImpl:ImportAssetTasks(ImportTasks) end

---Opens a file open dialog to choose files to import to the destination path.
---@param DestinationPath string
---@return TArray_UObject_
function UAssetToolsImpl:ImportAssetsWithDialog(DestinationPath) end

---Imports assets using data specified completely up front.  Does not ever ask any questions of the user or show any modal error messages
---@param ImportData UAutomatedAssetImportData
---@return TArray_UObject_
function UAssetToolsImpl:ImportAssetsAutomated(ImportData) end

---Returns list of objects that soft reference the given soft object path. This will load assets into memory to verify
---@param TargetObject FSoftObjectPath
---@param ReferencingObjects TArray_UObject_ @[out] 
function UAssetToolsImpl:FindSoftReferencesToObject(TargetObject, ReferencingObjects) end

---Exports the specified objects to file. First prompting the user to pick an export directory and optionally prompting the user to pick a unique directory per file
---@param AssetsToExport TArray_string_
---@param bPromptForIndividualFilenames boolean
function UAssetToolsImpl:ExportAssetsWithDialog(AssetsToExport, bPromptForIndividualFilenames) end

---Exports the specified objects to file.
---@param AssetsToExport TArray_string_
---@param ExportPath string
function UAssetToolsImpl:ExportAssets(AssetsToExport, ExportPath) end

---Opens an asset picker dialog and creates an asset with the specified name and path.
---Uses OriginalObject as the duplication source.
---Uses DialogTitle as the dialog's title.
---@param AssetName string
---@param PackagePath string
---@param OriginalObject UObject
---@param DialogTitle string
---@return UObject
function UAssetToolsImpl:DuplicateAssetWithDialogAndTitle(AssetName, PackagePath, OriginalObject, DialogTitle) end

---Opens an asset picker dialog and creates an asset with the specified name and path. Uses OriginalObject as the duplication source.
---@param AssetName string
---@param PackagePath string
---@param OriginalObject UObject
---@return UObject
function UAssetToolsImpl:DuplicateAssetWithDialog(AssetName, PackagePath, OriginalObject) end

---Creates an asset with the specified name and path. Uses OriginalObject as the duplication source.
---@param AssetName string
---@param PackagePath string
---@param OriginalObject UObject
---@return UObject
function UAssetToolsImpl:DuplicateAsset(AssetName, PackagePath, OriginalObject) end

---Try and diff two assets using class-specific tool. Will do nothing if either asset is NULL, or they are not the same class.
---@param OldAsset UObject
---@param NewAsset UObject
---@param OldRevision FRevisionInfo
---@param NewRevision FRevisionInfo
function UAssetToolsImpl:DiffAssets(OldAsset, NewAsset, OldRevision, NewRevision) end

---Try to diff the local version of an asset against the latest one from the depot
---@param InObject UObject
---@param InPackagePath string
---@param InPackageName string
function UAssetToolsImpl:DiffAgainstDepot(InObject, InPackagePath, InPackageName) end

---Creates a unique package and asset name taking the form InBasePackageName+InSuffix
---@param InBasePackageName string
---@param InSuffix string
---@param OutPackageName string @[out] 
---@param OutAssetName string @[out] 
function UAssetToolsImpl:CreateUniqueAssetName(InBasePackageName, InSuffix, OutPackageName, OutAssetName) end

---Opens an asset picker dialog and creates an asset with the specified name and path
---@param AssetName string
---@param PackagePath string
---@param AssetClass TSubclassOf_UObject_
---@param Factory UFactory
---@param CallingContext string @[opt] 
---@param bCallConfigureProperties boolean @[opt] 
---@return UObject
function UAssetToolsImpl:CreateAssetWithDialog(AssetName, PackagePath, AssetClass, Factory, CallingContext, bCallConfigureProperties) end

---Creates an asset with the specified name, path, and factory
---@param AssetName string
---@param PackagePath string
---@param AssetClass TSubclassOf_UObject_
---@param Factory UFactory
---@param CallingContext string @[opt] 
---@return UObject
function UAssetToolsImpl:CreateAsset(AssetName, PackagePath, AssetClass, Factory, CallingContext) end

---@param InputNamesToCopy TArray_string_
---@param TargetPath string
---@param OnCopyComplete Delegate
function UAssetToolsImpl:BeginAdvancedCopyPackages(InputNamesToCopy, TargetPath, OnCopyComplete) end

