---@class ULUA_OVERRIDES_TPSGameInstance_2 : ULuaOverridesClass
local ULUA_OVERRIDES_TPSGameInstance_2 = {}

---Opportunity for blueprints to handle the game instance being shutdown.
function ULUA_OVERRIDES_TPSGameInstance_2:ReceiveShutdown() end

---Opportunity for blueprints to handle the game instance being initialized.
function ULUA_OVERRIDES_TPSGameInstance_2:ReceiveInit() end

