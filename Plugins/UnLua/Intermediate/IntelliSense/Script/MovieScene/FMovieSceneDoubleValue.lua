---@class FMovieSceneDoubleValue
---@field public Value number
---@field public Tangent FMovieSceneTangentData
---@field public InterpMode integer
---@field public TangentMode integer
---@field public PaddingByte integer @double value = 8 bytes tangent data = 4 floats + byte enum = 4*4 + 1 = 17 bytes, rounded up to 20 bytes on clang-win64 interp and tangent modes = 2 byte enums = 2 bytes total = 30 bytes
local FMovieSceneDoubleValue = {}
