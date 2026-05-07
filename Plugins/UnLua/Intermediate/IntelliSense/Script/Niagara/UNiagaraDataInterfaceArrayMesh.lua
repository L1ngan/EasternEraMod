---@class UNiagaraDataInterfaceArrayMesh : UNiagaraDataInterfaceArray
---@field public MeshData TArray<FNiagaraMeshRendererMeshPropertiesBase>
local UNiagaraDataInterfaceArrayMesh = {}

---@param NiagaraComponent UNiagaraComponent
---@param OverrideName string
---@param ArrayData TArray_UStaticMesh_
function UNiagaraDataInterfaceArrayMesh.SetNiagaraArrayMeshSM(NiagaraComponent, OverrideName, ArrayData) end

---INiagaraRenderableMeshArrayInterface Interface End
---@param NiagaraComponent UNiagaraComponent
---@param OverrideName string
---@param ArrayData TArray_FNiagaraMeshRendererMeshPropertiesBase_
function UNiagaraDataInterfaceArrayMesh.SetNiagaraArrayMesh(NiagaraComponent, OverrideName, ArrayData) end

