---@class UBehaviorTreeComponent : UBrainComponent
---@field protected NodeInstances TArray<UBTNode> @instanced nodes
---@field protected DefaultBehaviorTreeAsset UBehaviorTree @data asset defining the tree
local UBehaviorTreeComponent = {}

---assign subtree to RunBehaviorDynamic task specified by tag.
---@param InjectTag FGameplayTag
---@param BehaviorAsset UBehaviorTree
function UBehaviorTreeComponent:SetDynamicSubtree(InjectTag, BehaviorAsset) end

---
---@param CooldownTag FGameplayTag
---@return number
function UBehaviorTreeComponent:GetTagCooldownEndTime(CooldownTag) end

---add to the cooldown tag's duration
---@param CooldownTag FGameplayTag
---@param CooldownDuration number
---@param bAddToExistingDuration boolean
function UBehaviorTreeComponent:AddCooldownTagDuration(CooldownTag, CooldownDuration, bAddToExistingDuration) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UBehaviorTreeComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UBehaviorTreeComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UBehaviorTreeComponent:AddAssetUserDataOfClass(InUserDataClass) end

