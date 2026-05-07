---Utility class to filter a list of objects. Object should be in the World Editor.
---@class UEditorFilterLibrary : UBlueprintFunctionLibrary
local UEditorFilterLibrary = {}

---Filter the array based on Object's selection.
---@param TargetArray TArray_AActor_
---@param FilterType EEditorScriptingFilterType @[opt] 
---@return TArray_AActor_
function UEditorFilterLibrary.BySelection(TargetArray, FilterType) end

---Filter the array by Level the Actor belongs to.
---@param TargetArray TArray_AActor_
---@param LevelName string
---@param FilterType EEditorScriptingFilterType @[opt] 
---@return TArray_AActor_
function UEditorFilterLibrary.ByLevelName(TargetArray, LevelName, FilterType) end

---Filter the array by Layer the Actor belongs to.
---@param TargetArray TArray_AActor_
---@param LayerName string
---@param FilterType EEditorScriptingFilterType @[opt] 
---@return TArray_AActor_
function UEditorFilterLibrary.ByLayer(TargetArray, LayerName, FilterType) end

---Filter the array based on the Object's ID name.
---@param TargetArray TArray_UObject_
---@param NameSubString string
---@param StringMatch EEditorScriptingStringMatchType @[opt] 
---@param FilterType EEditorScriptingFilterType @[opt] 
---@return TArray_UObject_
function UEditorFilterLibrary.ByIDName(TargetArray, NameSubString, StringMatch, FilterType) end

---Filter the array based on the Object's class.
---@param TargetArray TArray_UObject_
---@param ObjectClass TSubclassOf_UObject_
---@param FilterType EEditorScriptingFilterType @[opt] 
---@return TArray_UObject_
function UEditorFilterLibrary.ByClass(TargetArray, ObjectClass, FilterType) end

---Filter the array by Tag the Actor contains
---@param TargetArray TArray_AActor_
---@param Tag string
---@param FilterType EEditorScriptingFilterType @[opt] 
---@return TArray_AActor_
function UEditorFilterLibrary.ByActorTag(TargetArray, Tag, FilterType) end

---Filter the array based on the Actor's label (what we see in the editor)
---@param TargetArray TArray_AActor_
---@param NameSubString string
---@param StringMatch EEditorScriptingStringMatchType @[opt] 
---@param FilterType EEditorScriptingFilterType @[opt] 
---@param bIgnoreCase boolean @[opt] 
---@return TArray_AActor_
function UEditorFilterLibrary.ByActorLabel(TargetArray, NameSubString, StringMatch, FilterType, bIgnoreCase) end

