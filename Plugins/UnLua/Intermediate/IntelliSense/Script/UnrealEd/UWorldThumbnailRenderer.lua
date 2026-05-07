---@class UWorldThumbnailRenderer : UDefaultSizedThumbnailRenderer
---@field private GlobalOrbitPitchOffset number @Offset used to orient all worlds to show a more vertical camera, if necessary. Individual thumbnail infos can provide additional offset.
---@field private GlobalOrbitYawOffset number @Offset used to orient all worlds to face the camera in degrees when using a perspective camera. Individual thumbnail infos can provide additional offset.
---@field private bUseUnlitScene boolean @If true, all world thumbnails will be rendered unlit. This is useful in games that have shared lighting in a common map
---@field private bAllowWorldThumbnails boolean @If false, all world thumbnails rendering will be disabled
local UWorldThumbnailRenderer = {}

