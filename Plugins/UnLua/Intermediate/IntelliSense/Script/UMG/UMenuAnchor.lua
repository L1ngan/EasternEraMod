---The Menu Anchor allows you to specify an location that a popup menu should be anchored to,
---and should be summoned from.
---* Single Child
---* Popup
---@class UMenuAnchor : UContentWidget
---@field public MenuClass TSubclassOf<UUserWidget> @The widget class to spawn when the menu is required.  Creates the widget freshly each time. If you want to customize the creation of the popup, you should bind a function to OnGetMenuContentEvent instead.
---@field public OnGetMenuContentEvent Delegate
---@field public OnGetUserMenuContentEvent Delegate @Called when the menu content is requested to allow a more customized handling over what to display
---@field public Placement integer @The placement location of the summoned widget.
---@field public bFitInWindow boolean @Should the menu anchor attempt to fit the menu inside the window.
---@field public ShouldDeferPaintingAfterWindowContent boolean
---@field public UseApplicationMenuStack boolean @Does this menu behave like a normal stacked menu? Set it to false to control the menu's lifetime yourself.
---@field public ShowMenuBackground boolean @For menus using the application menu stack, should the window background be visible?
---@field public OnMenuOpenChanged MulticastDelegate @Called when the opened state of the menu changes
local UMenuAnchor = {}

---Toggles the menus open state.
---@param bFocusOnOpen boolean
function UMenuAnchor:ToggleOpen(bFocusOnOpen) end

---Returns true if we should open the menu due to a click. Sometimes we should not, if
---the same MouseDownEvent that just closed the menu is about to re-open it because it
---happens to land on the button.
---@return boolean
function UMenuAnchor:ShouldOpenDueToClick() end

---TODO UMG Add Set MenuClass
---@param InPlacement integer
function UMenuAnchor:SetPlacement(InPlacement) end

---Opens the menu if it is not already open
---@param bFocusMenu boolean
function UMenuAnchor:Open(bFocusMenu) end

---Returns true if the popup is open; false otherwise.
---@return boolean
function UMenuAnchor:IsOpen() end

---Returns whether this menu has open submenus
---@return boolean
function UMenuAnchor:HasOpenSubMenus() end

---@return UUserWidget
function UMenuAnchor:GetUserWidget__DelegateSignature() end

---Returns the current menu position
---@return FVector2D
function UMenuAnchor:GetMenuPosition() end

---@param bFit boolean
function UMenuAnchor:FitInWindow(bFit) end

---Closes the menu if it is currently open.
function UMenuAnchor:Close() end

