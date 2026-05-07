---@class UUDIMTextureFunctionLibrary : UBlueprintFunctionLibrary
local UUDIMTextureFunctionLibrary = {}

---Make a UDIM virtual texture from a list of regular 2D textures
---@param OutputPathName string
---@param SourceTextures TArray_UTexture2D_
---@param BlockCoords TArray_FIntPoint_
---@param bKeepExistingSettings boolean @[opt] 
---@param bCheckOutAndSave boolean @[opt] 
---@return UTexture2D
function UUDIMTextureFunctionLibrary.MakeUDIMVirtualTextureFromTexture2Ds(OutputPathName, SourceTextures, BlockCoords, bKeepExistingSettings, bCheckOutAndSave) end

