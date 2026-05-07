---@class UVariant : UObject
---@field private Dependencies TArray<FVariantDependency>
---@field private ObjectBindings TArray<UVariantObjectBinding>
---@field private Thumbnail UTexture2D
local UVariant = {}

function UVariant:SwitchOn() end

---Sets the thumbnail to use for this variant. Can receive nullptr to clear it
---@param NewThumbnail UTexture2D
function UVariant:SetThumbnailFromTexture(NewThumbnail) end

---@param FilePath string
function UVariant:SetThumbnailFromFile(FilePath) end

---Sets the thumbnail from the active editor viewport. Doesn't do anything if the Editor is not available
function UVariant:SetThumbnailFromEditorViewport() end

---@param WorldContextObject UObject
---@param CameraTransform FTransform
---@param FOVDegrees number @[opt] 
---@param MinZ number @[opt] 
---@param Gamma number @[opt] 
function UVariant:SetThumbnailFromCamera(WorldContextObject, CameraTransform, FOVDegrees, MinZ, Gamma) end

---@param NewDisplayText string
function UVariant:SetDisplayText(NewDisplayText) end

---@param Index integer
---@param Dependency FVariantDependency @[out] 
function UVariant:SetDependency(Index, Dependency) end

---Returns true if none of our properties are dirty
---@return boolean
function UVariant:IsActive() end

---Gets the thumbnail currently used for this variant
---@return UTexture2D
function UVariant:GetThumbnail() end

---@return UVariantSet
function UVariant:GetParent() end

---@return integer
function UVariant:GetNumDependencies() end

---@return integer
function UVariant:GetNumActors() end

---@return string
function UVariant:GetDisplayText() end

---Returns all the variants that have this variant as a dependency
---@param LevelVariantSets ULevelVariantSets
---@param bOnlyEnabledDependencies boolean
---@return TArray_UVariant_
function UVariant:GetDependents(LevelVariantSets, bOnlyEnabledDependencies) end

---Get the dependency at index 'Index' by value. Will crash if index is invalid
---@param Index integer
---@return FVariantDependency
function UVariant:GetDependency(Index) end

---@param ActorIndex integer
---@return AActor
function UVariant:GetActor(ActorIndex) end

---@param Index integer
function UVariant:DeleteDependency(Index) end

---@param Dependency FVariantDependency @[out] 
---@return integer
function UVariant:AddDependency(Dependency) end

