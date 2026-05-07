---Material Instances may be used to change the appearance of a material without incurring an expensive recompilation of the material.
---General modification of the material cannot be supported without recompilation, so the instances are limited to changing the values of
---predefined material parameters. The parameters are statically defined in the compiled material by a unique name, type and default value.
---@class UMaterialInstanceConstant : UMaterialInstance
---@field public ParameterStateId FGuid @Unique ID for this material instance's parameter set Updated on changes in the editor to allow those changes to be detected
---@field public PhysMaterialMask UPhysicalMaterialMask @Physical material mask to use for this graphics material. Used for sounds, effects etc.
local UMaterialInstanceConstant = {}

---Set an override material which will be used when rendering with nanite.
---@param bInEnableOverride boolean
---@param InOverrideMaterial UMaterialInterface
function UMaterialInstanceConstant:SetNaniteOverrideMaterial(bInEnableOverride, InOverrideMaterial) end

---Get the MIC vector parameter value
---@param ParameterName string
---@return FLinearColor
function UMaterialInstanceConstant:K2_GetVectorParameterValue(ParameterName) end

---Get the MIC texture parameter value
---@param ParameterName string
---@return UTexture
function UMaterialInstanceConstant:K2_GetTextureParameterValue(ParameterName) end

---Get the MIC texture collection parameter value
---@param ParameterName string
---@return UTextureCollection
function UMaterialInstanceConstant:K2_GetTextureCollectionParameterValue(ParameterName) end

---Get the scalar (float) parameter value from an MIC
---@param ParameterName string
---@return number
function UMaterialInstanceConstant:K2_GetScalarParameterValue(ParameterName) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UMaterialInstanceConstant:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UMaterialInstanceConstant:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UMaterialInstanceConstant:AddAssetUserDataOfClass(InUserDataClass) end

