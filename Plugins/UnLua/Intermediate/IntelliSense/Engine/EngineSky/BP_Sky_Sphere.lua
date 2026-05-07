---Customizable sky sphere that mimics the effects of atmospheric fog
---@class BP_Sky_Sphere_C : AActor
---@field public SkySphereMesh UStaticMeshComponent
---@field public Base USceneComponent
---@field public Sky material UMaterialInstanceDynamic
---@field public Refresh material boolean @Use this to update the sky material after moving  a directional light
---@field public Directional light actor ADirectionalLight @Assign your level's directional light actor to this variable to  match the sky's sun position and color
---@field public Colors determined by sun position boolean @If enabled, sky colors will change according to the sun's position
---@field public Sun height number @If no directional light is assigned, this value determines the height of the sun
---@field public Sun brightness number @Brightness multiplier for the sun disk
---@field public Horizon Falloff number @Affects the size of the gradient from zenith color to horizon color
---@field public Zenith Color FLinearColor
---@field public Horizon color FLinearColor
---@field public Cloud color FLinearColor
---@field public Overall Color FLinearColor
---@field public Cloud speed number @Panning speed for the clouds
---@field public Cloud opacity number @Opacity of the panning clouds
---@field public Stars brightness number @Multiplier for the brightness of the stars when the sun is below the horizon
---@field public Horizon color curve UCurveLinearColor
---@field public Zenith color curve UCurveLinearColor
---@field public Cloud color curve UCurveLinearColor
local BP_Sky_Sphere_C = {}

function BP_Sky_Sphere_C:RefreshMaterial() end

function BP_Sky_Sphere_C:UpdateSunDirection() end

---Construction script, the place to spawn components and do other setup.
function BP_Sky_Sphere_C:UserConstructionScript() end

