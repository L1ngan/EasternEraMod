---@class ANiagaraPreviewGrid : AActor
---@field public System UNiagaraSystem
---@field public ResetMode ENiagaraPreviewGridResetMode
---@field public PreviewAxisX UNiagaraPreviewAxis @Object controlling behavior varying on the X axis.
---@field public PreviewAxisY UNiagaraPreviewAxis @Object controlling behavior varying on the Y axis.
---@field public PreviewClass TSubclassOf<ANiagaraPreviewBase> @Class used to for previews in this grid.
---@field public SpacingX number @The default spacing between previews in X if the axis does not override it.
---@field public SpacingY number @The default spacing between previews if the axis does not override it.
---@field private NumX integer
---@field private NumY integer
---@field private PreviewComponents TArray<UChildActorComponent>
---@field private SpriteComponent UBillboardComponent @Reference to sprite visualization component
---@field private ArrowComponent UArrowComponent @Reference to arrow visualization component
local ANiagaraPreviewGrid = {}

---@param bPaused boolean
function ANiagaraPreviewGrid:SetPaused(bPaused) end

---@param OutPreviews TArray_UNiagaraComponent_ @[out] 
function ANiagaraPreviewGrid:GetPreviews(OutPreviews) end

function ANiagaraPreviewGrid:DeactivatePreviews() end

---AActor Interface End
---@param bReset boolean
function ANiagaraPreviewGrid:ActivatePreviews(bReset) end

