---A 2d material that will be rendered always facing the camera.
---@class UMaterialBillboardComponent : UPrimitiveComponent
---@field public Elements TArray<FMaterialSpriteElement> @Current array of material billboard elements
local UMaterialBillboardComponent = {}

---Set all elements of this material billboard component
---@param NewElements TArray_FMaterialSpriteElement_
function UMaterialBillboardComponent:SetElements(NewElements) end

---Adds an element to the sprite.
---@param Material UMaterialInterface
---@param DistanceToOpacityCurve UCurveFloat
---@param bSizeIsInScreenSpace boolean
---@param BaseSizeX number
---@param BaseSizeY number
---@param DistanceToSizeCurve UCurveFloat
function UMaterialBillboardComponent:AddElement(Material, DistanceToOpacityCurve, bSizeIsInScreenSpace, BaseSizeX, BaseSizeY, DistanceToSizeCurve) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UMaterialBillboardComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UMaterialBillboardComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UMaterialBillboardComponent:AddAssetUserDataOfClass(InUserDataClass) end

