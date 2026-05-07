---A panel for defining a region of the UI that should allow users to drag the window on desktop platforms.
---@class UWindowTitleBarArea : UContentWidget
---@field public bWindowButtonsEnabled boolean @Should the title bar area diaplay window minimize/maximize/close buttons.
---@field public bDoubleClickTogglesFullscreen boolean @Should double clicking the title bar area toggle fullscreen instead of maximizing the window.
local UWindowTitleBarArea = {}

---@param InVerticalAlignment integer
function UWindowTitleBarArea:SetVerticalAlignment(InVerticalAlignment) end

---@param InPadding FMargin
function UWindowTitleBarArea:SetPadding(InPadding) end

---@param InHorizontalAlignment integer
function UWindowTitleBarArea:SetHorizontalAlignment(InHorizontalAlignment) end

