---Data Interface allowing sampling of a Landscape
---@class UNiagaraDataInterfaceLandscape : UNiagaraDataInterface
---@field public SourceLandscape AActor
---@field public SourceMode ENDILandscape_SourceMode
---@field public PhysicalMaterials TArray<UPhysicalMaterial>
---@field public bVirtualTexturesSupported boolean @Can be used to ignore virtual textures even if they are defined for the landscape.
local UNiagaraDataInterfaceLandscape = {}

