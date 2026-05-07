---Fbx_AddToBlueprint UMETA(DisplayName = "Add to an existing Blueprint asset"),
---@class UFbxSceneImportOptions : UObject
---@field public bCreateContentFolderHierarchy boolean @If checked, a folder's hierarchy will be created under the import asset path. All the created folders will match the actor hierarchy. In case there is more than one actor that links to an asset, the shared asset will be placed at the first actor's place.
---@field public bImportAsDynamic boolean @If checked, the mobility of all actors or components will be dynamic. If unchecked, they will be static.
---@field public HierarchyType EFBXSceneOptionsCreateHierarchyType @Choose if you want to generate the scene hierarchy with normal level actors, one actor with multiple components, or one blueprint asset with multiple components.
---@field public bForceFrontXAxis boolean @Whether to force the front axis to be align with X instead of -Y.
---@field public ImportTranslation FVector
---@field public ImportRotation FRotator
---@field public ImportUniformScale number
---@field public bTransformVertexToAbsolute boolean @If this option is true the node absolute transform (transform, offset and pivot) will be apply to the mesh vertices.
---@field public bBakePivotInVertex boolean @- Experimental - If this option is true the inverse node pivot will be apply to the mesh vertices. The pivot from the DCC will then be the origin of the mesh. This option only work with static meshes.
---@field public bImportStaticMeshLODs boolean @If enabled, creates LOD models for Unreal static meshes from LODs in the import file; If not enabled, only the base static mesh from the LOD group is imported.
---@field public bImportSkeletalMeshLODs boolean @If enabled, creates LOD models for Unreal skeletal meshes from LODs in the import file; If not enabled, only the base skeletal mesh from the LOD group is imported.
---@field public bInvertNormalMaps boolean @If enabled, this option will cause normal map Y (Green) values to be inverted when importing textures
local UFbxSceneImportOptions = {}

