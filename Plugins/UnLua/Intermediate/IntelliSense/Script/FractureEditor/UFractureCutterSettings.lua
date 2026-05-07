---Settings specifically related to the one-time destructive fracturing of a mesh *
---@class UFractureCutterSettings : UFractureToolSettings
---@field public InternalMaterial string @Material to set for internal faces on fracture. 'Automatic' will use the most common 'internal' material in each geometry, or the last valid material if no internal faces are found
---@field public RandomSeed integer @Random number generator seed for repeatability. If the value is -1, a different random seed will be used every time, otherwise the specified seed will always be used
---@field public ChanceToFracture number @Chance to fracture each selected bone. If 0, no bones will fracture; if 1, all bones will fracture.
---@field public bGroupFracture boolean @Generate a fracture pattern across all selected meshes.
---@field public bGroupFractureToggleEnabled boolean @This flag allows tools to disable the above bGroupFracture option if/when it is not applicable
---@field public bSplitIslands boolean @Whether to split the fractured mesh pieces based on geometric connectivity after fracturing
---@field public Grout number @Amount of space to leave between cut pieces
---@field public bGroutSettingEnabled boolean @This flag allows tools to disable the above Grout setting if/when it's not applicable
---@field public bDrawSites boolean @Draw points marking the centers of pieces to be cut out by the fracture pattern.
---@field public bDrawSitesToggleEnabled boolean @This flag allows tools to disable the above bDrawSites option if/when it is not applicable
---@field public bDrawDiagram boolean @Draw the edges of the fracture pattern.
---@field public bDrawNoisePreview boolean @Whether to show a solid preview of the cutting geometry, including any noise displacement
---@field public bNoisePreviewToggleEnabled boolean @This flag allows tools to disable the above bDrawNoisePreview option if/when it is not applicable
---@field public FractionPreviewCells number @Fraction of cells to show in noise preview
---@field public NoisePreviewScale number @Scale of the noise preview plane
---@field public bNoisePreviewHasScale boolean @This flag allows tools to disable the noise preview scale setting if it's not applicable
---@field public Amplitude number @Size of the Perlin noise displacement (in cm). If 0, no noise will be applied
---@field public Frequency number @Period of the Perlin noise.  Smaller values will create a smoother noise pattern
---@field public Persistence number @Persistence of the layers of Perlin noise. At each layer (octave) after the first, the amplitude of the Perlin noise is scaled by this factor
---@field public Lacunarity number @Lacunarity of the layers of Perlin noise. At each layer (octave) after the first, the frequency of the Perlin noise is scaled by this factor
---@field public OctaveNumber integer @Number of fractal layers of Perlin noise to apply. Each layer is additive, with Amplitude and Frequency parameters scaled by Persistence and Lacunarity Smaller values (1 or 2) will create noise that looks like gentle rolling hills, while larger values (> 4) will tend to look more like craggy mountains
---@field public PointSpacing number @Distance (in cm) between vertices on cut surfaces where noise is added.  Larger spacing between vertices will create more efficient meshes with fewer triangles, but less resolution to see the shape of the added noise
---@field public bNoiseSettingsEnabled boolean @This flag allows tools to disable the above Noise settings if/when they are not applicable
---@field private ActiveMaterialNamesList TArray<string>
local UFractureCutterSettings = {}

---@return TArray_string_
function UFractureCutterSettings:GetMaterialNamesFunc() end

