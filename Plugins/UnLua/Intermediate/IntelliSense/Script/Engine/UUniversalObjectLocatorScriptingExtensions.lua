---Function library containing methods that should be hoisted onto FUniversalObjectLocators for scripting
---@class UUniversalObjectLocatorScriptingExtensions : UBlueprintFunctionLibrary
local UUniversalObjectLocatorScriptingExtensions = {}

---Construct a new universal object locator from a string
---@param InString string
---@return FUniversalObjectLocator
function UUniversalObjectLocatorScriptingExtensions.UniversalObjectLocatorFromString(InString) end

---Convert the specified locator to its string representation
---@param Locator FUniversalObjectLocator
---@return string
function UUniversalObjectLocatorScriptingExtensions.ToString(Locator) end

---Attempt to resolve the object locator by unloading the object if possible.
---@param Locator FUniversalObjectLocator
---@param Context UObject @[opt] 
function UUniversalObjectLocatorScriptingExtensions.SyncUnload(Locator, Context) end

---Attempt to resolve the object locator by finding or loading the object.
---@param Locator FUniversalObjectLocator
---@param Context UObject @[opt] 
---@return UObject
function UUniversalObjectLocatorScriptingExtensions.SyncLoad(Locator, Context) end

---Attempt to resolve the object locator by finding the object. If it is not currently loaded or created,
---@param Locator FUniversalObjectLocator
---@param Context UObject @[opt] 
---@return UObject
function UUniversalObjectLocatorScriptingExtensions.SyncFind(Locator, Context) end

---Construct a new universal object locator
---@param Object UObject
---@param Context UObject
---@return FUniversalObjectLocator
function UUniversalObjectLocatorScriptingExtensions.MakeUniversalObjectLocator(Object, Context) end

---Check whether the specified locator is empty; not equivalent to Resolve() != None.
---An empty locator will never resolve to a valid object.
---@param Locator FUniversalObjectLocator
---@return boolean
function UUniversalObjectLocatorScriptingExtensions.IsEmpty(Locator) end

