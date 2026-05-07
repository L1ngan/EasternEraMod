---A tool target backed by a read-only skeletal mesh.
---This is a special tool target that refers to the underlying asset (in this case a skeletal mesh), rather than indirectly through a component.
---This type of target is used in cases, such as opening an asset through the content browser, when there is no component available.
---@class USkeletalMeshReadOnlyToolTarget : UToolTarget
local USkeletalMeshReadOnlyToolTarget = {}

