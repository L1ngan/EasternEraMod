---UV Layout Settings
---@class UUVLayoutProperties : UInteractiveToolPropertySet
---@field public LayoutType EUVLayoutType @Type of layout applied to input UVs
---@field public TextureResolution integer @Expected resolution of the output textures; this controls spacing left between UV islands to avoid interpolation artifacts
---@field public Scale number @Uniform scale applied to UVs after packing
---@field public Translation FVector2D @Translation applied to UVs after packing, and after scaling
---@field public bPreserveScale boolean @Force the Repack layout type to preserve existing scaling of UV islands. Note, this might lead to the packing not fitting within a unit square, and therefore is disabled by default.
---@field public bPreserveRotation boolean @Force the Repack layout type to preserve existing rotation of UV islands. Note, this might lead to the packing not being as space efficient as possible, and therefore is disabled by default.
---@field public bAllowFlips boolean @Allow the Repack layout type to flip the orientation of UV islands to save space. Note that this may cause problems for downstream operations, and therefore is disabled by default.
---@field public bEnableUDIMLayout boolean @Enable UDIM aware layout and keep islands within their originating UDIM tiles when laying out.
---@field public bUDIMCVAREnabled boolean
local UUVLayoutProperties = {}

