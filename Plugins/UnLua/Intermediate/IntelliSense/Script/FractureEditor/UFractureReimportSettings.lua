---Settings related to geometry collection -> static mesh conversion *
---@class UFractureReimportSettings : UFractureToolSettings
---@field public bOddMaterialsAreInternal boolean @If checked, materials will be updated on export to ensure that odd-numbered material IDs correspond to internal faces, and this will be used on re-import to assign correct material IDs
local UFractureReimportSettings = {}

