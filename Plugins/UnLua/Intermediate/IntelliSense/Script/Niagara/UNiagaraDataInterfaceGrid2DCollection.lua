---@class UNiagaraDataInterfaceGrid2DCollection : UNiagaraDataInterfaceGrid2D
---@field public RenderTargetUserParameter FNiagaraUserParameterBinding @Reference to a user parameter if we're reading one.
---@field public OverrideBufferFormat ENiagaraGpuBufferFormat @When enabled overrides the format used to store data inside the grid, otherwise uses the project default setting.  Lower bit depth formats will save memory and performance at the cost of precision.
---@field public bOverrideFormat boolean
---@field public bPreviewGrid boolean
---@field public PreviewAttribute string @When enabled allows you to preview the grid in a debug display
---@field protected ManagedRenderTargets TMap<integer, UTextureRenderTarget2DArray>
local UNiagaraDataInterfaceGrid2DCollection = {}

---@param Component UNiagaraComponent
---@param SizeX integer @[out] 
---@param SizeY integer @[out] 
function UNiagaraDataInterfaceGrid2DCollection:GetTextureSize(Component, SizeX, SizeY) end

---@param Component UNiagaraComponent
---@param SizeX integer @[out] 
---@param SizeY integer @[out] 
function UNiagaraDataInterfaceGrid2DCollection:GetRawTextureSize(Component, SizeX, SizeY) end

---Fills a texture render target 2d with the current data from the simulation
---#todo(dmp): this will eventually go away when we formalize how data makes it out of Niagara
---@param Component UNiagaraComponent
---@param dest UTextureRenderTarget2D
---@param AttributeIndex integer
---@return boolean
function UNiagaraDataInterfaceGrid2DCollection:FillTexture2D(Component, dest, AttributeIndex) end

---@param Component UNiagaraComponent
---@param Dest UTextureRenderTarget2D
---@param TilesX integer @[out] 
---@param TilesY integer @[out] 
---@return boolean
function UNiagaraDataInterfaceGrid2DCollection:FillRawTexture2D(Component, Dest, TilesX, TilesY) end

