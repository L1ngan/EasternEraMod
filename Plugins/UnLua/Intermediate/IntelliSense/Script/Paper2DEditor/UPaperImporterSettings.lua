---Implements the settings for imported Paper2D assets, such as sprite sheet textures.
---@class UPaperImporterSettings : UObject
---@field protected bPickBestMaterialWhenCreatingSprites boolean @Should the source texture be scanned when creating new sprites to determine the appropriate material? (if false, the Default Masked Material is always used)
---@field protected bPickBestMaterialWhenCreatingTileMaps boolean @Should the source texture be scanned when creating new tile maps (from a tile set or via importing) to determine the appropriate material? (if false, the Default Masked Material is always used)
---@field protected bAnalysisCanUseOpaque boolean @Can opaque materials be applied as part of the 'best material' analysis?
---@field protected DefaultPixelsPerUnrealUnit number @The default scaling factor between pixels and Unreal units (cm) to use for newly created sprite assets (e.g., 0.64 would make a 64 pixel wide sprite take up 100 cm)
---@field protected NormalMapTextureSuffixes TArray<string> @A list of default suffixes to use when looking for associated normal maps while importing sprites or creating sprites from textures
---@field protected BaseMapTextureSuffixes TArray<string> @The default suffix to remove (if present) from a texture name before looking for an associated normal map using NormalMapTextureSuffixes
---@field protected DefaultSpriteTextureGroup integer @The default texture group for imported sprite textures, tile sheets, etc... (typically set to UI for 'modern 2D' or 2D pixels for 'retro 2D')
---@field protected bOverrideTextureCompression boolean @Should texture compression settings be overridden on imported sprite textures, tile sheets, etc...?
---@field protected DefaultSpriteTextureCompression integer @Compression settings to use when building the texture. The default texture group for imported sprite textures, tile sheets, etc... (typically set to UI for 'modern 2D' or 2D pixels for 'retro 2D')
---@field protected UnlitDefaultMaskedMaterialName FSoftObjectPath @The unlit default masked material for newly created sprites (masked means binary opacity: things are either opaque or see-thru, with nothing in between)
---@field protected UnlitDefaultTranslucentMaterialName FSoftObjectPath @The unlit default translucent material for newly created sprites (translucent means smooth opacity which can vary continuously from 0..1, but translucent rendering is more expensive that opaque or masked rendering and has different sorting rules)
---@field protected UnlitDefaultOpaqueMaterialName FSoftObjectPath @The unlit default opaque material for newly created sprites
---@field protected LitDefaultMaskedMaterialName FSoftObjectPath @The lit default masked material for newly created sprites (masked means binary opacity: things are either opaque or see-thru, with nothing in between)
---@field protected LitDefaultTranslucentMaterialName FSoftObjectPath @The lit default translucent material for newly created sprites (translucent means smooth opacity which can vary continuously from 0..1, but translucent rendering is more expensive that opaque or masked rendering and has different sorting rules)
---@field protected LitDefaultOpaqueMaterialName FSoftObjectPath @The lit default opaque material for newly created sprites
local UPaperImporterSettings = {}

