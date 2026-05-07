---Utility class to create simple pop-up dialogs to notify the user of task completion,
---or to ask them to make simple Yes/No/Retry/Cancel type decisions.
---@class UEditorDialogLibrary : UBlueprintFunctionLibrary
local UEditorDialogLibrary = {}

---Open a modal suppressable warning window, if suppressed will return the default value
---@param Title string
---@param Message string
---@param InIniSettingName string
---@param InIniSettingFileNameOverride string
---@param bDefaultValue boolean @[opt] 
---@return boolean
function UEditorDialogLibrary.ShowSuppressableWarningDialog(Title, Message, InIniSettingName, InIniSettingFileNameOverride, bDefaultValue) end

---Open a modal message box dialog containing a details view for inspecting / modifying multiples UObjects.
---@param Title string
---@param InOutObjects TArray_UObject_
---@param Options FEditorDialogLibraryObjectDetailsViewOptions @[opt] 
---@return boolean
function UEditorDialogLibrary.ShowObjectsDetailsView(Title, InOutObjects, Options) end

---Open a modal message box dialog containing a details view for inspecting / modifying a UObject.
---@param Title string
---@param InOutObject UObject
---@param Options FEditorDialogLibraryObjectDetailsViewOptions @[opt] 
---@return boolean
function UEditorDialogLibrary.ShowObjectDetailsView(Title, InOutObject, Options) end

---Open a modal message box dialog with the given message. If running in "-unattended" mode it will immediately
---return the value specified by DefaultValue. If not running in "-unattended" mode then it will block execution
---until the user makes a decision, at which point their decision will be returned.
---@param Title string
---@param Message string
---@param MessageType integer
---@param DefaultValue integer @[opt] 
---@param MessageCategory EAppMsgCategory @[opt] 
---@return integer
function UEditorDialogLibrary.ShowMessage(Title, Message, MessageType, DefaultValue, MessageCategory) end

