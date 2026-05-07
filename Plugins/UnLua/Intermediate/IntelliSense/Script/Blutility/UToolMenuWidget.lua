---A base ToolMenu widget that can support Menus and Toolbars.
---Menus can be modified and added to with Blueprint or Python commands using the ToolMenus system.
---@class UToolMenuWidget : UWidget
---@field public MenuName string @Name of toolbar for registering with ToolMenus.      This has the editor utility widget pre-pended to it to make the FullMenuName.
---@field public MenuType EMultiBoxType
---@field protected FullMenuName string @The final usable name that can be retrieved by Python/Blueprint.      Use this value when trying to Extend menus.
local UToolMenuWidget = {}

