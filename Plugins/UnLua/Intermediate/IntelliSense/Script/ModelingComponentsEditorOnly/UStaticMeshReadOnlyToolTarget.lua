---A tool target backed by a static mesh asset that can provide and take a mesh
---description, without 'committer' interfaces for writing to the source static mesh asset.
---This is a special tool target that refers to the underlying asset (in this case a static mesh), rather than indirectly through a component.
---This type of target is used in cases, such as opening an asset through the content browser, when there is no component available.
---@class UStaticMeshReadOnlyToolTarget : UToolTarget
local UStaticMeshReadOnlyToolTarget = {}

