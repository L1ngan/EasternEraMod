---Base class for all preview axis types.
---NiagaraPreviewGrid uses these to control how many systems to spawn in each axis and how each system varies on that axis.
---C++ Examples are show below. You can also create these as Blueprint classes as show in the Plugin content folder.
---@class UNiagaraPreviewAxis : UObject
local UNiagaraPreviewAxis = {}

---Returns the number of previews for this axis.
---@return integer
function UNiagaraPreviewAxis:Num() end

---Applies this axis for the preview at PreviewIndex on this axis.
---@param PreviewComponent UNiagaraComponent
---@param PreviewIndex integer
---@param bIsXAxis boolean
---@param OutLabelText string @[out] 
function UNiagaraPreviewAxis:ApplyToPreview(PreviewComponent, PreviewIndex, bIsXAxis, OutLabelText) end

