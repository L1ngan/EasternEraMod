---A material that is rendered onto the surface of a mesh. A kind of 'bumper sticker' for a model.
---@class UDecalComponent : USceneComponent
---@field protected DecalMaterial UMaterialInterface @Decal material.
---@field public SortOrder integer @Controls the order in which decal elements are rendered.  Higher values draw later (on top). Setting many different sort orders on many different decals prevents sorting by state and can reduce performance.
---@field public FadeScreenSize number
---@field public FadeStartDelay number @Time in seconds to wait before beginning to fade out the decal. Set fade duration and start delay to 0 to make persistent.
---@field public FadeDuration number @Time in seconds for the decal to fade out. Set fade duration and start delay to 0 to make persistent. Only fades in active simulation or game.
---@field public FadeInDuration number
---@field public FadeInStartDelay number
---@field public bDestroyOwnerAfterFade boolean @Automatically destroys the owning actor after fully fading out.
---@field public DecalSize FVector @Decal size in local space (does not include the component scale), technically redundant but there for convenience
---@field public DecalColor FLinearColor @Decal color, can be accessed using the material Decal Color node.
local UDecalComponent = {}

---Sets the sort order for the decal component. Higher values draw later (on top). This will force the decal to reattach
---@param Value integer
function UDecalComponent:SetSortOrder(Value) end

---Set the FadeScreenSize for this decal component
---@param NewFadeScreenSize number
function UDecalComponent:SetFadeScreenSize(NewFadeScreenSize) end

---Sets the decal's fade start time, duration and if the owning actor should be destroyed after the decal is fully faded out.
---The default value of 0 for FadeStartDelay and FadeDuration makes the decal persistent. See DecalLifetimeOpacity material
---node to control the look of "fading out."
---@param StartDelay number
---@param Duration number
---@param DestroyOwnerAfterFade boolean @[opt] 
function UDecalComponent:SetFadeOut(StartDelay, Duration, DestroyOwnerAfterFade) end

---@param StartDelay number
---@param Duration number
function UDecalComponent:SetFadeIn(StartDelay, Duration) end

---setting decal material on decal component. This will force the decal to reattach
---@param NewDecalMaterial UMaterialInterface
function UDecalComponent:SetDecalMaterial(NewDecalMaterial) end

---Sets the decal color.
---@param Color FLinearColor
function UDecalComponent:SetDecalColor(Color) end

---@return number
function UDecalComponent:GetFadeStartDelay() end

---@return number
function UDecalComponent:GetFadeInStartDelay() end

---@return number
function UDecalComponent:GetFadeInDuration() end

---@return number
function UDecalComponent:GetFadeDuration() end

---Accessor for decal material
---@return UMaterialInterface
function UDecalComponent:GetDecalMaterial() end

---Utility to allocate a new Dynamic Material Instance, set its parent to the currently applied material, and assign it
---@return UMaterialInstanceDynamic
function UDecalComponent:CreateDynamicMaterialInstance() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UDecalComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UDecalComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UDecalComponent:AddAssetUserDataOfClass(InUserDataClass) end

