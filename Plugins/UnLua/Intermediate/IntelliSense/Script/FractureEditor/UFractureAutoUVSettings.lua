---Settings for UV layout and texture baking on the geometry collection *
---@class UFractureAutoUVSettings : UFractureToolSettings
---@field public UVChannel string @Which UV channel to use for layout and baking
---@field public UVChannelNamesList TArray<string>
---@field public ProjectionScale FVector @The scale factor to use for UV box projection
---@field public bAutoFitToBounds boolean @Set the scale factor for UV box projection based on the bounding box of the geometry
---@field public bUniformProjectionScale boolean @Ensure the projection scale is the same on each axis, either by repeating the X Axis scale, or using the max box dimension if Auto Fit to Bounds is selected.
---@field public ProjectionUVOffset FVector2D @UV Offset to apply after UV box projection
---@field public bCenterAtPivot boolean @Optionally center the UV projection around the object pivot
---@field public TargetFaces ETargetFaces @Choose whether to target internal faces, or a custom selection
---@field public MaterialIDs TArray<integer> @Custom selection of material IDs to target for texturing
---@field public Resolution EAutoUVTextureResolution @The pixel resolution of the generated map
---@field public GutterSize integer @Approximate space to leave between UV islands, measured in texels
---@field public Result UTexture2D @The resulting automatically-generated texture map
---@field public bPromptToSave boolean @Whether to prompt user for an asset name for each generated texture, or automatically place them next to the source Geometry Collections
---@field public bReplaceExisting boolean @Whether to allow the new texture to overwrite an existing texture
---@field public BakeTextureType ETextureType @Which standard set of texture channels to bake
---@field public bDistToOuter boolean @Bake the distance to the external surface to a texture channel (red)
---@field public bAmbientOcclusion boolean @Bake the ambient occlusion of each bone (considered separately) to a texture channel (green)
---@field public bSmoothedCurvature boolean @Bake a smoothed curvature metric to a texture channel (blue) Specifically, this is the mean curvature of a smoothed copy of each fractured piece, baked back to the respective fracture piece Note that this attribute is relatively expensive to compute
---@field public MaxDistance number @Max distance to search for the outer mesh surface
---@field public OcclusionRays integer @Number of occlusion rays
---@field public OcclusionBlurRadius number @Pixel Radius of Gaussian Blur Kernel applied to AO map (0 will apply no blur)
---@field public CurvatureBlurRadius number @Pixel Radius of Gaussian Blur Kernel applied to Curvature map (0 will apply no blur)
---@field public VoxelResolution integer @Voxel resolution of smoothed shape representation
---@field public SmoothingIterations integer @Amount of smoothing iterations to apply before computing curvature
---@field public ThicknessFactor number @Distance to search for correspondence between fractured shape and smoothed shape, as factor of voxel size
---@field public MaxCurvature number @Curvatures in the range [-MaxCurvature, MaxCurvature] will be mapped from [0,1]. Values outside that range will be clamped
local UFractureAutoUVSettings = {}

---Immediately layout and update the UVs of the selected Geometry Collection, for faces with the Target Material IDs
function UFractureAutoUVSettings:LayoutUVs() end

---@return TArray_string_
function UFractureAutoUVSettings:GetUVChannelNamesFunc() end

---Disable "Show Bone Colors" on the selected Geometry Collection Components, so textures are visible. This setting can also be toggled directly on the Component itself
function UFractureAutoUVSettings:DisableBoneColors() end

---Remove the last UV channel from the Geometry Collection
function UFractureAutoUVSettings:DeleteUVChannel() end

---Immediately perform a box projection to update the internal UVs of the selected Geometry Collection
function UFractureAutoUVSettings:BoxProjectUVs() end

---Bake a new texture with the chosen attributes, aligned to the current UV layout
function UFractureAutoUVSettings:BakeTexture() end

---Add a UV channel to the Geometry Collection
function UFractureAutoUVSettings:AddUVChannel() end

