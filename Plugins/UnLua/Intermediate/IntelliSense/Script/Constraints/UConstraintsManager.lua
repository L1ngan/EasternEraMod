---UConstraintsManager
---This object gathers the different static/nonanimated constraints of the level and is held by the ConstraintsActor (unique in the level)
---Note in 5.4 all of the constraints are owned by the subsystem, so need to get that to get at animated constraints
---@class UConstraintsManager : UObject
---@field public OnConstraintAdded_BP MulticastDelegate @BP Delegate fired when constraints are added
---@field public OnConstraintRemoved_BP MulticastDelegate @BP Delegate fired when constraints are removed
---@field private Constraints TArray<UTickableConstraint> @For 5.4, this now just contains all of the static constraints.      Other constraints will exist in the subsystem and owned by the section
local UConstraintsManager = {}

---@param Mananger UConstraintsManager
---@param Constraint UTickableConstraint
---@param bDoNotCompensate boolean
function UConstraintsManager:OnConstraintRemoved__DelegateSignature(Mananger, Constraint, bDoNotCompensate) end

---Dynamic blueprintable delegates for knowing when a constraints are added or deleted
---@param Mananger UConstraintsManager
---@param Constraint UTickableConstraint
function UConstraintsManager:OnConstraintAdded__DelegateSignature(Mananger, Constraint) end

