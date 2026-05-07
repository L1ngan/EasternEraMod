---Settings for UDIMs in the UVEditor
---@class UUVEditorUDIMProperties : UInteractiveToolPropertySet
---@field public UDIMSourceAsset string
---@field public UDIMSourceTexture UTexture2D @Texture asset to source UDIM information from
---@field public ActiveUDIMs TArray<FUDIMSpecifier> @Currently active UDIM set
local UUVEditorUDIMProperties = {}

---Set UDIM Layout from selected texture asset
function UUVEditorUDIMProperties:SetUDIMsFromTexture() end

---Set UDIM Layout from selected asset's UVs
function UUVEditorUDIMProperties:SetUDIMsFromAsset() end

---@return TArray_string_
function UUVEditorUDIMProperties:GetAssetNames() end

---@return integer
function UUVEditorUDIMProperties:AssetByIndex() end

