---@class UGameViewportSubsystem : UEngineSubsystem
local UGameViewportSubsystem = {}

---Helper function to set the position in the viewport for the Slot.
---Otherwise inverse DPI is applied to the position so that when the location is scaled
---by DPI, it ends up in the expected position.
---@param Slot FGameViewportWidgetSlot
---@param Widget UWidget
---@param Position FVector2D
---@param bRemoveDPIScale boolean
---@return FGameViewportWidgetSlot
function UGameViewportSubsystem.SetWidgetSlotPosition(Slot, Widget, Position, bRemoveDPIScale) end

---Helper function to set the desired size in the viewport for the Slot.
---@param Slot FGameViewportWidgetSlot
---@param Size FVector2D
---@return FGameViewportWidgetSlot
function UGameViewportSubsystem.SetWidgetSlotDesiredSize(Slot, Size) end

---Update the slot info of a previously added widget or Store the slot info for later use.
---@param Widget UWidget
---@param Slot FGameViewportWidgetSlot
function UGameViewportSubsystem:SetWidgetSlot(Widget, Slot) end

---Removes the widget from the viewport.
---@param Widget UWidget
function UGameViewportSubsystem:RemoveWidget(Widget) end

---
---@param Widget UWidget
---@return boolean
function UGameViewportSubsystem:IsWidgetAdded(Widget) end

---The slot info from previously added widget or info that is store for later.
---@param Widget UWidget
---@return FGameViewportWidgetSlot
function UGameViewportSubsystem:GetWidgetSlot(Widget) end

---Adds the widget to the game's viewport in the section dedicated to the player. This is valuable in a split screen
---game where you need to only show a widget over a player's portion of the viewport.
---@param Widget UWidget
---@param Player ULocalPlayer
---@param Slot FGameViewportWidgetSlot
---@return boolean
function UGameViewportSubsystem:AddWidgetForPlayer(Widget, Player, Slot) end

---Adds it to the game's viewport.
---@param Widget UWidget
---@param Slot FGameViewportWidgetSlot
---@return boolean
function UGameViewportSubsystem:AddWidget(Widget, Slot) end

