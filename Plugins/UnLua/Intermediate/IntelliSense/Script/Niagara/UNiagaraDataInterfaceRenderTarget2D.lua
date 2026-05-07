---@class UNiagaraDataInterfaceRenderTarget2D : UNiagaraDataInterfaceRWBase
---@field public Size FIntPoint
---@field public MipMapGeneration ENiagaraMipMapGeneration @Controls if and when we generate mips for the render target.
---@field public MipMapGenerationType ENiagaraMipMapGenerationType
---@field public OverrideRenderTargetFormat integer @When enabled overrides the format of the render target, otherwise uses the project default setting.
---@field public OverrideRenderTargetFilter integer @When enabled overrides the filter of the render target, otherwise uses the project default setting.
---@field public bInheritUserParameterSettings boolean @When enabled texture parameters (size / etc) are taken from the user provided render target. If no valid user parameter is set the system will be invalid. Note: The resource will be recreated if UAV access is not available, which will reset the contents.
---@field public bOverrideFormat boolean
---@field public bPreviewRenderTarget boolean
---@field public RenderTargetUserParameter FNiagaraUserParameterBinding @When valid the user parameter is used as the render target rather than creating one internal, note that the input render target will be adjusted by the Niagara simulation
local UNiagaraDataInterfaceRenderTarget2D = {}

