---this is only here because putting it in LandscapeEditorObject.h (where it belongs)
---results in Engine being dependent on LandscapeEditor, as the actual landscape editing
---code (e.g. LandscapeEdit.h) is in /Engine/ for some reason...
---@class ELandscapeLayerPaintingRestriction
---@field public None integer
---@field public UseMaxLayers integer
---@field public ExistingOnly integer
---@field public UseComponentAllowList integer
---@field public ELandscapeLayerPaintingRestriction_MAX integer
local ELandscapeLayerPaintingRestriction = {}
