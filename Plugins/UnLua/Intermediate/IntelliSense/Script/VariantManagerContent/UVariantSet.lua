---@class UVariantSet : UObject
---@field private bExpanded boolean
---@field private Variants TArray<UVariant>
---@field private Thumbnail UTexture2D
local UVariantSet = {}

---Sets the thumbnail to use for this variant set. Can receive nullptr to clear it
---@param NewThumbnail UTexture2D
function UVariantSet:SetThumbnailFromTexture(NewThumbnail) end

---@param FilePath string
function UVariantSet:SetThumbnailFromFile(FilePath) end

---Sets the thumbnail from the active editor viewport. Doesn't do anything if the Editor is not available
function UVariantSet:SetThumbnailFromEditorViewport() end

---@param WorldContextObject UObject
---@param CameraTransform FTransform
---@param FOVDegrees number @[opt] 
---@param MinZ number @[opt] 
---@param Gamma number @[opt] 
function UVariantSet:SetThumbnailFromCamera(WorldContextObject, CameraTransform, FOVDegrees, MinZ, Gamma) end

---@param NewDisplayText string
function UVariantSet:SetDisplayText(NewDisplayText) end

---@param VariantName string
---@return UVariant
function UVariantSet:GetVariantByName(VariantName) end

---@param VariantIndex integer
---@return UVariant
function UVariantSet:GetVariant(VariantIndex) end

---Gets the thumbnail currently used for this variant set
---@return UTexture2D
function UVariantSet:GetThumbnail() end

---@return ULevelVariantSets
function UVariantSet:GetParent() end

---@return integer
function UVariantSet:GetNumVariants() end

---@return string
function UVariantSet:GetDisplayText() end

