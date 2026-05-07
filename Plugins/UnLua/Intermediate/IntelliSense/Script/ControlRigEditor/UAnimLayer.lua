---@class UAnimLayer : UObject
---@field private AnimLayerItems TMap<TWeakObjectPtr<UObject>, FAnimLayerItem>
---@field private State FAnimLayerState
---@field private WeightProxy UAnimLayerWeightProxy
local UAnimLayer = {}

---@param InWeight number
function UAnimLayer:SetWeight(InWeight) end

---@param LayerType integer
function UAnimLayer:SetType(LayerType) end

---@param bInSelected boolean
---@param bClearSelection boolean
function UAnimLayer:SetSelected(bInSelected, bClearSelection) end

---@param InName string
function UAnimLayer:SetName(InName) end

---@param bInLock boolean
function UAnimLayer:SetLock(bInLock) end

function UAnimLayer:SetKeyed() end

---@param bInActive boolean
function UAnimLayer:SetActive(bInActive) end

---@return boolean
function UAnimLayer:RemoveSelectedInSequencer() end

---@return number
function UAnimLayer:GetWeight() end

---@return integer
function UAnimLayer:GetType() end

---@return ECheckBoxState
function UAnimLayer:GetSelected() end

---@return string
function UAnimLayer:GetName() end

---@return boolean
function UAnimLayer:GetLock() end

---@return ECheckBoxState
function UAnimLayer:GetKeyed() end

---@return boolean
function UAnimLayer:GetActive() end

---@return boolean
function UAnimLayer:AddSelectedInSequencer() end

