---Exposes operations to be performed on a blend space player anim node.
---@class UBlendSpacePlayerLibrary : UBlueprintFunctionLibrary
local UBlendSpacePlayerLibrary = {}

---Forces the Position to the specified value
---@param BlendSpacePlayer FBlendSpacePlayerReference
---@param NewPosition FVector
function UBlendSpacePlayerLibrary.SnapToPosition(BlendSpacePlayer, NewPosition) end

---Get the current value of whether the current play time should reset when BlendSpace changes of the blend space player.
---@param BlendSpacePlayer FBlendSpacePlayerReference
---@return boolean
function UBlendSpacePlayerLibrary.ShouldResetPlayTimeWhenBlendSpaceChanges(BlendSpacePlayer) end

---Set whether the current play time should reset when BlendSpace changes of the blend space player.
---@param BlendSpacePlayer FBlendSpacePlayerReference
---@param bReset boolean
---@return FBlendSpacePlayerReference
function UBlendSpacePlayerLibrary.SetResetPlayTimeWhenBlendSpaceChanges(BlendSpacePlayer, bReset) end

---Set the play rate of the blend space player.
---@param BlendSpacePlayer FBlendSpacePlayerReference
---@param PlayRate number
---@return FBlendSpacePlayerReference
function UBlendSpacePlayerLibrary.SetPlayRate(BlendSpacePlayer, PlayRate) end

---Set the loop of the blend space player.
---@param BlendSpacePlayer FBlendSpacePlayerReference
---@param bLoop boolean
---@return FBlendSpacePlayerReference
function UBlendSpacePlayerLibrary.SetLoop(BlendSpacePlayer, bLoop) end

---Set the current BlendSpace of the blend space player with an interial blend time.
---@param UpdateContext FAnimUpdateContext
---@param BlendSpacePlayer FBlendSpacePlayerReference
---@param BlendSpace UBlendSpace
---@param BlendTime number @[opt] 
---@return FBlendSpacePlayerReference
function UBlendSpacePlayerLibrary.SetBlendSpaceWithInertialBlending(UpdateContext, BlendSpacePlayer, BlendSpace, BlendTime) end

---Set the current BlendSpace of the blend space player.
---@param BlendSpacePlayer FBlendSpacePlayerReference
---@param BlendSpace UBlendSpace
---@return FBlendSpacePlayerReference
function UBlendSpacePlayerLibrary.SetBlendSpace(BlendSpacePlayer, BlendSpace) end

---Get the current start position of the blend space player.
---@param BlendSpacePlayer FBlendSpacePlayerReference
---@return number
function UBlendSpacePlayerLibrary.GetStartPosition(BlendSpacePlayer) end

---Get the current position of the blend space player.
---@param BlendSpacePlayer FBlendSpacePlayerReference
---@return FVector
function UBlendSpacePlayerLibrary.GetPosition(BlendSpacePlayer) end

---Get the current play rate of the blend space player.
---@param BlendSpacePlayer FBlendSpacePlayerReference
---@return number
function UBlendSpacePlayerLibrary.GetPlayRate(BlendSpacePlayer) end

---Get the current loop of the blend space player.
---@param BlendSpacePlayer FBlendSpacePlayerReference
---@return boolean
function UBlendSpacePlayerLibrary.GetLoop(BlendSpacePlayer) end

---Get the current BlendSpace of the blend space player.
---@param BlendSpacePlayer FBlendSpacePlayerReference
---@return UBlendSpace
function UBlendSpacePlayerLibrary.GetBlendSpace(BlendSpacePlayer) end

---Get a blend space player context from an anim node context (pure).
---@param Node FAnimNodeReference
---@param BlendSpacePlayer FBlendSpacePlayerReference @[out] 
---@param Result boolean @[out] 
function UBlendSpacePlayerLibrary.ConvertToBlendSpacePlayerPure(Node, BlendSpacePlayer, Result) end

---Get a blend space player context from an anim node context.
---@param Node FAnimNodeReference
---@param Result EAnimNodeReferenceConversionResult @[out] 
---@return FBlendSpacePlayerReference
function UBlendSpacePlayerLibrary.ConvertToBlendSpacePlayer(Node, Result) end

