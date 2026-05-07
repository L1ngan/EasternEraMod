---Script-exposed functionality for wrapping native functionality and constructing valid FAnimationCurveIdentifier instances
---@class UAnimationCurveIdentifierExtensions : UBlueprintFunctionLibrary
local UAnimationCurveIdentifierExtensions = {}

---Constructs a valid FAnimationCurveIdentifier instance.
---@param InOutIdentifier FAnimationCurveIdentifier @[out] 
---@param Name string
---@param CurveType ERawCurveTrackTypes
function UAnimationCurveIdentifierExtensions.SetCurveIdentifier(InOutIdentifier, Name, CurveType) end

---
---@param Identifier FAnimationCurveIdentifier @[out] 
---@return boolean
function UAnimationCurveIdentifierExtensions.IsValid(Identifier) end

---
---@param Identifier FAnimationCurveIdentifier @[out] 
---@return ERawCurveTrackTypes
function UAnimationCurveIdentifierExtensions.GetType(Identifier) end

---Converts a valid FAnimationCurveIdentifier instance with RCT_Transform curve type to target a child curve.
---@param InOutIdentifier FAnimationCurveIdentifier @[out] 
---@param Channel ETransformCurveChannel
---@param Axis EVectorCurveChannel
---@return boolean
function UAnimationCurveIdentifierExtensions.GetTransformChildCurveIdentifier(InOutIdentifier, Channel, Axis) end

---
---@param Identifier FAnimationCurveIdentifier @[out] 
---@return string
function UAnimationCurveIdentifierExtensions.GetName(Identifier) end

---Retrieves all curve identifiers for a specific curve types from the provided Skeleton
---@param InSkeleton USkeleton
---@param CurveType ERawCurveTrackTypes
---@return TArray_FAnimationCurveIdentifier_
function UAnimationCurveIdentifierExtensions.GetCurveIdentifiers(InSkeleton, CurveType) end

---@param InSkeleton USkeleton
---@param Name string
---@param CurveType ERawCurveTrackTypes
---@return FAnimationCurveIdentifier
function UAnimationCurveIdentifierExtensions.GetCurveIdentifier(InSkeleton, Name, CurveType) end

---Tries to construct a valid FAnimationCurveIdentifier instance. It tries to find the underlying SmartName on the provided Skeleton for the provided curve type.
---@param InSkeleton USkeleton
---@param Name string
---@param CurveType ERawCurveTrackTypes
---@return FAnimationCurveIdentifier
function UAnimationCurveIdentifierExtensions.FindCurveIdentifier(InSkeleton, Name, CurveType) end

