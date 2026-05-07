---@class UNiagaraNodeCustomHlsl : UNiagaraNodeFunctionCall
---@field public ScriptUsage ENiagaraScriptUsage
---@field private CustomHlsl string
---@field private AbsoluteIncludeFilePaths TArray<FFilePath> @Links to hlsl files that will be included by the translator. These external files are not watched by the engine, so changes to them do not automatically trigger a recompile of Niagara scripts.
---@field private VirtualIncludeFilePaths TArray<string> @Links to hlsl files that will be included by the translator. These paths are resolved with the virtual shader paths registered in the engine. For example, /Plugin/FX/Niagara maps to /Engine/Plugins/FX/Niagara/Shaders. Custom mappings can be added via AddShaderSourceDirectoryMapping().
---@field private bIsShaderCodeShown boolean @Is the shader code UI shown?
local UNiagaraNodeCustomHlsl = {}

