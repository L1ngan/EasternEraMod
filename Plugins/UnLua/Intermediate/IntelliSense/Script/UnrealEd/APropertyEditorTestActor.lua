---@class APropertyEditorTestActor : AActor
---@field private InstancedUObjectArray TArray<UPropertyEditorTestInstancedObject>
---@field private GetOptionsValue string
---@field private DefaultsOnly number
---@field private DefaultsOnlySubcategory number
---@field private InstanceOnly number
---@field private InstanceOnlySubcategory number
---@field private MultiLineMap TMap<integer, string>
local APropertyEditorTestActor = {}

---@return TArray_string_
function APropertyEditorTestActor:GetOptionsFunc() end

