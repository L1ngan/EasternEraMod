---@class UThumbnailManager : UObject
---@field public NotSupported FThumbnailRenderingInfo @The render info to share across all object types when the object doesn't support rendering of thumbnails
---@field public EditorCube UStaticMesh @All these meshes/materials/textures are preloaded via default properties
---@field public EditorSphere UStaticMesh
---@field public EditorCylinder UStaticMesh
---@field public EditorPlane UStaticMesh
---@field public EditorSkySphere UStaticMesh
---@field public FloorPlaneMaterial UMaterial
---@field public AmbientCubemap UTextureCube
---@field public CheckerboardTexture UTexture2D
---@field protected RenderableThumbnailTypes TArray<FThumbnailRenderingInfo> @The array of thumbnail rendering information entries. Each type that supports thumbnail rendering has an entry in here.
---@field protected ThumbnailManagerClassName string @Holds the name of the thumbnail manager singleton class to instantiate
local UThumbnailManager = {}

