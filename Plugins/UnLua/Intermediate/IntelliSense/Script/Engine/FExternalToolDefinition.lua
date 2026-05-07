---Structure for defining an external tool
---@class FExternalToolDefinition
---@field public ToolName string @The name of the tool / test.
---@field public ExecutablePath FFilePath @The executable to run.
---@field public CommandLineOptions string @The command line options to pass to the executable.
---@field public WorkingDirectory FDirectoryPath @The working directory for the new process.
---@field public ScriptExtension string @If set, look for scripts with this extension.
---@field public ScriptDirectory FDirectoryPath @If the ScriptExtension is set, look here for the script files.
local FExternalToolDefinition = {}
