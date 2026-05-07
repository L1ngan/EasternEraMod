---Base class of UnrealEd brush builders.
---Tips for writing brush builders:
---- Always validate the user-specified and call BadParameters function
---  if anything is wrong, instead of actually building geometry.
---  If you build an invalid brush due to bad user parameters, you'll
---  cause an extraordinary amount of pain for the poor user.
---- When generating polygons with more than 3 vertices, BE SURE all the
---  polygon's vertices are coplanar!  Out-of-plane polygons will cause
---  geometry to be corrupted.
---@class UBrushBuilder : UObject
---@field public BitmapFilename string
---@field public ToolTip string @localized FString that will be displayed as the name of this brush builder in the editor
---@field public NotifyBadParams boolean @If false, disabled the bad param notifications
---@field protected Vertices TArray<FVector>
---@field protected Polys TArray<FBuilderPoly>
---@field protected Layer string
---@field protected MergeCoplanars boolean
local UBrushBuilder = {}

