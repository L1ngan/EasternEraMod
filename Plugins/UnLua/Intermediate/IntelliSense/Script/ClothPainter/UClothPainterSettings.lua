---@class UClothPainterSettings : UMeshPaintSettings
---@field protected ViewMin number @When painting float/1D values, this is considered the zero or black point
---@field protected ViewMax number @When painting float/1D values, this is considered the one or white point
---@field public bAutoViewRange boolean @When set, the view min and max values will be calculated from the values present in the currently editable mask
---@field public AutoCalculatedViewMin number @Storage for auto calculated view min value
---@field public AutoCalculatedViewMax number @Storage for auto calculated view max value
---@field public ClothingAssets TArray<UClothingAssetCommon> @Array of Clothing assets
---@field public bFlipNormal boolean @Whether to flip normals on the mesh preview
---@field public bCullBackface boolean @Whether to cull backfacing triangles when rendering the mesh preview
---@field public Opacity number @Opacity of the mesh preview
local UClothPainterSettings = {}

