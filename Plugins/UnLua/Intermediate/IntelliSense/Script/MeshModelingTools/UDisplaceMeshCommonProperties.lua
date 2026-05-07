---The basic set of properties shared by (more or less) all DisplacementTypes.
---@class UDisplaceMeshCommonProperties : UInteractiveToolPropertySet
---@field public DisplacementType EDisplaceMeshToolDisplaceType @Displacement type
---@field public DisplaceIntensity number @Displacement intensity
---@field public RandomSeed integer @Seed for randomization
---@field public SubdivisionType EDisplaceMeshToolSubdivisionType @Type of the  mesh subdivision.
---@field public Subdivisions integer @Number of times to subdivide the mesh before displacing it.
---@field public WeightMap string @Select vertex weight map. If configured, the weight map value will be sampled to modulate displacement intensity.
---@field public WeightMapsList TArray<string>
---@field public bInvertWeightMap boolean
---@field public bShowWireframe boolean
---@field public bDisableSizeWarning boolean
local UDisplaceMeshCommonProperties = {}

---@return TArray_string_
function UDisplaceMeshCommonProperties:GetWeightMapsFunc() end

