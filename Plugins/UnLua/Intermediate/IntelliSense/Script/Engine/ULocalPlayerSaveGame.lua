---Abstract subclass of USaveGame that provides utility functions that let you associate a Save Game object with a specific local player.
---These objects can also be loaded using the functions on GameplayStatics, but you would need to call functions like InitializeSaveGame manually.
---For simple games, it is fine to blueprint this class directly and add parameters and override functions in blueprint,
---but for complicated games you will want to subclass this in native code and set up proper versioning.
---@class ULocalPlayerSaveGame : USaveGame
---@field protected OwningPlayer ULocalPlayer @The local player this is connected to, can be null if subclasses override Get/Set Local Player or it hasn't been initialized
---@field protected SaveSlotName string @The slot name this was loaded from and that will be used to save to in the future
---@field protected SavedDataVersion integer @The value of GetLatestDataVersion when this was last saved. Subclasses can override GetLatestDataVersion and then handle fixups in HandlePostLoad. This defaults to 0 so old save games that didn't previously subclass ULocalPlayerSaveGame will have 0 instead of the invalid version.
---@field protected LoadedDataVersion integer @The value of SavedDataVersion when a save was last loaded, this will be -1 for newly created saves
---@field protected CurrentSaveRequest integer @Integer that is incremented every time a save has been requested in the current session, can be used to know if one is in progress
---@field protected LastSuccessfulSaveRequest integer @Integer that is set when a save completes successfully, if this equals RequestedSaveCount then the last save was successful
---@field protected LastErrorSaveRequest integer @Integer that is set when a save fails
local ULocalPlayerSaveGame = {}

---Returns true if a save was ever requested, may still be in progress
---@return boolean
function ULocalPlayerSaveGame:WasSaveRequested() end

---Returns true if this was loaded from an existing save
---@return boolean
function ULocalPlayerSaveGame:WasLoaded() end

---Returns true if it has been saved at least once and the last save was successful
---@return boolean
function ULocalPlayerSaveGame:WasLastSaveSuccessful() end

---Synchronously save using the slot and user index, stalling the main thread until it completes.
---This will return true if the save was requested, and errors should be handled by the HandlePostSave function that will be called immediately.
---@return boolean
function ULocalPlayerSaveGame:SaveGameToSlotForLocalPlayer() end

---Resets all saved data to default values, called when the load fails or manually
function ULocalPlayerSaveGame:ResetToDefault() end

---Blueprint event called to reset all saved data to default, called when the load fails or manually
function ULocalPlayerSaveGame:OnResetToDefault() end

---Blueprint event called before saving, do any game-specific fixup here
function ULocalPlayerSaveGame:OnPreSave() end

---Blueprint event called after saving finishes with success/failure result
---@param bSuccess boolean
function ULocalPlayerSaveGame:OnPostSave(bSuccess) end

---Blueprint event called after loading, is not called for newly created saves
function ULocalPlayerSaveGame:OnPostLoad() end

---Synchronously loads a save game object in the specified slot for the local player, stalling the main thread until it completes.
---This will return null for invalid parameters, but will create a new instance if the parameters are valid but loading fails.
---@param SaveGameClass TSubclassOf_ULocalPlayerSaveGame_
---@param LocalPlayerController APlayerController
---@param SlotName string
---@return ULocalPlayerSaveGame
function ULocalPlayerSaveGame.LoadOrCreateSaveGameForLocalPlayer(SaveGameClass, LocalPlayerController, SlotName) end

---Returns true if a save is in progress
---@return boolean
function ULocalPlayerSaveGame:IsSaveInProgress() end

---Returns the save slot name to use
---@return string
function ULocalPlayerSaveGame:GetSaveSlotName() end

---Returns the game-specific version number this was last saved/loaded as
---@return integer
function ULocalPlayerSaveGame:GetSavedDataVersion() end

---Returns the user index to save to, based on Local Player by default
---@return integer
function ULocalPlayerSaveGame:GetPlatformUserIndex() end

---Returns the platform user to save to, based on Local Player by default
---@return FPlatformUserId
function ULocalPlayerSaveGame:GetPlatformUserId() end

---Returns the local player controller this is associated with, this will be valid if it is ready to save
---@return APlayerController
function ULocalPlayerSaveGame:GetLocalPlayerController() end

---Returns the latest save data version, this is used when the new data is saved
---@return integer
function ULocalPlayerSaveGame:GetLatestDataVersion() end

---Returns the invalid save data version, which means it has never been saved/loaded
---@return integer
function ULocalPlayerSaveGame:GetInvalidDataVersion() end

---Asynchronously save to the slot and user index.
---This will return true if the save was requested, and errors should be handled by the HandlePostSave function after the save succeeds or fails
---@return boolean
function ULocalPlayerSaveGame:AsyncSaveGameToSlotForLocalPlayer() end

---Asynchronously loads a save game object in the specified slot for the local player, if this returns true the delegate will get called later.
---False means the load was never scheduled, otherwise it will create and initialize a new instance before calling the delegate if loading failed.
---@param SaveGameClass TSubclassOf_ULocalPlayerSaveGame_
---@param LocalPlayerController APlayerController
---@param SlotName string
---@param Delegate Delegate
---@return boolean
function ULocalPlayerSaveGame.AsyncLoadOrCreateSaveGameForLocalPlayer(SaveGameClass, LocalPlayerController, SlotName, Delegate) end

