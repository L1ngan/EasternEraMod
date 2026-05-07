---Simple group object intended to be used as part of 3D Gizmos.
---Contains multiple gizmo objects.
---@class UGizmoElementGroup : UGizmoElementLineBase
---@field protected bConstantScale boolean @When true, maintains view-dependent constant scale for this gizmo object hierarchy
---@field protected bHitOwner boolean @When true, this group is treated as a single element such that when LineTrace is called, if any of its sub-elements is hit, this group will be returned as the owner of the hit. This should be used when a group of elements should be treated as a single handle.
---@field protected Elements TArray<UGizmoElementBase> @Gizmo elements within this group
local UGizmoElementGroup = {}

