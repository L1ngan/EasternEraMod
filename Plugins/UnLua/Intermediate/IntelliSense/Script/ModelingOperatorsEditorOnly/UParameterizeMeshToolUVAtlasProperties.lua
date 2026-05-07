---Settings for the UVAtlas Automatic UV Generation Method
---@class UParameterizeMeshToolUVAtlasProperties : UInteractiveToolPropertySet
---@field public IslandStretch number @Maximum amount of stretch, from none to unbounded. If zero stretch is specified, each triangle will likely be its own UV island.
---@field public NumIslands integer @Hint at number of UV islands. The default of 0 means it is determined automatically.
---@field public TextureResolution integer @Expected resolution of the output textures; this controls spacing left between UV islands to avoid interpolation artifacts.
---@field public bUsePolygroups boolean @Generate new UVs based on polygroups from specified layer.
---@field public bLayoutUDIMPerPolygroup boolean @Layout resulting islands on UDIMs based on polygroups.
---@field public bPolygroupsEnabled boolean @Controls if polygroup options are available to the user.
---@field public bUDIMsEnabled boolean @Controls if UDIM options are available to the user.
local UParameterizeMeshToolUVAtlasProperties = {}

