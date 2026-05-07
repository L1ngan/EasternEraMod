---@class UFbxSceneImportFactory : USceneImportFactory
---@field public SceneImportOptions UFbxSceneImportOptions @Import options UI detail when importing fbx scene
---@field public SceneImportOptionsStaticMesh UFbxSceneImportOptionsStaticMesh @Import options UI detail when importing fbx scene static mesh
---@field public SceneImportOptionsSkeletalMesh UFbxSceneImportOptionsSkeletalMesh @Import options UI detail when importing fbx scene skeletal mesh
---@field public StaticMeshImportData UFbxStaticMeshImportData @Import data used when importing static meshes
---@field public SkeletalMeshImportData UFbxSkeletalMeshImportData @Import data used when importing skeletal meshes
---@field public AnimSequenceImportData UFbxAnimSequenceImportData @Import data used when importing animations
---@field public TextureImportData UFbxTextureImportData @Import data used when importing textures
---@field protected ReimportData UFbxSceneImportData @Pointer on the fbx scene import data, we fill this object to be able to do re import of the scene
local UFbxSceneImportFactory = {}

