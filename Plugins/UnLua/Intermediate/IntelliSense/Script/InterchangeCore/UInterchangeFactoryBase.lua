---Asset factory implementation:
---The first three steps use the Interchange factory node to import or reimport the UObject:
---1. BeginImportAsset_GameThread - Create the asset UObject. You can also import source data (retrieve payloads) and set up properties on the game thread.
---2. ImportAsset_Async - Import source data (retrieve payloads) and set up properties asynchronously on any thread.
---3. EndImportAsset_GameThread - Anything you need to do on the game thread to finalize the import source data and set up properties. For example, conflict resolution that needs UI.
---The last three steps can modify the created UObject
---4. SetupObject_GameThread - Do any UObject setup required before the build, the UObject dependencies should exist and have all the source data and properties imported.
---5. BuildObject_GameThread - Build the asset if it can be built.
---6. FinalizeObject_GameThread - Do any final UObject setup after the build. Note that the build of an asset can be asynchronous and this function will be call after the async build is done.
---Scene factory implementation:
---1. ImportSceneObject_GameThread - Create an actor in a level.
---@class UInterchangeFactoryBase : UObject
---@field public Results UInterchangeResultsContainer
local UInterchangeFactoryBase = {}

---Sets the object's source at the specified index to the given SourceFileName.
---@param Object UObject
---@param SourceFilename string
---@param SourceIndex integer
---@return boolean
function UInterchangeFactoryBase:SetSourceFilename(Object, SourceFilename, SourceIndex) end

---Fills the OutSourceFilenames array with the list of source files contained in the asset source data.
---Returns true if the operation was successful.
---@param Object UObject
---@param OutSourceFilenames TArray_string_ @[out] 
---@return boolean
function UInterchangeFactoryBase:GetSourceFilenames(Object, OutSourceFilenames) end

---Return the UClass this factory can create.
---@return TSubclassOf_UObject_
function UInterchangeFactoryBase:GetFactoryClass() end

---Return the asset type this factory can create.
---@return EInterchangeFactoryAssetType
function UInterchangeFactoryBase:GetFactoryAssetType() end

