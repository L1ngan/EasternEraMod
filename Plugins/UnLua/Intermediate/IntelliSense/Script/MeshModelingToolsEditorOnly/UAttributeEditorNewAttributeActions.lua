---@class UAttributeEditorNewAttributeActions : UAttributeEditorActionPropertySet
---@field public NewName string
---@field public ElementType EAttributeEditorElementType @UPROPERTY(EditAnywhere, Category = NewAttribute)
---@field public DataType EAttributeEditorAttribType @UPROPERTY(EditAnywhere, Category = NewAttribute)
local UAttributeEditorNewAttributeActions = {}

---Add a new Per-Vertex Weight Map layer with the given Name
function UAttributeEditorNewAttributeActions:AddWeightMapLayer() end

---Add a new PolyGroup layer with the given Name
function UAttributeEditorNewAttributeActions:AddPolyGroupLayer() end

