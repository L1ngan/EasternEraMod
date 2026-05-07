---@class URigVMEditorBlueprintLibrary : UBlueprintFunctionLibrary
local URigVMEditorBlueprintLibrary = {}

---@param InBlueprint URigVMBlueprint
function URigVMEditorBlueprintLibrary.RequestAutoVMRecompilation(InBlueprint) end

---@param InBlueprint URigVMBlueprint
function URigVMEditorBlueprintLibrary.RecompileVMIfRequired(InBlueprint) end

---@param InBlueprint URigVMBlueprint
function URigVMEditorBlueprintLibrary.RecompileVM(InBlueprint) end

---@param InClass TSubclassOf_URigVMBlueprint_
---@param InNodeFilter Delegate
---@return TArray_URigVMBlueprint_
function URigVMEditorBlueprintLibrary.LoadAssetsWithNodeFilter_ForBlueprint(InClass, InNodeFilter) end

---@param InClass TSubclassOf_URigVMBlueprint_
---@param InBlueprintFilter Delegate
---@return TArray_URigVMBlueprint_
function URigVMEditorBlueprintLibrary.LoadAssetsWithBlueprintFilter_ForBlueprint(InClass, InBlueprintFilter) end

---@param InClass TSubclassOf_URigVMBlueprint_
---@param InAssetDataFilter Delegate
---@return TArray_URigVMBlueprint_
function URigVMEditorBlueprintLibrary.LoadAssetsWithAssetDataFilter_ForBlueprint(InClass, InAssetDataFilter) end

---@param InClass TSubclassOf_URigVMBlueprint_
---@param InAssetDataFilter Delegate
---@param InNodeFilter Delegate
---@return TArray_URigVMBlueprint_
function URigVMEditorBlueprintLibrary.LoadAssetsWithAssetDataAndNodeFilters_ForBlueprint(InClass, InAssetDataFilter, InNodeFilter) end

---@param InClass TSubclassOf_URigVMBlueprint_
---@param InAssetDataFilter Delegate
---@param InBlueprintFilter Delegate
---@return TArray_URigVMBlueprint_
function URigVMEditorBlueprintLibrary.LoadAssetsWithAssetDataAndBlueprintFilters_ForBlueprint(InClass, InAssetDataFilter, InBlueprintFilter) end

---@param InClass TSubclassOf_URigVMBlueprint_
---@return TArray_URigVMBlueprint_
function URigVMEditorBlueprintLibrary.LoadAssetsByClass(InClass) end

---@return TArray_URigVMBlueprint_
function URigVMEditorBlueprintLibrary.LoadAssets() end

---@param InBlueprint URigVMBlueprint
---@return URigVMGraph
function URigVMEditorBlueprintLibrary.GetModel(InBlueprint) end

---@param InBlueprint URigVMBlueprint
---@return URigVMController
function URigVMEditorBlueprintLibrary.GetController(InBlueprint) end

---@param InClass TSubclassOf_URigVMBlueprint_
---@param InAssetDataFilter Delegate
---@return TArray_FAssetData_
function URigVMEditorBlueprintLibrary.GetAssetsWithFilter_ForBlueprint(InClass, InAssetDataFilter) end

