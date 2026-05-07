---DecalActor contains a DecalComponent which can be used to render material modifications on top of existing geometry.
---@class ADecalActor : AActor
---@field private Decal UDecalComponent @The decal component for this decal actor
---@field private ArrowComponent UArrowComponent @Reference to the editor only arrow visualization component
---@field private SpriteComponent UBillboardComponent @Reference to the billboard component
local ADecalActor = {}

---BEGIN DEPRECATED (use component functions now in level script)
---@param NewDecalMaterial UMaterialInterface
function ADecalActor:SetDecalMaterial(NewDecalMaterial) end

---@return UMaterialInterface
function ADecalActor:GetDecalMaterial() end

---@return UMaterialInstanceDynamic
function ADecalActor:CreateDynamicMaterialInstance() end

