---Parameters to apply to the material, these are both constant and dynamic bindings
---Having any bindings set will cause a MID to be generated
---@class FNiagaraRendererMaterialParameters
---@field public AttributeBindings TArray<FNiagaraMaterialAttributeBinding>
---@field public ScalarParameters TArray<FNiagaraRendererMaterialScalarParameter>
---@field public VectorParameters TArray<FNiagaraRendererMaterialVectorParameter>
---@field public TextureParameters TArray<FNiagaraRendererMaterialTextureParameter>
---@field public StaticBoolParameters TArray<FNiagaraRendererMaterialStaticBoolParameter>
local FNiagaraRendererMaterialParameters = {}
