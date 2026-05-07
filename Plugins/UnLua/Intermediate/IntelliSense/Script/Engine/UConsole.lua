---A basic command line console that accepts most commands.
---@class UConsole : UObject
---@field public ConsoleTargetPlayer ULocalPlayer @The player which the next console command should be executed in the context of.  If nullptr, execute in the viewport.
---@field public DefaultTexture_Black UTexture2D
---@field public DefaultTexture_White UTexture2D
---@field public HistoryBuffer TArray<string> @Holds the history buffer, order is old to new
local UConsole = {}

