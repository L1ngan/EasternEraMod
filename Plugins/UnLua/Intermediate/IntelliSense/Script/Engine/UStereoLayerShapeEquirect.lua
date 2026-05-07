---@class UStereoLayerShapeEquirect : UStereoLayerShape
---@field public LeftUVRect FBox2D @Left source texture UVRect, specifying portion of input texture corresponding to left eye.
---@field public RightUVRect FBox2D @Right source texture UVRect, specifying portion of input texture corresponding to right eye.
---@field public LeftScale FVector2D @Left eye's texture coordinate scale after mapping to 2D.
---@field public RightScale FVector2D @Right eye's texture coordinate scale after mapping to 2D.
---@field public LeftBias FVector2D @Left eye's texture coordinate bias after mapping to 2D.
---@field public RightBias FVector2D @Right eye's texture coordinate bias after mapping to 2D.
---@field public Radius number @Sphere radius. As of UE 5.3, equirect layers are supported only by the Oculus OpenXR runtime and only with a radius of 0 (infinite sphere).
local UStereoLayerShapeEquirect = {}

---Set Equirect layer properties: UVRect, Scale, and Bias
---@param InScaleBiases FEquirectProps
function UStereoLayerShapeEquirect:SetEquirectProps(InScaleBiases) end

