---VR Editor interaction with the 3D world
---@class UVREditorPlacement : UObject
---@field protected VRMode UVREditorMode @Owning object
---@field protected ViewportWorldInteraction UViewportWorldInteraction @The actual ViewportWorldInteraction
---@field protected FloatingUIAssetDraggedFrom UWidgetComponent @The UI used to drag an asset into the level
---@field protected PlacingMaterialOrTextureAsset UObject @The material or texture asset we're dragging to place on an object
local UVREditorPlacement = {}

