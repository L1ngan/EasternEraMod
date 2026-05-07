---@class UMaterialExpressionSubstrateThinFilm : UMaterialExpressionSubstrateUtilityBase
---@field public Normal FExpressionInput @The normal of the surface to consider. This input respects the normal space setup on the root node (tangent or world)
---@field public F0 FExpressionInput @Defines the color and brightness of the specular highlight where the surface is facing the camera. Each specular contribution will fade to black as F0 drops below 0.02. (type = float3, unit = unitless, defaults to plastic 0.04)
---@field public F90 FExpressionInput @Defines the color of the specular highlight where the surface normal is 90 degrees from the view direction. Only the hue and saturation are preserved, the brightness is fixed at 1.0. Fades to black as F0 drops below 0.02. (type = float3, unit = unitless, defaults to 1.0f)
---@field public Thickness FExpressionInput @Controls the thickness of the thin film layer coating the current slab. 0 means disabled and 1 means a coating layer of 10 micrometer. (type = float, unitless, default = 0)
---@field public IOR FExpressionInput @Thin film IOR
local UMaterialExpressionSubstrateThinFilm = {}

