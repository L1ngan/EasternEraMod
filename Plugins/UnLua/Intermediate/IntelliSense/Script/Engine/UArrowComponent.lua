---A simple arrow rendered using lines. Useful for indicating which way an object is facing.
---@class UArrowComponent : UPrimitiveComponent
---@field public ArrowColor FColor @Color to draw arrow
---@field public ArrowSize number @Relative size to scale drawn arrow by
---@field public ArrowLength number @Total length of drawn arrow including head
---@field public ScreenSize number @The size on screen to limit this arrow to (in screen space)
---@field public bIsScreenSizeScaled boolean @Set to limit the screen size of this arrow
---@field public bTreatAsASprite boolean @If true, don't show the arrow when EngineShowFlags.BillboardSprites is disabled.
---@field public SpriteInfo FSpriteCategoryInfo @Sprite category information regarding the arrow component, if being treated as a sprite.
---@field public bLightAttachment boolean @If true, this arrow component is attached to a light actor
---@field public bUseInEditorScaling boolean @Whether to use in-editor arrow scaling (i.e. to be affected by the global arrow scale)
local UArrowComponent = {}

---@param bNewValue boolean
function UArrowComponent:SetUseInEditorScaling(bNewValue) end

---@param bNewValue boolean
function UArrowComponent:SetTreatAsASprite(bNewValue) end

---@param NewScreenSize number
function UArrowComponent:SetScreenSize(NewScreenSize) end

---@param bNewValue boolean
function UArrowComponent:SetIsScreenSizeScaled(bNewValue) end

---@param NewSize number
function UArrowComponent:SetArrowSize(NewSize) end

---@param NewLength number
function UArrowComponent:SetArrowLength(NewLength) end

---@param NewColor FColor
function UArrowComponent:SetArrowFColor(NewColor) end

---Updates the arrow's colour, and tells it to refresh
---@param NewColor FLinearColor
function UArrowComponent:SetArrowColor(NewColor) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UArrowComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UArrowComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UArrowComponent:AddAssetUserDataOfClass(InUserDataClass) end

