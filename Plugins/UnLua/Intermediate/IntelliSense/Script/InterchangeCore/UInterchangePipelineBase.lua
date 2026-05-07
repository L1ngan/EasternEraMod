---Pipeline implementation:
---1. ExecutePipeline - Create the factory nodes from the translated nodes. This is where the logic is execute to create the unreal asset via the factory node. Called after the translation
---2. ExecutePostFactoryPipeline - Called after the factory has create the unreal asset with the associate factory node, but before calling PostEditChange.
---3. ExecutePostImportPipeline - Called after the asset PostEditChange is done. If the asset use the async build framework, the asset build should be completed.
---4. ExecutePostBroadcastPipeline - Called after the asset was registered to the registry manager and all broadcast calls have been done.
---@class UInterchangePipelineBase : UObject
---@field public DestinationName string @* The Unreal import system has an option to force a name if we import only one main asset (one texture, one mesh or one animation). * The generic asset pipeline uses this information to behave as expected.
---@field public ContentImportPath string @* The content path where asset should be created.
---@field public OriginalPipelinePath FSoftObjectPath @Path of the pipeline object used to create an instance of the pipeline. Useful for creating section names for caching the properties in ini file.
---@field protected bAllowPropertyStatesEdition boolean @If true, the property editor for this pipeline instance will allow editing property states. If false, the property editor for this pipeline instance will apply the property states. Note: If you open a pipeline asset in the Content Browser, you will be able to edit the property states.       If you import a file with Interchange, the import dialog will apply property states.
---@field protected bIsReimportContext boolean @If true, this pipeline instance is used for reimport. If false, this pipeline instance is used for import. Note: This context must be set by the owner instancing this pipeline. This context will be used to determine whether to hide some properties.
---@field protected bIsShowEssentials boolean @If true, this pipeline instance is use for essentials settings layout. If false, this pipeline instance is use for normal layout. Note: This layout must be set by the owner instancing this pipeline. This layout will be use to hide or not some properties.
---@field protected bFromReimportOrOverride boolean @* If true, this pipeline was create to re-import an asset or override the project settings pipelines. * That kind of pipeline will not be treat like project settings pipeline in the UI. PredialogCleanup will not be called.
---@field protected Results UInterchangeResultsContainer
---@field protected PropertiesStates TMap<string, FInterchangePipelinePropertyStates> @Map of property path and lock status. Any properties that have a true lock status will be readonly when showing the import dialog. Use the API to Get and Set the properties states.
---@field protected CachePropertiesStates TMap<string, FInterchangePipelinePropertyStates>
---@field protected CacheContextParam FInterchangePipelineContextParams
local UInterchangePipelineBase = {}

---* If this returns true, this pipeline will be saved in the asset import data.
---* We will reuse this pipeline when reimporting the asset.
---* If false, it's probably a debug helper pipeline that we do not want to save into assets.
---@return boolean
function UInterchangePipelineBase:SupportReimport() end

---Non-virtual helper that allows Blueprint to implement an event-based function.
---the Interchange framework calls this function, not the virtual one that is called by the default implementation.
---@param ReimportObjectClass TSubclassOf_UObject_
---@param SourceFileIndex integer
function UInterchangePipelineBase:ScriptedSetReimportSourceIndex(ReimportObjectClass, SourceFileIndex) end

---This function is call when we want to list pipeline in the import dialog. If not override the default behavior of this function will search if
---the pipeline have a FString UPROPERTY named "PipelineDisplayName" and return the property value. If there is no FString UPROPERTY call "PipelineDisplayName" it will
---return the name of the pipeline asset (UObject::GetName).
---When creating a pipeline (c++, python or blueprint) you can simply add a UPROPERTY name "PipelineDisplayName" to your pipeline, you do not need to override the function.
---Use the same category has your other options and put it on the top.
---The meta tag StandAlonePipelineProperty will hide your PROPERTY if your pipeline is a sub object of another pipeline when showing the import dialog.
---The meta tag PipelineInternalEditionData make sure the property will be show only when we edit the pipeline object (hidden when showing the import dialog).
---UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Textures", meta = (StandAlonePipelineProperty = "True", PipelineInternalEditionData = "True"))
---FString PipelineDisplayName;
---@return string
function UInterchangePipelineBase:ScriptedGetPipelineDisplayName() end

---ScriptedExecutePostImportPipeline is called after an asset is completely imported, after PostEditChange has already been called.
---This can be useful if you need build data for one asset to finish setting up another asset.
---@param BaseNodeContainer UInterchangeBaseNodeContainer
---@param FactoryNodeKey string
---@param CreatedAsset UObject
---@param bIsAReimport boolean
function UInterchangePipelineBase:ScriptedExecutePostImportPipeline(BaseNodeContainer, FactoryNodeKey, CreatedAsset, bIsAReimport) end

---ScriptedExecutePostFactoryPipeline is called after the factory creates an Unreal asset, but before it calls PostEditChange.
---@param BaseNodeContainer UInterchangeBaseNodeContainer
---@param FactoryNodeKey string
---@param CreatedAsset UObject
---@param bIsAReimport boolean
function UInterchangePipelineBase:ScriptedExecutePostFactoryPipeline(BaseNodeContainer, FactoryNodeKey, CreatedAsset, bIsAReimport) end

---ScriptedExecutePostBroadcastPipeline is called after an asset is completely imported and the broadcast have been called.
---This can be useful if you need to unload the asset for any reason (Level reference by level instance need to be unload).
---@param BaseNodeContainer UInterchangeBaseNodeContainer
---@param FactoryNodeKey string
---@param CreatedAsset UObject
---@param bIsAReimport boolean
function UInterchangePipelineBase:ScriptedExecutePostBroadcastPipeline(BaseNodeContainer, FactoryNodeKey, CreatedAsset, bIsAReimport) end

---ScriptedExecutePipeline, is call after the translation and before we parse the graph to call the factory.
---This is where factory node should be created by the pipeline.
---Each factory node represent an unreal asset create that will be create by an interchange factory.
---@param BaseNodeContainer UInterchangeBaseNodeContainer
---@param SourceDatas TArray_UInterchangeSourceData_
---@param ContentBasePath string
function UInterchangePipelineBase:ScriptedExecutePipeline(BaseNodeContainer, SourceDatas, ContentBasePath) end

---Non-virtual helper that allows Blueprint to implement an event-based function.
---The Interchange manager calls this function, not the virtual one that is called by the default implementation.
---@param BaseNodeContainer UInterchangeBaseNodeContainer
function UInterchangePipelineBase:ScriptedExecuteExportPipeline(BaseNodeContainer) end

---@return boolean
function UInterchangePipelineBase:IsReimportContext() end

---Fill the list of all asset this pipeline can create
---@param PipelineSupportAssetClasses TArray_TSubclassOf_UObject__ @[out] 
function UInterchangePipelineBase:GetSupportAssetClasses(PipelineSupportAssetClasses) end

---Return a mutable property states reference. Add the property states if it doesn't exist.
---@param PropertyPath string
---@return FInterchangePipelinePropertyStates
function UInterchangePipelineBase:FindOrAddPropertyStates(PropertyPath) end

---Return true if the property has valid states, or false if no states were set for the property.
---@param PropertyPath string
---@return boolean
function UInterchangePipelineBase:DoesPropertyStatesExist(PropertyPath) end

