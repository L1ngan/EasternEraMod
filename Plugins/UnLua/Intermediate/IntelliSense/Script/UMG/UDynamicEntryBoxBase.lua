---Base for widgets that support a dynamic number of auto-generated entries at both design- and run-time.
---Contains all functionality needed to create, construct, and cache an arbitrary number of entry widgets, but exposes no means of entry creation or removal
---It's up to child classes to decide how they want to perform the population (some may do so entirely on their own without exposing a thing)
---@class UDynamicEntryBoxBase : UWidget
---@field protected EntrySpacing FVector2D @The padding to apply between entries in the box. Note horizontal boxes only use the X and vertical boxes only use Y. Value is also ignored for the first entry in the box. Wrap and Overlay types use both X and Y for spacing.
---@field protected SpacingPattern TArray<FVector2D> @The looping sequence of entry paddings to apply as entries are created. Overlay boxes only. Ignores EntrySpacing if not empty.
---@field protected EntryBoxType EDynamicBoxType @The type of box panel into which created entries are added. Some differences in functionality exist between each type.
---@field protected EntrySizeRule FSlateChildSize @Sizing rule to apply to generated entries. Horizontal/Vertical boxes only.
---@field protected EntryHorizontalAlignment integer @Horizontal alignment of generated entries. Horizontal/Vertical/Wrap boxes only.
---@field protected EntryVerticalAlignment integer @Vertical alignment of generated entries. Horizontal/Vertical/Wrap boxes only.
---@field protected MaxElementSize integer @The maximum size of each entry in the dominant axis of the box. Vertical/Horizontal boxes only.
---@field protected RadialBoxSettings FRadialBoxSettings @Settings only relevant to RadialBox
---@field private EntryWidgetPool FUserWidgetPool
local UDynamicEntryBoxBase = {}

---@param InSettings FRadialBoxSettings
function UDynamicEntryBoxBase:SetRadialSettings(InSettings) end

---@param InEntrySpacing FVector2D
function UDynamicEntryBoxBase:SetEntrySpacing(InEntrySpacing) end

---@return integer
function UDynamicEntryBoxBase:GetNumEntries() end

---@return TArray_UUserWidget_
function UDynamicEntryBoxBase:GetAllEntries() end

