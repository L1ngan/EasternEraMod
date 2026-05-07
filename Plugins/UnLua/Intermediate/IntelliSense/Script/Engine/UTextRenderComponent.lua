---Renders text in the world with given font. Contains usual font related attributes such as Scale, Alignment, Color etc.
---@class UTextRenderComponent : UPrimitiveComponent
---@field public Text string @Text content, can be multi line using <br> as line separator
---@field public TextMaterial UMaterialInterface @Text material
---@field public Font UFont @Text font
---@field public HorizontalAlignment integer @Horizontal text alignment
---@field public VerticalAlignment integer @Vertical text alignment
---@field public TextRenderColor FColor @Color of the text, can be accessed as vertex color
---@field public XScale number @Horizontal scale, default is 1.0
---@field public YScale number @Vertical scale, default is 1.0
---@field public WorldSize number @Vertical size of the fonts largest character in world units. Transform, XScale and YScale will affect final size.
---@field public InvDefaultSize number @The inverse of the Font's character height.
---@field public HorizSpacingAdjust number @Horizontal adjustment per character, default is 0.0
---@field public VertSpacingAdjust number @Vertical adjustment per character, default is 0.0
---@field public bAlwaysRenderAsText boolean @Allows text to draw unmodified when using debug visualization modes. *
local UTextRenderComponent = {}

---Change the text Y scale and signal the primitives to be rebuilt
---@param Value number
function UTextRenderComponent:SetYScale(Value) end

---Change the text X scale and signal the primitives to be rebuilt
---@param Value number
function UTextRenderComponent:SetXScale(Value) end

---Change the world size of the text and signal the primitives to be rebuilt
---@param Value number
function UTextRenderComponent:SetWorldSize(Value) end

---Change the text vertical spacing adjustment and signal the primitives to be rebuilt
---@param Value number
function UTextRenderComponent:SetVertSpacingAdjust(Value) end

---Change the vertical alignment and signal the primitives to be rebuilt
---@param Value integer
function UTextRenderComponent:SetVerticalAlignment(Value) end

---Change the text render color and signal the primitives to be rebuilt
---@param Value FColor
function UTextRenderComponent:SetTextRenderColor(Value) end

---Change the text material and signal the primitives to be rebuilt
---@param Material UMaterialInterface
function UTextRenderComponent:SetTextMaterial(Material) end

---Change the text value and signal the primitives to be rebuilt
---@param Value string
function UTextRenderComponent:SetText(Value) end

---Change the text horizontal spacing adjustment and signal the primitives to be rebuilt
---@param Value number
function UTextRenderComponent:SetHorizSpacingAdjust(Value) end

---Change the horizontal alignment and signal the primitives to be rebuilt
---@param Value integer
function UTextRenderComponent:SetHorizontalAlignment(Value) end

---Change the font and signal the primitives to be rebuilt
---@param Value UFont
function UTextRenderComponent:SetFont(Value) end

---Change the text value and signal the primitives to be rebuilt
---@param Value string
function UTextRenderComponent:K2_SetText(Value) end

---Get world space size of text
---@return FVector
function UTextRenderComponent:GetTextWorldSize() end

---Get local size of text
---@return FVector
function UTextRenderComponent:GetTextLocalSize() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UTextRenderComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UTextRenderComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UTextRenderComponent:AddAssetUserDataOfClass(InUserDataClass) end

