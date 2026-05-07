---@class UImportanceSamplingLibrary : UBlueprintFunctionLibrary
local UImportanceSamplingLibrary = {}

---
---@param Index integer
---@param Dimension integer
---@param Seed number
---@return number
function UImportanceSamplingLibrary.RandomSobolFloat(Index, Dimension, Seed) end

---
---@param Index integer
---@param NumCells integer @[opt] 
---@param Cell FVector @[opt] 
---@param Seed FVector @[opt] 
---@return FVector
function UImportanceSamplingLibrary.RandomSobolCell3D(Index, NumCells, Cell, Seed) end

---
---@param Index integer
---@param NumCells integer @[opt] 
---@param Cell FVector2D @[opt] 
---@param Seed FVector2D @[opt] 
---@return FVector2D
function UImportanceSamplingLibrary.RandomSobolCell2D(Index, NumCells, Cell, Seed) end

---
---@param Index integer
---@param Dimension integer
---@param PreviousValue number
---@return number
function UImportanceSamplingLibrary.NextSobolFloat(Index, Dimension, PreviousValue) end

---
---@param Index integer
---@param NumCells integer @[opt] 
---@param PreviousValue FVector @[opt] 
---@return FVector
function UImportanceSamplingLibrary.NextSobolCell3D(Index, NumCells, PreviousValue) end

---
---@param Index integer
---@param NumCells integer @[opt] 
---@param PreviousValue FVector2D @[opt] 
---@return FVector2D
function UImportanceSamplingLibrary.NextSobolCell2D(Index, NumCells, PreviousValue) end

---Create an FImportanceTexture object for texture-driven importance sampling from a 2D RGBA8 texture
---@param Texture UTexture2D
---@param WeightingFunc integer
---@return FImportanceTexture
function UImportanceSamplingLibrary.MakeImportanceTexture(Texture, WeightingFunc) end

---Distribute sample points proportional to Texture2D luminance.
---@param Texture FImportanceTexture
---@param Rand FVector2D
---@param Samples integer
---@param Intensity number
---@param SamplePosition FVector2D @[out] 
---@param SampleColor FLinearColor @[out] 
---@param SampleIntensity number @[out] 
---@param SampleSize number @[out] 
function UImportanceSamplingLibrary.ImportanceSample(Texture, Rand, Samples, Intensity, SamplePosition, SampleColor, SampleIntensity, SampleSize) end

---Get texture used to create an ImportanceTexture object
---@param ImportanceTexture FImportanceTexture
---@param Texture UTexture2D @[out] 
---@param WeightingFunc integer @[out] 
function UImportanceSamplingLibrary.BreakImportanceTexture(ImportanceTexture, Texture, WeightingFunc) end

