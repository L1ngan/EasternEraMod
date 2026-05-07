---@class UInterchangeProjectSettings : UDeveloperSettings
---@field public ContentImportSettings FInterchangeContentImportSettings @Settings used when importing into the Content Browser.
---@field public SceneImportSettings FInterchangeSceneImportSettings @Settings used when importing into a level.
---@field public FilePickerClass TSoftClassPtr<UInterchangeFilePickerBase> @This tells Interchange which file picker class to construct when we need to choose a file for a source.
---@field public bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing boolean @If enabled, both Interchange translators and the legacy import process smooth the edges of static meshes that don't contain smoothing information. If you have an older project that relies on leaving hard edges by default, you can disable this setting to preserve consistency with older assets.
---@field public GenericPipelineClass TSoftClassPtr<UInterchangePipelineBase> @Specifies which pipeline class Interchange should use when editor tools import or reimport an asset with base settings. Unreal Editor depends on this class to be set. You can only edit this property in the .ini file.
---@field public ConverterDefaultPipeline FSoftObjectPath @Optional, the pipeline asset converters will duplicate to create interchange import data pipeline. If not set, converters will duplicate a pipeline class CDO of there choice.
---@field public InterchangeGroups TArray<FInterchangeGroup> @Groups that define PerTransalatorPipelines that user can select to use.
local UInterchangeProjectSettings = {}

