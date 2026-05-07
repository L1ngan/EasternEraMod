---Structure used to describe compiling time of a shader type (for all the instances of it that we have seen).
---      Can be dumped to CSV file via 'r.ShaderCompiler.DumpShaderTimeStats' CVar.
---@class FShaderTimings
---@field public MinCompileTime number
---@field public MaxCompileTime number
---@field public TotalCompileTime number
---@field public TotalPreprocessTime number
---@field public NumCompiled integer
---@field public AverageCompileTime number
local FShaderTimings = {}
