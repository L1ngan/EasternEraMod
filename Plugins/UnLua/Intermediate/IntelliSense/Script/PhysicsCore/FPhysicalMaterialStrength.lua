---Defines the directional strengths of a physical material in term of force per surface area
---@class FPhysicalMaterialStrength
---@field public TensileStrength number @Tensile strength of the material in MegaPascal ( 10^6 N/m2 ) This amount of tension force per area the material can withstand before it fractures
---@field public CompressionStrength number @Compression strength of the material in MegaPascal ( 10^6 N/m2 ) This amount of compression force per area the material can withstand before it fractures, crumbles or buckles
---@field public ShearStrength number @Shear strength of the material in MegaPascal ( 10^6 N/m2 ) This amount of shear force per area the material can withstand before it fractures
local FPhysicalMaterialStrength = {}
