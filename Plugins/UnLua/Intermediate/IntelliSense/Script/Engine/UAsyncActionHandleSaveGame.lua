---Async action to handle async load/save of a USaveGame. This can be subclassed by a specific game
---@class UAsyncActionHandleSaveGame : UBlueprintAsyncActionBase
---@field public Completed MulticastDelegate @Delegate called when the save/load completes
---@field protected SaveGameObject USaveGame @The object that was either saved or loaded
local UAsyncActionHandleSaveGame = {}

---Schedule an async save to a specific slot. UGameplayStatics::AsyncSaveGameToSlot is the native version of this.
---When the save has succeeded or failed, the completed pin is activated with success/failure and the save game object.
---Keep in mind that some platforms may not support trying to load and save at the same time.
---@param WorldContextObject UObject
---@param SaveGameObject USaveGame
---@param SlotName string
---@param UserIndex integer
---@return UAsyncActionHandleSaveGame
function UAsyncActionHandleSaveGame.AsyncSaveGameToSlot(WorldContextObject, SaveGameObject, SlotName, UserIndex) end

---Schedule an async load of a specific slot. UGameplayStatics::AsyncLoadGameFromSlot is the native version of this.
---When the load has succeeded or failed, the completed pin is activated with success/failure and the newly loaded save game object if valid.
---Keep in mind that some platforms may not support trying to load and save at the same time.
---@param WorldContextObject UObject
---@param SlotName string
---@param UserIndex integer
---@return UAsyncActionHandleSaveGame
function UAsyncActionHandleSaveGame.AsyncLoadGameFromSlot(WorldContextObject, SlotName, UserIndex) end

