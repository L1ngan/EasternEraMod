---A 2d texture that will be rendered always facing the camera.
---@class UBillboardComponent : UPrimitiveComponent
---@field public Sprite UTexture2D
---@field public bIsScreenSizeScaled boolean
---@field public ScreenSize number
---@field public U number
---@field public UL number
---@field public V number
---@field public VL number
---@field public OpacityMaskRefVal number @The billboard is not rendered where texture opacity < OpacityMaskRefVal
---@field public SpriteInfo FSpriteCategoryInfo @Sprite category information regarding the component
---@field public bUseInEditorScaling boolean @Whether to use in-editor arrow scaling (i.e. to be affected by the global arrow scale)
---@field public bShowLockedLocation boolean
local UBillboardComponent = {}

---Change the sprite's UVs
---@param NewU integer
---@param NewUL integer
---@param NewV integer
---@param NewVL integer
function UBillboardComponent:SetUV(NewU, NewUL, NewV, NewVL) end

---Change the sprite texture and the UV's used by this component
---@param NewSprite UTexture2D
---@param NewU integer
---@param NewUL integer
---@param NewV integer
---@param NewVL integer
function UBillboardComponent:SetSpriteAndUV(NewSprite, NewU, NewUL, NewV, NewVL) end

---Change the sprite texture used by this component
---@param NewSprite UTexture2D
function UBillboardComponent:SetSprite(NewSprite) end

---Changed the opacity masked used by this component
---@param RefVal number
function UBillboardComponent:SetOpacityMaskRefVal(RefVal) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UBillboardComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UBillboardComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UBillboardComponent:AddAssetUserDataOfClass(InUserDataClass) end

