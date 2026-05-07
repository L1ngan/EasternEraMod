---Enumerates available options for alpha channel through post processing. The renderer will always generate premultiplied RGBA
---with alpha as translucency (0 = fully opaque; 1 = fully translucent).
---@class EAlphaChannelMode
---@field public Disabled integer
---@field public Enabled integer
---@field public LinearColorSpaceOnly integer
---@field public AllowThroughTonemapper integer
---@field public EAlphaChannelMode_MAX integer
local EAlphaChannelMode = {}
