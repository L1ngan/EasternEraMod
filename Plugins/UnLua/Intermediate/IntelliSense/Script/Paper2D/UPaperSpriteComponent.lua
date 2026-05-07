---A component that handles rendering and collision for a single instance of a UPaperSprite asset.
---This component is created when you drag a sprite asset from the content browser into a Blueprint, or
---contained inside of the actor created when you drag one into the level.
---@class UPaperSpriteComponent : UMeshComponent
---@field protected SourceSprite UPaperSprite @The sprite asset used by this component
---@field protected SpriteColor FLinearColor @The color of the sprite (passed to the sprite material as a vertex color)
local UPaperSpriteComponent = {}

---Set color of the sprite
---@param NewColor FLinearColor
function UPaperSpriteComponent:SetSpriteColor(NewColor) end

---Change the PaperSprite used by this instance.
---@param NewSprite UPaperSprite
---@return boolean
function UPaperSpriteComponent:SetSprite(NewSprite) end

---Gets the PaperSprite used by this instance.
---@return UPaperSprite
function UPaperSpriteComponent:GetSprite() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UPaperSpriteComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UPaperSpriteComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UPaperSpriteComponent:AddAssetUserDataOfClass(InUserDataClass) end

