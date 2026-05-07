---@class UGLTFExportOptions : UObject
---@field public ExportUniformScale number @Scale factor used for exporting all assets (0.01 by default) for conversion from centimeters (Unreal default) to meters (glTF).
---@field public bExportPreviewMesh boolean @If enabled, the preview mesh for a standalone animation or material asset will also be exported.
---@field public bSkipNearDefaultValues boolean @If enabled, floating-point-based JSON properties that are nearly equal to their default value will not be exported and thus regarded as exactly default, reducing JSON size.
---@field public bIncludeCopyrightNotice boolean @If enabled, the copyright notice from project settings will be included as metadata in the glTF asset.
---@field public bExportProxyMaterials boolean @If enabled, materials that have a proxy defined in their user data, will be exported using that proxy instead. This setting won't affect proxy materials exported or referenced directly.
---@field public bUseImporterMaterialMapping boolean @If enabled, materials imported with the Interchange-glTF importer will be directly mapped for the Exporter. bExport material options below will be ignored.
---@field public bExportUnlitMaterials boolean @If enabled, materials with shading model unlit will be properly exported. Uses extension KHR_materials_unlit.
---@field public bExportClearCoatMaterials boolean @If enabled, materials with shading model clear coat will be properly exported. Uses extension KHR_materials_clearcoat.
---@field public bExportClothMaterials boolean @If enabled, materials with shading model cloth will be properly exported. Uses extension KHR_materials_sheen.
---@field public bExportThinTranslucentMaterials boolean @If enabled, materials with shading model thin translucency will be exported. Export is only partial. Uses extension KHR_materials_transmission.
---@field public bExportSpecularGlossinessMaterials boolean @If enabled, materials using the Importer's SpecularGlossiness material function will be exported. Uses extension KHR_materials_pbrSpecularGlossiness.
---@field public bExportEmissiveStrength boolean @If enabled, allows materials to have an emissive factor that exceeds the standard range [0.0, 1.0]. Uses extension KHR_materials_emissive_strength.
---@field public BakeMaterialInputs EGLTFMaterialBakeMode @Bake mode determining if and how a material input is baked out to a texture. Baking is only used for non-trivial material inputs (i.e. not simple texture or constant expressions).
---@field public DefaultMaterialBakeSize FGLTFMaterialBakeSize @Default size of the baked out texture (containing the material input). Can be overridden by material- and input-specific bake settings, see GLTFMaterialExportOptions.
---@field public DefaultMaterialBakeFilter integer @Default filtering mode used when sampling the baked out texture. Can be overridden by material- and input-specific bake settings, see GLTFMaterialExportOptions.
---@field public DefaultMaterialBakeTiling integer @Default addressing mode used when sampling the baked out texture. Can be overridden by material- and input-specific bake settings, see GLTFMaterialExportOptions.
---@field public DefaultInputBakeSettings TMap<EGLTFMaterialPropertyGroup, FGLTFOverrideMaterialBakeSettings> @Input-specific default bake settings that override the general defaults above.
---@field public DefaultLevelOfDetail integer @Default LOD level used for exporting a mesh. Can be overridden by component or asset settings (e.g. minimum or forced LOD level).
---@field public bExportSourceModel boolean @If enabled, exports the SourceModel. If false, exports the Render Data.
---@field public bExportVertexColors boolean @If enabled, export vertex color. Not recommended due to vertex colors always being used as a base color multiplier in glTF, regardless of material. Often producing undesirable results.
---@field public bExportVertexSkinWeights boolean @If enabled, export vertex bone weights and indices in skeletal meshes. Necessary for animation sequences.
---@field public bMakeSkinnedMeshesRoot boolean @If enabled, make skeletal meshes into root nodes to strictly comply with the glTF specification. Final bone transforms remain the same and visual results are unaffected.
---@field public bUseMeshQuantization boolean @If enabled, use quantization for vertex tangents and normals, reducing size. Requires extension KHR_mesh_quantization, which may result in the mesh not loading in some glTF viewers.
---@field public bExportLevelSequences boolean @If enabled, export level sequences. Only transform tracks are currently supported. The level sequence will be played at the assigned display rate.
---@field public bExportAnimationSequences boolean @If enabled, export single animation asset used by a skeletal mesh component. Export of vertex skin weights must be enabled.
---@field public TextureImageFormat EGLTFTextureImageFormat @Desired image format used for exported textures.
---@field public TextureImageQuality integer @Level of compression used for textures exported with lossy image formats, 0 (default) or value between 1 (worst quality, best compression) and 100 (best quality, worst compression).
---@field public bExportTextureTransforms boolean @If enabled, export UV offset and scale/tiling used in materials. Uses extension KHR_texture_transform.
---@field public bExportLightmaps boolean @If enabled, export lightmaps (created by Lightmass) when exporting a level. Uses extension EPIC_lightmap_textures, which is supported by Unreal's glTF viewer.
---@field public bAdjustNormalmaps boolean @If enabled, exported normalmaps will be adjusted from Unreal to glTF convention (i.e. the green channel is flipped).
---@field public bExportHiddenInGame boolean @If enabled, export actors and components that are flagged as hidden in-game.
---@field public bExportLights boolean @If enabled, export directional, point, and spot light components. Uses extension KHR_lights_punctual. Also exports IES light profiles using the EXT_lights_ies extension.
---@field public bExportCameras boolean @If enabled, export camera components.
---@field public ExportMaterialVariants EGLTFMaterialVariantMode @Mode determining if and how to export material variants that change the materials property on a static or skeletal mesh component.
local UGLTFExportOptions = {}

function UGLTFExportOptions:ResetToDefault() end

