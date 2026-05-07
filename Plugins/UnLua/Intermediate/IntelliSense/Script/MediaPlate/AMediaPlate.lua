---MediaPlate is an actor that can play and show media in the world.
---@class AMediaPlate : AActor
---@field public MediaPlateComponent UMediaPlateComponent
---@field public StaticMeshComponent UStaticMeshComponent @Holds the mesh.
---@field private bEnableHoldoutComposite boolean @If true, the mesh is rendered separately and composited after post-processing (see HoldoutComposite plugin). Using mip generation with this setting is also recommended if the cost is acceptable, given that the composite bypasses temporal anti-aliasing.
local AMediaPlate = {}

---Set the holdout composite state.
---@param bInEnabled boolean
function AMediaPlate:SetHoldoutCompositeEnabled(bInEnabled) end

---Get the holdout composite state.
---@return boolean
function AMediaPlate:IsHoldoutCompositeEnabled() end

