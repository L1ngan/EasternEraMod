---Represents a menu in the ToolMenus system.
---An instance of this class is returned by basic APIs such as UToolMenus::RegisterMenu and UToolMenus::ExtendMenu.
---@class UToolMenu : UToolMenuBase
---@field public MenuName string
---@field public MenuParent string
---@field public StyleName string
---@field public TutorialHighlightName string
---@field public MenuType EMultiBoxType
---@field public bShouldCleanupContextOnDestroy boolean
---@field public bShouldCloseWindowAfterMenuSelection boolean
---@field public bCloseSelfOnly boolean
---@field public bSearchable boolean
---@field public bToolBarIsFocusable boolean
---@field public bSeparateSections boolean @Whether different sections should have separators automatically added between them.
---@field public bAllowToolBarWrapButton Unknown @Whether to (ever) allow the wrap button/overflow menu. Defauls to the style.
---@field public bToolBarForceSmallIcons boolean
---@field public bPreventCustomization boolean @Prevent menu from being customized
---@field public MenuOwner FToolMenuOwner
---@field public Context FToolMenuContext
---@field public Sections TArray<FToolMenuSection>
---@field public SubMenuParent UToolMenu
---@field public SubMenuSourceEntryName string
local UToolMenu = {}

---@param InObject UToolMenuEntryScript
function UToolMenu:RemoveMenuEntryObject(InObject) end

---@param Owner FToolMenuOwner
---@param Name string
---@param Parent string @[opt] 
---@param Type EMultiBoxType @[opt] 
function UToolMenu:InitMenu(Owner, Name, Parent, Type) end

---@param Owner string
---@param SectionName string
---@param Name string
---@param Label string
---@param ToolTip string
---@return UToolMenu
function UToolMenu:AddSubMenuScript(Owner, SectionName, Name, Label, ToolTip) end

---@param SectionName string
---@param Label string
---@param InsertName string @[opt] 
---@param InsertType EToolMenuInsertType @[opt] 
---@param Alignment EToolMenuSectionAlign @[opt] 
function UToolMenu:AddSectionScript(SectionName, Label, InsertName, InsertType, Alignment) end

---@param InObject UToolMenuEntryScript
function UToolMenu:AddMenuEntryObject(InObject) end

---@param SectionName string
---@param Args FToolMenuEntry
function UToolMenu:AddMenuEntry(SectionName, Args) end

---@param SectionName string
---@param Object UToolMenuSectionDynamic
function UToolMenu:AddDynamicSectionScript(SectionName, Object) end

