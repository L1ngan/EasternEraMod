---User controllable debug draw settings.
---@class FOptimusDebugDrawParameters
---@field public bForceEnable boolean @Force enable debug rendering. Otherwise "r.ShaderPrint 1" needs to be set.
---@field public MaxLineCount integer @Space to allocate for line collection.
---@field public MaxTriangleCount integer @Space to allocate for triangle collection.
---@field public MaxCharacterCount integer @Space to allocate for character collection.
---@field public FontSize integer @Font size for characters.
local FOptimusDebugDrawParameters = {}
