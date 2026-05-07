---Utility component for drawing a view frustum. Origin is at the component location, frustum points down position X axis.
---@class UDrawFrustumComponent : UPrimitiveComponent
---@field public bFrustumEnabled boolean @Enable or disable frustum visualization for this camera
---@field public FrustumColor FColor @Color to draw the wireframe frustum.
---@field public FrustumAngle number @Angle of longest dimension of view shape. If the angle is 0 then an orthographic projection is used
---@field public FrustumAspectRatio number @Ratio of horizontal size over vertical size.
---@field public FrustumStartDist number @Distance from origin to start drawing the frustum.
---@field public FrustumEndDist number @Distance from origin to stop drawing the frustum.
---@field public Texture UTexture @optional texture to show on the near plane
local UDrawFrustumComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UDrawFrustumComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UDrawFrustumComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UDrawFrustumComponent:AddAssetUserDataOfClass(InUserDataClass) end

