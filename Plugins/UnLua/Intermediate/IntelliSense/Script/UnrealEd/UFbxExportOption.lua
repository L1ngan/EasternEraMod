---@class UFbxExportOption : UObject
---@field public FbxExportCompatibility EFbxExportCompatibility @This will set the fbx sdk compatibility when exporting to fbx file. The default value is 2013
---@field public bASCII boolean @If enabled, save as ascii instead of binary
---@field public bForceFrontXAxis boolean @If enabled, export with X axis as the front axis instead of default -Y
---@field public VertexColor boolean @If enabled, export vertex color
---@field public LevelOfDetail boolean @If enabled, export the level of detail
---@field public Collision boolean @If enabled, export collision
---@field public bExportSourceMesh boolean @* If enabled, export the highest LOD source data instead of the render data. * Note: *     - No LOD will be exported for static meshes. (Level Of Detail option will be ignored) *     - No Collision will be exported for static meshes. (Collision option will be ignore)
---@field public bExportMorphTargets boolean @If enabled, export the morph targets
---@field public bExportPreviewMesh boolean @If enable, the preview mesh link to the exported animations will be also exported.
---@field public MapSkeletalMotionToRoot boolean @If enable, Map skeletal actor motion to the root bone of the skeleton.
---@field public bExportLocalTime boolean @If enabled, export sequencer animation in its local time, relative to its sequence.
---@field public BakeCameraAndLightAnimation EMovieSceneBakeType @Bake settings for camera and light animation curves. Camera Scale not exported.
---@field public BakeActorAnimation EMovieSceneBakeType @Bake settings for exported non-camera, non-light object animation
---@field public BakeMaterialInputs EFbxMaterialBakeMode @Bake mode determining if and how a material input is baked out to a texture. Baking is only used for non-trivial material inputs (i.e. not simple texture or constant expressions).
---@field public DefaultMaterialBakeSize FFbxMaterialBakeSize @Default size of the baked out texture (containing the material input).
local UFbxExportOption = {}

