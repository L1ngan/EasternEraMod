---struct with all the settings we want in USpecularProfile, separate to make it easer to pass this data around in the engine.
---@class FSpecularProfileStruct
---@field public Format ESpecularProfileFormat @Define the format driving the sampling of the specular LUT.
---@field public ViewColor FRuntimeCurveLinearColor @Define the view facing color. Exemple with View/Light mode: color at 0 is applied when NoV=0 (view grazing angle)  while color at 1 is applied when NoV=1 (view facing angle).
---@field public LightColor FRuntimeCurveLinearColor @Define the light facing color Exemple with View/Light mode: color at 0 is applied when NoL=0 (light hit the surface at grazing angle)  while color at 1 is applied when NoV=1 (light hit the surface at facing angle).
---@field public Texture UTexture2D @Define the texture used as a specular profile
local FSpecularProfileStruct = {}
