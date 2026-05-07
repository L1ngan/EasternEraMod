---Asset user data which can be added to a USkeleton or UAnimSequence to keep track of Animation Modifiers
---@class UAnimationModifiersAssetUserData : UAssetUserData
---@field protected AnimationModifierInstances TArray<UAnimationModifier>
---@field protected AppliedModifiers TMap<FSoftObjectPath, UAnimationModifier> @Animation modifiers APPLIED on the owning animation sequence - Key = Modifier in AnimationModifierInstances of owning animation sequence or skeleton - Value = Modifier instance applied Applied modifier instances stores (Properties, RevisionGuid, ...) at Apply Time Which are not visible or editable from user interface In contrast, modifiers in AnimationModifierInstances are objects displayed at the Animation Data Modifier window Where Properties are displayed for user editing anytime Note, Modifier on Skeleton (MoS) applied instances are stored on each animation sequence's asset user data, instead of the skeleton's this design is important to enable applied modifiers can be reverted for each sequence also ensure applying MoS (when [re]importing animation) will not affect the skeleton asset The only time MoS stores an applied instance here is upgrading from previous version The "UAnimationModifier::PreviouslyAppliedModifier_DEPRECATED" data will be migrated here To support proper revert for them For more compatibility handling, check UAnimationModifier::PostLoad() and GetAppliedModifier()
local UAnimationModifiersAssetUserData = {}

---@param AnimationSequenceBase UAnimSequenceBase
---@param InModifierClass TSubclassOf_UAnimationModifier_
---@return boolean
function UAnimationModifiersAssetUserData.AddAnimationModifierOfClass(AnimationSequenceBase, InModifierClass) end

