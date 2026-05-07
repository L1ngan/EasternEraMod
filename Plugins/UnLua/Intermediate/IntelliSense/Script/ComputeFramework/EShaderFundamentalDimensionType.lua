---* Shader types can then be in the form of a scalar, vector, matrix.
---* e.g Scalar: float a;        Vector: float3 n;               Matrix: float3x4 WVP;
---* Note: float b[5]; is still considered scalar. It is an array of scalars.
---@class EShaderFundamentalDimensionType
---@field public Scalar integer
---@field public Vector integer
---@field public Matrix integer
---@field public EShaderFundamentalDimensionType_MAX integer
local EShaderFundamentalDimensionType = {}
