---Factory responsible for importing DNA file and attaching DNA data into SkeletalMesh
---    Also extends ReimportHandler for importing DNA file with the same name as SkeletalMesh
---@class UDNAAssetImportFactory : UFactory
---@field public ImportUI UDNAAssetImportUI
---@field public OriginalImportUI UDNAAssetImportUI @Prevent garbage collection of original when overriding ImportUI property
local UDNAAssetImportFactory = {}

