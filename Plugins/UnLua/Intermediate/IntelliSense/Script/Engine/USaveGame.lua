---This class acts as a base class for a save game object that can be used to save state about the game.
---When you create your own save game subclass, you would add member variables for the information that you want to save.
---Then when you want to save a game, create an instance of this object using CreateSaveGameObject, fill in the data, and use SaveGameToSlot, providing a slot name.
---To load the game you then just use LoadGameFromSlot, and read the data from the resulting object.
---@class USaveGame : UObject
local USaveGame = {}

