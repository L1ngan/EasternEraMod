---@class UUnLuaLatentAction : UObject
---@field public Callback Delegate
---@field private bTickEvenWhenPaused boolean
local UUnLuaLatentAction = {}

---@param bTickableWhenPaused boolean
function UUnLuaLatentAction:SetTickableWhenPaused(bTickableWhenPaused) end

---End Interface FTickableGameObject
---@param InLinkage integer
function UUnLuaLatentAction:OnLegacyCallback(InLinkage) end

---@param InLinkage integer
function UUnLuaLatentAction:OnCompleted(InLinkage) end

---@return boolean
function UUnLuaLatentAction:GetTickableWhenPaused() end

