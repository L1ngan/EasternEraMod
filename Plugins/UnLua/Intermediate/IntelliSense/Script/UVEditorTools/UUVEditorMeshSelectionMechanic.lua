---Mechanic for selecting elements of a dynamic mesh in the UV editor. Interacts
---heavily with UUVToolSelectionAPI, which actually stores selections.
---@class UUVEditorMeshSelectionMechanic : UInteractionMechanic
---@field protected SelectionAPI UUVToolSelectionAPI
---@field protected ViewportButtonsAPI UUVToolViewportButtonsAPI
---@field protected EmitChangeAPI UUVToolEmitChangeAPI
---@field protected LivePreviewAPI UUVToolLivePreviewAPI
---@field protected UnwrapClickTargetRouter ULocalSingleClickInputBehavior
---@field protected LivePreviewClickTargetRouter ULocalSingleClickInputBehavior
---@field protected UnwrapHoverBehaviorTargetRouter ULocalMouseHoverBehavior
---@field protected LivePreviewHoverBehaviorTargetRouter ULocalMouseHoverBehavior
---@field protected MarqueeMechanic URectangleMarqueeMechanic
---@field protected LivePreviewMarqueeMechanic URectangleMarqueeMechanic
---@field protected HoverTriangleSetMaterial UMaterialInstanceDynamic
---@field protected HoverGeometryActor APreviewGeometryActor
---@field protected LivePreviewBehaviorSet UInputBehaviorSet
---@field protected LivePreviewBehaviorSource ULocalInputBehaviorSource
---@field protected LivePreviewHoverGeometryActor APreviewGeometryActor
local UUVEditorMeshSelectionMechanic = {}

