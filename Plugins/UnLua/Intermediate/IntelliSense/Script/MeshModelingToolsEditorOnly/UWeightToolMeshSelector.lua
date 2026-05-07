---this class wraps the all the components to enable selection on a single mesh in the skin weights tool
---this allows us to make selections on multiple different meshes
---NOTE: at some point we may want to do component selections on multiple meshes in any/all viewports
---at which time this class should be centralized and renamed to UMeshSelector or something like that.
---But there will need to be some sort of centralized facility to manage that and make sure it interacts nicely with other tools.
---@class UWeightToolMeshSelector : UObject
---@field private ParentTool UInteractiveTool
---@field private World UWorld
---@field private PreviewMesh UPreviewMesh
---@field private PolygonSelectionMechanic UPolygonSelectionMechanic
local UWeightToolMeshSelector = {}

