---@class UToolMenus : UObject
---@field private CustomizedMenus TArray<FCustomizedToolMenu>
---@field private MenuSubstitutionsDuringGenerate TMap<string, string> @Allow substituting one menu for another during generate but not during find or extend
---@field private Menus TMap<string, UToolMenu>
---@field private MenuProfiles TMap<string, FToolMenuProfileMap> @MenuName
local UToolMenus = {}

---Removes all entries that were registered under a specific owner name
---@param InOwnerName string
function UToolMenus:UnregisterOwnerByName(InOwnerName) end

---Sets where to insert a section into a menu when generating relative to other section names.
---@param MenuName string
---@param SectionName string
---@param OtherSectionName string
---@param PositionType EToolMenuInsertType
function UToolMenus:SetSectionPosition(MenuName, SectionName, OtherSectionName, PositionType) end

---Sets a section's displayed label text.
---@param MenuName string
---@param SectionName string
---@param Label string
function UToolMenus:SetSectionLabel(MenuName, SectionName, Label) end

---Removes a section from a given menu
---@param MenuName string
---@param Section string
function UToolMenus:RemoveSection(MenuName, Section) end

---Unregisters menu entry object from blueprint/script
---@param MenuEntryObject UToolMenuEntryScript
---@return boolean
function UToolMenus.RemoveMenuEntryObject(MenuEntryObject) end

---Unregisters a menu by name
---@param MenuName string
function UToolMenus:RemoveMenu(MenuName) end

---Removes a menu entry from a given menu and section
---@param MenuName string
---@param Section string
---@param Name string
function UToolMenus:RemoveEntry(MenuName, Section, Name) end

---Registers a menu by name
---@param Name string
---@param Parent string @[opt] 
---@param Type EMultiBoxType @[opt] 
---@param bWarnIfAlreadyRegistered boolean @[opt] 
---@return UToolMenu
function UToolMenus:RegisterMenu(Name, Parent, Type, bWarnIfAlreadyRegistered) end

---Rebuilds all widgets generated from a specific menu.
---@param Name string
---@return boolean
function UToolMenus:RefreshMenuWidget(Name) end

---Rebuilds all currently generated widgets next tick.
function UToolMenus:RefreshAllWidgets() end

---Determines if a menu has already been registered.
---@param Name string
---@return boolean
function UToolMenus:IsMenuRegistered(Name) end

---@return UToolMenus
function UToolMenus.Get() end

---Finds an existing menu that has been registered or extended.
---@param Name string
---@return UToolMenu
function UToolMenus:FindMenu(Name) end

---Finds a context object of a given class if it exists
---@param InContext FToolMenuContext
---@param InClass TSubclassOf_UObject_
---@return UObject
function UToolMenus.FindContext(InContext, InClass) end

---Extends a menu without registering the menu or claiming ownership of it. Ok to call even if menu does not exist yet.
---@param Name string
---@return UToolMenu
function UToolMenus:ExtendMenu(Name) end

---Registers menu entry object from blueprint/script
---@param MenuEntryObject UToolMenuEntryScript
---@return boolean
function UToolMenus.AddMenuEntryObject(MenuEntryObject) end

