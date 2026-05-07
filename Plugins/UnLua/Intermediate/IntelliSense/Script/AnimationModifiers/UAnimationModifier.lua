---@class UAnimationModifier : UObject
---@field public bReapplyPostOwnerChange boolean @If this is set to true then the animation modifier will call it's reapply function after any change made to the owning asset.
---@field private RevisionGuid FGuid @VisibleAnywhere for testing, Category = Revision
---@field private StoredNativeRevision integer @This holds the latest value returned by UpdateNativeRevisionGuid during the last PostLoad (changing this value will invalidate the GUIDs for all instances)
local UAnimationModifier = {}

---@param AnimationSequence UAnimSequence
function UAnimationModifier:OnRevert(AnimationSequence) end

---Executed when the Animation is initialized (native event for debugging / testing purposes)
---@param AnimationSequence UAnimSequence
function UAnimationModifier:OnApply(AnimationSequence) end

