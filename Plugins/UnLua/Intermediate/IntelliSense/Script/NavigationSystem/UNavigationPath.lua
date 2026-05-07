---UObject wrapper for FNavigationPath
---@class UNavigationPath : UObject
---@field public PathUpdatedNotifier MulticastDelegate
---@field public PathPoints TArray<FVector>
---@field public RecalculateOnInvalidation ENavigationOptionFlag
local UNavigationPath = {}

---@return boolean
function UNavigationPath:IsValid() end

---@return boolean
function UNavigationPath:IsStringPulled() end

---@return boolean
function UNavigationPath:IsPartial() end

---@return number
function UNavigationPath:GetPathLength() end

---@return number
function UNavigationPath:GetPathCost() end

---UObject end
---@return string
function UNavigationPath:GetDebugString() end

---if enabled path will request recalculation if it gets invalidated due to a change to underlying navigation
---@param DoRecalculation ENavigationOptionFlag
function UNavigationPath:EnableRecalculationOnInvalidation(DoRecalculation) end

---@param bShouldDrawDebugData boolean
---@param PathColor FLinearColor @[opt] 
function UNavigationPath:EnableDebugDrawing(bShouldDrawDebugData, PathColor) end

