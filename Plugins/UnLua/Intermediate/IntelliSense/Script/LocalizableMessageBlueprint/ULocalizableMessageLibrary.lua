---BlueprintFunctionLibrary for LocalizableMessage
---@class ULocalizableMessageLibrary : UBlueprintFunctionLibrary
local ULocalizableMessageLibrary = {}

---Resets the Localizable Message
---@param Message FLocalizableMessage @[out] 
function ULocalizableMessageLibrary.Reset_LocalizableMessage(Message) end

---Returns true if the message is empty
---@param Message FLocalizableMessage
---@return boolean
function ULocalizableMessageLibrary.IsEmpty_LocalizableMessage(Message) end

---Conversion function from LocalizableMessage to FText.
---@param WorldContextObject UObject
---@param Message FLocalizableMessage
---@return string
function ULocalizableMessageLibrary.Conv_LocalizableMessageToText(WorldContextObject, Message) end

