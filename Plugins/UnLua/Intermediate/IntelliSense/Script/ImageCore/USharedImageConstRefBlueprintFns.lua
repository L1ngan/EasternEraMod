---@class USharedImageConstRefBlueprintFns : UObject
local USharedImageConstRefBlueprintFns = {}

---@param Image FSharedImageConstRefBlueprint
---@return boolean
function USharedImageConstRefBlueprintFns.IsValid(Image) end

---Returns -1 if Image is invalid
---@param Image FSharedImageConstRefBlueprint
---@return integer
function USharedImageConstRefBlueprintFns.GetWidth(Image) end

---Returns (-1, -1) if Image is invalid
---@param Image FSharedImageConstRefBlueprint
---@return FVector2f
function USharedImageConstRefBlueprintFns.GetSize(Image) end

---Returns the value in the texture for the given pixel as a float vector. If the input position is invalid, the format is invalid,
---or the reference isn't set, bValid will be false and the function will return FVector4(0,0,0,0).
---Pixel values are directly returned with no gamma transformation to allow for lookup tables. Also note that
---8 bit formats that you might normally expect to be normalized to 0..1 will return their values directly as 0..256.
---This supports all image formats.
---G8 is replicated to X/Y/Z/1.
---R16/R32 is returned as R/0/0/1.
---Do not use this for full image processing as it will be extremely slow, contact support if you need such
---functionality.
---@param Image FSharedImageConstRefBlueprint
---@param X integer
---@param Y integer
---@param bValid boolean @[out] 
---@return FVector4f
function USharedImageConstRefBlueprintFns.GetPixelValue(Image, X, Y, bValid) end

---Returns the color value for the given pixel. If the input position is invalid, the format is invalid,
---or the reference isn't set, bValid will be false and the function will return FailureColor. The color
---is converted using the image's gamma space in to linear space.
---Do not use this for full image processing as it will be extremely slow, contact support if you need such
---functionality.
---@param Image FSharedImageConstRefBlueprint
---@param X integer
---@param Y integer
---@param bValid boolean @[out] 
---@param FailureColor FLinearColor @[opt] 
---@return FLinearColor
function USharedImageConstRefBlueprintFns.GetPixelLinearColor(Image, X, Y, bValid, FailureColor) end

---Returns -1 if Image is invalid
---@param Image FSharedImageConstRefBlueprint
---@return integer
function USharedImageConstRefBlueprintFns.GetHeight(Image) end

