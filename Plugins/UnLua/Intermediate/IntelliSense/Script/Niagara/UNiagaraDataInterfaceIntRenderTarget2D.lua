---@class UNiagaraDataInterfaceIntRenderTarget2D : UNiagaraDataInterfaceRWBase
---@field public Size FIntPoint
---@field public bPreviewRenderTarget boolean
---@field public PreviewDisplayRange FVector2D @The range to normaliez the preview display to.
---@field public RenderTargetUserParameter FNiagaraUserParameterBinding @When valid the user parameter is used as the render target rather than creating one internal, note that the input render target will be adjusted by the Niagara simulation
local UNiagaraDataInterfaceIntRenderTarget2D = {}

