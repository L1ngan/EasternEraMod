---@class UBlueprintEditorLibrary : UBlueprintFunctionLibrary
local UBlueprintEditorLibrary = {}

---Replace any old operator nodes (float + float, vector + float, int + vector, etc)
---with the newer Promotable Operator version of the node. Preserve any connections the
---original node had to the newer version of the node.
---@param Blueprint UBlueprint
function UBlueprintEditorLibrary.UpgradeOperatorNodes(Blueprint) end

---Sets "Instance Editable" to true/false on a Blueprint variable
---@param Blueprint UBlueprint
---@param VariableName string
---@param bInstanceEditable boolean
function UBlueprintEditorLibrary.SetBlueprintVariableInstanceEditable(Blueprint, VariableName, bInstanceEditable) end

---Sets "Expose To Cinematics" to true/false on a Blueprint variable
---@param Blueprint UBlueprint
---@param VariableName string
---@param bExposeToCinematics boolean
function UBlueprintEditorLibrary.SetBlueprintVariableExposeToCinematics(Blueprint, VariableName, bExposeToCinematics) end

---Sets "Expose On Spawn" to true/false on a Blueprint variable
---@param Blueprint UBlueprint
---@param VariableName string
---@param bExposeOnSpawn boolean
function UBlueprintEditorLibrary.SetBlueprintVariableExposeOnSpawn(Blueprint, VariableName, bExposeOnSpawn) end

---Replace any references of variables with the OldVarName to references of those with the NewVarName if possible
---@param Blueprint UBlueprint
---@param OldVarName string
---@param NewVarName string
function UBlueprintEditorLibrary.ReplaceVariableReferences(Blueprint, OldVarName, NewVarName) end

---Attempts to reparent the given blueprint to the new chosen parent class.
---@param Blueprint UBlueprint
---@param NewParentClass TSubclassOf_UObject_
function UBlueprintEditorLibrary.ReparentBlueprint(Blueprint, NewParentClass) end

---Attempts to rename the given graph with a new name
---@param Graph UEdGraph
---@param NewNameStr string @[opt] 
function UBlueprintEditorLibrary.RenameGraph(Graph, NewNameStr) end

---Deletes any unused blueprint created variables the given blueprint.
---An Unused variable is any BP variable that is not referenced in any
---blueprint graphs
---@param Blueprint UBlueprint
---@return integer
function UBlueprintEditorLibrary.RemoveUnusedVariables(Blueprint) end

---Remove any nodes in this blueprint that have no connections made to them.
---@param Blueprint UBlueprint
function UBlueprintEditorLibrary.RemoveUnusedNodes(Blueprint) end

---Removes the given graph from the blueprint if possible
---@param Blueprint UBlueprint
---@param Graph UEdGraph
function UBlueprintEditorLibrary.RemoveGraph(Blueprint, Graph) end

---Deletes the function of the given name on this blueprint. Does NOT replace function call sites.
---@param Blueprint UBlueprint
---@param FuncName string
function UBlueprintEditorLibrary.RemoveFunctionGraph(Blueprint, FuncName) end

---Attempt to refresh any open blueprint editors for the given asset
---@param BP UBlueprint
function UBlueprintEditorLibrary.RefreshOpenEditorsForBlueprint(BP) end

---Refresh any open blueprint editors
function UBlueprintEditorLibrary.RefreshAllOpenBlueprintEditors() end

---
---@param StructType UScriptStruct
---@return FEdGraphPinType
function UBlueprintEditorLibrary.GetStructType(StructType) end

---
---@param ContainedType FEdGraphPinType
---@return FEdGraphPinType
function UBlueprintEditorLibrary.GetSetType(ContainedType) end

---Returns a string representation of the engine version which the given asset was saved with.
---                     For example: "5.6.0-37518009+++UE5+Main"
---@param Asset UObject
---@return string
function UBlueprintEditorLibrary.GetSavedByEngineVersion(Asset) end

---
---@param ObjectType TSubclassOf_UObject_
---@return FEdGraphPinType
function UBlueprintEditorLibrary.GetObjectReferenceType(ObjectType) end

---
---@param KeyType FEdGraphPinType
---@param ValueType FEdGraphPinType
---@return FEdGraphPinType
function UBlueprintEditorLibrary.GetMapType(KeyType, ValueType) end

---Returns a string which represents the current engine version (FEngineVersion::Current())
---For example: "5.6.0-37518009+++UE5+Main"
---@return string
function UBlueprintEditorLibrary.GetCurrentEngineVersion() end

---
---@param ClassType TSubclassOf_UObject_
---@return FEdGraphPinType
function UBlueprintEditorLibrary.GetClassReferenceType(ClassType) end

---Looks up the UBlueprint that generated the provided class, if any. Provides a 'true' exec pin
---to execute if there is a valid blueprint associated with the Class.
---                                                                               is native or otherwise cooked
---@param Class TSubclassOf_UObject_
---@param bDoesClassHaveBlueprint boolean @[out] 
---@return UBlueprint
function UBlueprintEditorLibrary.GetBlueprintForClass(Class, bDoesClassHaveBlueprint) end

---Casts the provided Object to a Blueprint - the root asset type of a blueprint asset. Note
---that the blueprint asset itself is editor only and not present in cooked assets.
---@param Object UObject
---@return UBlueprint
function UBlueprintEditorLibrary.GetBlueprintAsset(Object) end

---
---@param TypeName string
---@return FEdGraphPinType
function UBlueprintEditorLibrary.GetBasicTypeByName(TypeName) end

---
---@param ContainedType FEdGraphPinType
---@return FEdGraphPinType
function UBlueprintEditorLibrary.GetArrayType(ContainedType) end

---Gets the class generated when this blueprint is compiled
---@param BlueprintObj UBlueprint
---@return TSubclassOf_UObject_
function UBlueprintEditorLibrary.GeneratedClass(BlueprintObj) end

---Finds the graph with the given name on the blueprint. Null if it doesn't have one.
---@param Blueprint UBlueprint
---@param GraphName string
---@return UEdGraph
function UBlueprintEditorLibrary.FindGraph(Blueprint, GraphName) end

---Finds the event graph of the given blueprint. Null if it doesn't have one. This will only return
---the primary event graph of the blueprint (the graph named "EventGraph").
---@param Blueprint UBlueprint
---@return UEdGraph
function UBlueprintEditorLibrary.FindEventGraph(Blueprint) end

---Creates a blueprint based on a specific parent, honoring registered custom blueprint types
---@param AssetPath string
---@param ParentClass TSubclassOf_UObject_
---@return UBlueprint
function UBlueprintEditorLibrary.CreateBlueprintAssetWithParent(AssetPath, ParentClass) end

---Compiles the given blueprint.
---@param Blueprint UBlueprint
function UBlueprintEditorLibrary.CompileBlueprint(Blueprint) end

---Compares the given soft object's save version to the VersionToCheck. This will read the packages file header
---                                                     @@see GetSavedByEngineVersion and GetCurrentEngineVersion
---@param ObjectToCheck TSoftObjectPtr_UObject_
---@param VersionToCheck string
---@param Result EAssetSaveVersionComparisonResults @[out] 
function UBlueprintEditorLibrary.CompareSoftObjectSaveVersionTo(ObjectToCheck, VersionToCheck, Result) end

---Compares the given assets save version to the VersionToCheck.
---                                                     @@see GetSavedByEngineVersion and GetCurrentEngineVersion
---@param Asset UObject
---@param VersionToCheck string
---@param Result EAssetSaveVersionComparisonResults @[out] 
function UBlueprintEditorLibrary.CompareAssetSaveVersionTo(Asset, VersionToCheck, Result) end

---Adds a member variable to the specified blueprint inferring the type from a provided value.
---@param Blueprint UBlueprint
---@param MemberName string
---@param DefaultValue integer
---@return boolean
function UBlueprintEditorLibrary.AddMemberVariableWithValue(Blueprint, MemberName, DefaultValue) end

---Adds a member variable to the specified blueprint with the specified type.
---@param Blueprint UBlueprint
---@param MemberName string
---@param VariableType FEdGraphPinType
---@return boolean
function UBlueprintEditorLibrary.AddMemberVariable(Blueprint, MemberName, VariableType) end

---Adds a function to the given blueprint
---@param Blueprint UBlueprint
---@param FuncName string @[opt] 
---@return UEdGraph
function UBlueprintEditorLibrary.AddFunctionGraph(Blueprint, FuncName) end

