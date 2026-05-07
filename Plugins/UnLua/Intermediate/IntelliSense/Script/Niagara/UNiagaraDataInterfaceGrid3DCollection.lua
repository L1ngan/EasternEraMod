---@class UNiagaraDataInterfaceGrid3DCollection : UNiagaraDataInterfaceGrid3D
---@field public NumAttributes integer @Number of attributes stored on the grid
---@field public RenderTargetUserParameter FNiagaraUserParameterBinding @Reference to a user parameter if we're reading one.
---@field public OverrideBufferFormat ENiagaraGpuBufferFormat @When enabled overrides the format used to store data inside the grid, otherwise uses the project default setting.  Lower bit depth formats will save memory and performance at the cost of precision.
---@field public bOverrideFormat boolean
---@field public bPreviewGrid boolean
---@field public PreviewAttribute string @When enabled allows you to preview the grid in a debug display
local UNiagaraDataInterfaceGrid3DCollection = {}

---@param Component UNiagaraComponent
---@param SizeX integer @[out] 
---@param SizeY integer @[out] 
---@param SizeZ integer @[out] 
function UNiagaraDataInterfaceGrid3DCollection:GetTextureSize(Component, SizeX, SizeY, SizeZ) end

---@param Component UNiagaraComponent
---@param SizeX integer @[out] 
---@param SizeY integer @[out] 
---@param SizeZ integer @[out] 
function UNiagaraDataInterfaceGrid3DCollection:GetRawTextureSize(Component, SizeX, SizeY, SizeZ) end

---Fills a texture render target 2d with the current data from the simulation
---#todo(dmp): this will eventually go away when we formalize how data makes it out of Niagara
---#todo(dmp): reimplement for 3d
---@param Component UNiagaraComponent
---@param dest UVolumeTexture
---@param AttributeIndex integer
---@return boolean
function UNiagaraDataInterfaceGrid3DCollection:FillVolumeTexture(Component, dest, AttributeIndex) end

---@param Component UNiagaraComponent
---@param Dest UVolumeTexture
---@param TilesX integer @[out] 
---@param TilesY integer @[out] 
---@param TileZ integer @[out] 
---@return boolean
function UNiagaraDataInterfaceGrid3DCollection:FillRawVolumeTexture(Component, Dest, TilesX, TilesY, TileZ) end

