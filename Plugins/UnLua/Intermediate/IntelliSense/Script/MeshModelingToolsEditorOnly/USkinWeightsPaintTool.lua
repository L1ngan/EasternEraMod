---An interactive tool for painting and editing skin weights.
---@class USkinWeightsPaintTool : UDynamicMeshBrushTool
---@field protected WeightToolProperties USkinWeightsPaintToolProperties @tool properties
---@field protected MeshSelector UWeightToolMeshSelector @the selection system for the main mesh
---@field protected EditorContext TWeakObjectPtr<USkeletalMeshEditorContextObjectBase> @global properties stored on initialization
---@field protected PersonaModeManagerContext TWeakObjectPtr<UPersonaEditorModeManagerContext>
---@field protected TargetManager TWeakObjectPtr<UToolTargetManager>
---@field protected TransferManager UWeightToolTransferManager @manages transferring skin weights from a separate mesh
---@field protected SelectionIsolator UWeightToolSelectionIsolator @manages isolating a selection of the mesh
local USkinWeightsPaintTool = {}

