---@class ABrush : AActor
---@field public BrushType integer @Type of brush
---@field public BrushColor FColor @Information.
---@field public PolyFlags integer
---@field public bColored boolean
---@field public bSolidWhenSelected boolean
---@field public bPlaceableFromClassBrowser boolean @If true, this brush class can be placed using the class browser like other simple class types
---@field public bNotForClientOrServer boolean @If true, this brush is a builder or otherwise does not need to be loaded into the game
---@field public Brush UModel
---@field private BrushComponent UBrushComponent
---@field public BrushBuilder UBrushBuilder
---@field public bDisplayShadedVolume boolean @If true, display the brush with a shaded volume
---@field public ShadedVolumeOpacityValue number @Value used to set the opacity for the shaded volume, between 0-1
---@field public bInManipulation boolean @Flag set when we are in a manipulation (scaling, translation, brush builder param change etc.)
---@field public SavedSelections TArray<FGeomSelection> @Stores selection information from geometry mode.  This is the only information that we can't regenerate by looking at the source brushes following an undo operation.
local ABrush = {}

