---Base class for simple Components intended to be used as part of 3D Gizmos.
---Contains common properties and utility functions.
---This class does nothing by itself, use subclasses like UGizmoCircleComponent
---@class UGizmoBaseComponent : UPrimitiveComponent
---@field public Color FLinearColor
---@field public HoverSizeMultiplier number
---@field public PixelHitDistanceThreshold number
---@field protected GizmoViewContext UGizmoViewContext
local UGizmoBaseComponent = {}

---@param bWorldIn boolean
function UGizmoBaseComponent:UpdateWorldLocalState(bWorldIn) end

---@param bHoveringIn boolean
function UGizmoBaseComponent:UpdateHoverState(bHoveringIn) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UGizmoBaseComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UGizmoBaseComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UGizmoBaseComponent:AddAssetUserDataOfClass(InUserDataClass) end

