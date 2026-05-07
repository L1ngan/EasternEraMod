---@class FRigUnit_HierarchyAddControlTransform_Settings : FRigUnit_HierarchyAddControl_Settings
---@field public InitialSpace ERigVMTransformSpace
---@field public bUsePreferredRotationOrder boolean @Enables overriding the preferred rotation order
---@field public PreferredRotationOrder EEulerRotationOrder
---@field public Limits FRigUnit_HierarchyAddControlTransform_LimitSettings
---@field public Shape FRigUnit_HierarchyAddControl_ShapeSettings
---@field public Proxy FRigUnit_HierarchyAddControl_ProxySettings
---@field public FilteredChannels TArray<ERigControlTransformChannel>
local FRigUnit_HierarchyAddControlTransform_Settings = {}
