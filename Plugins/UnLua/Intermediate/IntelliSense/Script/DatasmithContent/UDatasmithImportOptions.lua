---@class UDatasmithImportOptions : UDatasmithOptionsBase
---@field public SearchPackagePolicy EDatasmithImportSearchPackagePolicy @Specifies where to search for assets
---@field public MaterialConflictPolicy EDatasmithImportAssetConflictPolicy @Specifies what to do when material conflicts
---@field public TextureConflictPolicy EDatasmithImportAssetConflictPolicy @Specifies what to do when texture conflicts
---@field public StaticMeshActorImportPolicy EDatasmithImportActorPolicy @Specifies what to do when actor conflicts
---@field public LightImportPolicy EDatasmithImportActorPolicy @Specifies what to do when light conflicts
---@field public CameraImportPolicy EDatasmithImportActorPolicy @Specifies what to do when material conflicts
---@field public OtherActorImportPolicy EDatasmithImportActorPolicy @Specifies what to do when actor conflicts
---@field public MaterialQuality EDatasmithImportMaterialQuality @Specifies what to do when material conflicts
---@field public BaseOptions FDatasmithImportBaseOptions @Not displayed. Kept for future use
---@field public ReimportOptions FDatasmithReimportOptions @Options specific to the reimport process
---@field public FileName string @Name of the imported file without its path
---@field public FilePath string @Full path of the imported file
---@field public SourceUri string
local UDatasmithImportOptions = {}

