---Base class mechanic for selecting a subset of mesh elements (edge loops, groups, corners, etc.)
---Internally it relies on an FMeshTopologySelector to define which type of mesh topology is selectable.
---NOTE: Users should not use this class directly, but rather subclass it and specify a particular FMeshTopologySelector to use.
---@class UMeshTopologySelectionMechanic : UInteractionMechanic
---@field public Properties UMeshTopologySelectionMechanicProperties @TODO: Is it worth issuing separate callbacks in normal selection changes and in FChange ones, to allow the user to bundle in some FChanges into the normal callback?
---@field protected HoverBehavior UMouseHoverBehavior
---@field protected ClickOrDragBehavior USingleClickOrDragInputBehavior
---@field protected MarqueeMechanic URectangleMarqueeMechanic
---@field protected MarqueeSelectionUpdateType EMarqueeSelectionUpdateType @Selection update type (default is OnDrag) as it may not need to be triggered for every rectangle change This can drastically improve the responsiveness of the UI for meshes high density meshes. - OnDrag: calls HandleRectangleChanged when dragging - OnTick: stores a PendingSelection function when dragging and calls it when ticking and on release (if any) - OnRelease: stores a PendingSelection function when dragging and calls it on release (if any)
---@field protected PreviewGeometryActor APreviewGeometryActor @The actor we create internally to own the DrawnTriangleSetComponent
---@field protected DrawnTriangleSetComponent UTriangleSetComponent
---@field protected HighlightedFaceMaterial UMaterialInterface
local UMeshTopologySelectionMechanic = {}

