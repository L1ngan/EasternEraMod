---A structure that defines a zone for use in framing subjects in screen-space.
---Margins are generally expressed in screen size percentages (between 0 and 1), but don't have a standard meaning.
---In some cases, they may be margins from the screen's edge, while in other cases they may be margins relative to
---a given screen point.
---@class FCameraFramingZone
---@field public Left number
---@field public Top number
---@field public Right number
---@field public Bottom number
local FCameraFramingZone = {}
