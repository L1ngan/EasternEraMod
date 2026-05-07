---#note, this struct has a details customization in CameraLensSettingsCustomization.cpp/h
---@class FCameraLensSettings
---@field public MinFocalLength number @Minimum focal length for this lens
---@field public MaxFocalLength number @Maximum focal length for this lens
---@field public MinFStop number @Minimum aperture for this lens (e.g. 2.8 for an f/2.8 lens)
---@field public MaxFStop number @Maximum aperture for this lens (e.g. 2.8 for an f/2.8 lens)
---@field public MinimumFocusDistance number @Shortest distance this lens can focus on.
---@field public SqueezeFactor number @Squeeze factor for anamorphic lenses.
---@field public DiaphragmBladeCount integer @Number of blades of diaphragm.
local FCameraLensSettings = {}
