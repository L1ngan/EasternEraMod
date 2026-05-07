---Physical material masks are used to map multiple physical materials to a single rendering material
---@class UPhysicalMaterialMask : UObject
---@field public AssetImportData UAssetImportData
---@field public MaskTexture UTexture @Mask input texture, square aspect ratio recommended. Recognized mask colors include: white, black, red, green, yellow, cyan, turquoise, and magenta.
---@field public UVChannelIndex integer @StaticMesh UV channel index to use when performing lookups with this mask.
---@field public AddressX integer @The addressing mode to use for the X axis.
---@field public AddressY integer @The addressing mode to use for the Y axis.
local UPhysicalMaterialMask = {}

