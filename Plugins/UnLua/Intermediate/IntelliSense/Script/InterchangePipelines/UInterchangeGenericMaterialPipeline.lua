---@class UInterchangeGenericMaterialPipeline : UInterchangePipelineBase
---@field public PipelineDisplayName string @The name of the pipeline that will be display in the import dialog.
---@field public bImportMaterials boolean @If enabled, imports the material assets found in the sources.
---@field public SearchLocation EInterchangeMaterialSearchLocation @Specify where we should search for existing materials when importing.
---@field public AssetName string @If set, and there is only one asset and one source, the imported asset will be given this name.
---@field public MaterialImport EInterchangeMaterialImportOption @Determines what kind of material assets should be created for the imported materials.
---@field public bIdentifyDuplicateMaterials boolean @If set, reference materials along with respective material instances are created.
---@field public bCreateMaterialInstanceForParent boolean @If set, additional material instances are created for reference/parent materials.
---@field public ParentMaterial FSoftObjectPath @Optional material used as the parent when importing materials as instances. If no parent material is specified, one will be automatically selected during the import process.
---@field public TexturePipeline UInterchangeGenericTexturePipeline
---@field public SparseVolumeTexturePipeline UInterchangeSparseVolumeTexturePipeline
---@field public bOverrideDisplacement boolean @If enabled, it will override the displacement center set by shader graph nodes, if any
---@field public OverrideDisplacementCenter number @Set the value of the displacement center. If enabled it will also override any displacement center value set by shader graph nodes
---@field protected BaseNodeContainer UInterchangeBaseNodeContainer @END UInterchangePipelineBase overrides
local UInterchangeGenericMaterialPipeline = {}

