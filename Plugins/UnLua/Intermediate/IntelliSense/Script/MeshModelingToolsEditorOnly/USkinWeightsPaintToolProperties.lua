---Container for properties displayed in Details panel while using USkinWeightsPaintTool
---@class USkinWeightsPaintToolProperties : UBrushBaseProperties
---@field public EditingMode EWeightEditMode @brush vs selection modes
---@field public BrushMode EWeightEditOperation @custom brush modes and falloff types
---@field public ComponentSelectionMode EComponentSelectionMode @are we selecting vertices, edges or faces
---@field public ColorMode EWeightColorMode @weight color properties
---@field public ColorRamp TArray<FLinearColor>
---@field public MirrorAxis integer @weight editing arguments
---@field public MirrorDirection EMirrorDirection
---@field public PruneValue number
---@field public ClampValue integer
---@field public ClampSelectValue integer
---@field public AddStrength number
---@field public ReplaceValue number
---@field public RelaxStrength number
---@field public AverageStrength number
---@field public BrushConfigAdd FSkinWeightBrushConfig
---@field public BrushConfigReplace FSkinWeightBrushConfig
---@field public BrushConfigMultiply FSkinWeightBrushConfig
---@field public BrushConfigRelax FSkinWeightBrushConfig
---@field public ActiveLOD string @skin weight layer properties
---@field public ActiveSkinWeightProfile string
---@field public bShowNewProfileName boolean @new profile properties
---@field public NewSkinWeightProfile string
---@field public SourceSkeletalMesh TWeakObjectPtr<USkeletalMesh> @transfer
---@field public MeshSelectMode EMeshTransferOption
---@field public SourceLOD string
---@field public SourceSkinWeightProfile string
---@field public SourcePreviewOffset FTransform
local USkinWeightsPaintToolProperties = {}

---@return TArray_string_
function USkinWeightsPaintToolProperties:GetTargetSkinWeightProfilesFunc() end

---@return TArray_string_
function USkinWeightsPaintToolProperties:GetTargetLODsFunc() end

---@return TArray_string_
function USkinWeightsPaintToolProperties:GetSourceSkinWeightProfilesFunc() end

---@return TArray_string_
function USkinWeightsPaintToolProperties:GetSourceLODsFunc() end

