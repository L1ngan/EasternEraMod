---Script-exposed functionality for wrapping native functionality and constructing valid FAnimationAttributeIdentifier instances
---@class UAnimationAttributeIdentifierExtensions : UBlueprintFunctionLibrary
local UAnimationAttributeIdentifierExtensions = {}

---
---@param Identifier FAnimationAttributeIdentifier @[out] 
---@return boolean
function UAnimationAttributeIdentifierExtensions.IsValid(Identifier) end

---Constructs a valid FAnimationAttributeIdentifier instance. Ensuring that the underlying BoneName exists on the Skeleton for the provided AnimationAsset.
---@param AnimationAsset UAnimationAsset
---@param AttributeName string
---@param BoneName string
---@param AttributeType UScriptStruct
---@param bValidateExistsOnAsset boolean @[opt] 
---@return FAnimationAttributeIdentifier
function UAnimationAttributeIdentifierExtensions.CreateAttributeIdentifier(AnimationAsset, AttributeName, BoneName, AttributeType, bValidateExistsOnAsset) end

