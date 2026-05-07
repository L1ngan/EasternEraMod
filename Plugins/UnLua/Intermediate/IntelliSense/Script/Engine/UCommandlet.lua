---@class UCommandlet : UObject
---@field public HelpDescription string @Description of the commandlet's purpose
---@field public HelpUsage string @Usage template to show for "ucc help"
---@field public HelpWebLink string @Hyperlink for more info
---@field public HelpParamNames TArray<string> @The name of the parameter the commandlet takes
---@field public HelpParamDescriptions TArray<string> @The description of the parameter
---@field public IsServer boolean @Whether to load objects required in server, client, and editor context.  If IsEditor is set to false, then a UGameEngine (or whatever the value of /Script/Engine.Engine.GameEngine is) will be created for the commandlet instead of a UEditorEngine (or /Script/Engine.Engine.EditorEngine), unless the commandlet overrides the CreateCustomEngine method.
---@field public IsClient boolean
---@field public IsEditor boolean
---@field public LogToConsole boolean @Whether to redirect standard log to the console
---@field public ShowErrorCount boolean @Whether to show standard error and warning count on exit
---@field public ShowProgress boolean @Whether to show cooking progress on tick
---@field public FastExit boolean @Whether to exit the process as soon as the commandlet completes, skipping the engine shutdown
---@field public UseCommandletResultAsExitCode boolean @Whether to use the commandlet result as the exit code, even if errors were logged during the whole engine execution
local UCommandlet = {}

