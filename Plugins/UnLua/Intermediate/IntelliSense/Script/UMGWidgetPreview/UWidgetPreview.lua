---@class UWidgetPreview : UObject
---@field private WidgetType FPreviewableWidgetVariant @Widget to preview.
---@field private SlotWidgetTypes TMap<string, FPreviewableWidgetVariant> @Widget per-slot, if WidgetType has any.
---@field private bShouldOverrideWidgetSize boolean @Widget Custom Size Override
---@field private OverriddenWidgetSize FVector2D
---@field private WidgetInstance UUserWidget
---@field private SlotNameCache TArray<string> @Slot names available in WidgetType (if any).
---@field private WidgetReferenceCache TArray<TWeakObjectPtr<UUserWidget>> @Widgets here should be checked for validity when a new one is assigned, to allow tear-down functionality.
local UWidgetPreview = {}

---@return TArray_string_
function UWidgetPreview:GetWidgetSlotNames() end

---Returns slot names not already occupied in SlotWidgets.
---@return TArray_string_
function UWidgetPreview:GetAvailableWidgetSlotNames() end

