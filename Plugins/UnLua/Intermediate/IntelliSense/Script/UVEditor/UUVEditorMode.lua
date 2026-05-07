---The UV editor mode is the mode used in the UV asset editor. It holds most of the inter-tool state.
---We put things in a mode instead of directly into the asset editor in case we want to someday use the mode
---in multiple asset editors.
---@class UUVEditorMode : UEdMode
---@field public BackgroundVisualization UUVEditorBackgroundPreview @We don't actually override MouseEnter, etc, because things get forwarded to the input router via FEditorModeTools, and we don't have any additional input handling to do at the mode level.
---@field public DistortionVisualization UUVEditorDistortionVisualization
---@field public UVEditorGridProperties UUVEditorGridProperties @Hold a settings object to configure the grid
---@field public UVEditorUDIMProperties UUVEditorUDIMProperties @Hold a settings object to configure the UDIMs
---@field protected RegisteredActions TArray<UUVToolAction>
---@field protected OriginalObjectsToEdit TArray<UObject> @Stores original input objects, for instance UStaticMesh pointers. AssetIDs on tool input objects are indices into this array (and ones that are 1:1 with it)
---@field protected ToolTargets TArray<UToolTarget> @Tool targets created from OriginalObjectsToEdit (and 1:1 with that array) that provide us with dynamic meshes whose UV layers we unwrap.
---@field protected ToolInputObjects TArray<UUVEditorToolMeshInput> @Input objects we give to the tools, one per displayed UV layer. This includes pointers to the applied meshes, but also contains the unwrapped mesh and preview. These should not be assumed to be the same length as the asset arrays in case we someday do not display exactly a single layer per asset.
---@field protected LivePreviewWorld UWorld @Here largely for convenience to avoid having to pass it around functions.
---@field protected SelectionAPI UUVToolSelectionAPI
---@field protected PropertyObjectsToTick TArray<UInteractiveToolPropertySet> @Mode-level property objects (visible or not) that get ticked.
---@field private UVEditorUnwrappedUXProperties UUVEditorUnwrappedUXProperties @Hold a settings object to configure the unwrapped visualization
---@field private UVEditorLivePreviewUXProperties UUVEditorLivePreviewUXProperties @Hold a settings object to configure the visualization in the live preview (3d) viewport
local UUVEditorMode = {}

