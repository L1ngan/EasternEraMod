---@class UTextureImportTestFunctions : UImportTestFunctionsBase
local UTextureImportTestFunctions = {}

---Check whether the imported texture has the expected filtering mode
---@param Texture UTexture
---@param ExpectedTextureFilter integer
---@return FInterchangeTestFunctionResult
function UTextureImportTestFunctions.CheckTextureFilter(Texture, ExpectedTextureFilter) end

---Check whether the imported texture has the expected addressing mode for Z-axis
---@param Texture UTexture
---@param ExpectedTextureAddressZ integer
---@return FInterchangeTestFunctionResult
function UTextureImportTestFunctions.CheckTextureAddressZ(Texture, ExpectedTextureAddressZ) end

---Check whether the imported texture has the expected addressing mode for Y-axis
---@param Texture UTexture
---@param ExpectedTextureAddressY integer
---@return FInterchangeTestFunctionResult
function UTextureImportTestFunctions.CheckTextureAddressY(Texture, ExpectedTextureAddressY) end

---Check whether the imported texture has the expected addressing mode for X-axis
---@param Texture UTexture
---@param ExpectedTextureAddressX integer
---@return FInterchangeTestFunctionResult
function UTextureImportTestFunctions.CheckTextureAddressX(Texture, ExpectedTextureAddressX) end

---Check whether the expected number of textures are imported
---@param Textures TArray_UTexture_
---@param ExpectedNumberOfImportedTextures integer
---@return FInterchangeTestFunctionResult
function UTextureImportTestFunctions.CheckImportedTextureCount(Textures, ExpectedNumberOfImportedTextures) end

