---@class FGLTFMaterialBakeSize
---@field public X integer
---@field public Y integer
---@field public bAutoDetect boolean @If enabled, bake size is based on the largest texture used in the material input's expression graph. If none found, bake size will fall back to the explicit dimensions.
local FGLTFMaterialBakeSize = {}
