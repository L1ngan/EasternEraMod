---glTF-specific user data that can be added to material assets to override export options
---@class UGLTFMaterialExportOptions : UAssetUserData
---@field public Proxy UMaterialInterface @If assigned, export will use the proxy instead of the original material.
---@field public Default FGLTFOverrideMaterialBakeSettings @Default bake settings for this material in general.
---@field public Inputs TMap<EGLTFMaterialPropertyGroup, FGLTFOverrideMaterialBakeSettings> @Input-specific bake settings that override the defaults above.
local UGLTFMaterialExportOptions = {}

