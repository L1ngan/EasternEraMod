---@class UAsyncImageExport : UBlueprintAsyncActionBase
---@field public Complete MulticastDelegate
---@field private TextureToExport UTexture
---@field private Quality integer
---@field private TargetFile string
local UAsyncImageExport = {}

---@param Texture UTexture
---@param OutputFile string
---@param Quality integer @[opt] 
---@return UAsyncImageExport
function UAsyncImageExport.ExportImageAsync(Texture, OutputFile, Quality) end

