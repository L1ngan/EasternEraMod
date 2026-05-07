---Strategy used for storing additional cloth deformer mappings depending on the
---desired use of the RaytracingMinLOD value and of the LODBias console variable.
---@class EClothLODBiasMode
---@field public MappingsToSameLOD integer
---@field public MappingsToMinLOD integer
---@field public MappingsToAnyLOD integer
---@field public EClothLODBiasMode_MAX integer
local EClothLODBiasMode = {}
