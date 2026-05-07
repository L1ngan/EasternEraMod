---Struct that exists to store runtime cache to make key to action lookups faster.
---@class FCachedKeyToActionInfo
---@field public PlayerInput TWeakObjectPtr<UPlayerInput> @Which PlayerInput object this has been built for
local FCachedKeyToActionInfo = {}
