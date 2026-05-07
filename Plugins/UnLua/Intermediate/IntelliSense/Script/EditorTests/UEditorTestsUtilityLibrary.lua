---Blueprint library for altering and analyzing animation / skeletal data
---@class UEditorTestsUtilityLibrary : UBlueprintFunctionLibrary
local UEditorTestsUtilityLibrary = {}

---Simple function for setting UWidget::Navigation, which has a details customization
---@param Widget UWidget
---@param Nav EUINavigation
---@param Rule EUINavigationRule
function UEditorTestsUtilityLibrary.SetEditorWidgetNavigationRule(Widget, Nav, Rule) end

---Merges meshes and bakes out materials into a atlas-material for the given set of static mesh components using the MergeSettings
---@param InStaticMeshComponents TArray_UStaticMeshComponent_
---@param MergeSettings FMeshMergingSettings
---@param bReplaceActors boolean
---@param OutLODIndices TArray_integer_ @[out] 
function UEditorTestsUtilityLibrary.MergeStaticMeshComponents(InStaticMeshComponents, MergeSettings, bReplaceActors, OutLODIndices) end

---Simple logic for getting data within UWidget::Navigation, which has a details customization
---@param Widget UWidget
---@param Nav EUINavigation
---@return EUINavigationRule
function UEditorTestsUtilityLibrary.GetEditorWidgetNavigationRule(Widget, Nav) end

---Finds a UWidget object used by the editor - useful for testing widget editing
---@param WidgetBlueprint UWidgetBlueprint
---@param Name string
---@return UWidget
function UEditorTestsUtilityLibrary.GetChildEditorWidgetByName(WidgetBlueprint, Name) end

---Simplify meshes and bakes out materials into a atlas-material for the given set of static mesh components using the ProxySettings
---@param InStaticMeshComponents TArray_UStaticMeshComponent_
---@param ProxySettings FMeshProxySettings
function UEditorTestsUtilityLibrary.CreateProxyMesh(InStaticMeshComponents, ProxySettings) end

---Bakes out material in-place for the given set of static mesh components using the MaterialMergeOptions
---@param InStaticMeshComponent UStaticMeshComponent
---@param MaterialOptions UMaterialOptions
---@param MaterialMergeOptions UMaterialMergeOptions
function UEditorTestsUtilityLibrary.BakeMaterialsForComponent(InStaticMeshComponent, MaterialOptions, MaterialMergeOptions) end

