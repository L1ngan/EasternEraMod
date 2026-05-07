---An interactive floating UI panel that can be dragged around
---@class AVREditorDockableWindow : AVREditorFloatingUI
---@field private DockButtonMeshComponent UStaticMeshComponent @Mesh underneath the window for docking it to the world
---@field private SelectionBarMeshComponent UStaticMeshComponent @Mesh underneath the window for easy selecting and dragging
---@field private CloseButtonMeshComponent UStaticMeshComponent @Mesh that represents the close button for this UI
---@field private DockButtonMID UMaterialInstanceDynamic @Dock Button dynamic material  (opaque)
---@field private SelectionBarMID UMaterialInstanceDynamic @Selection bar dynamic material  (opaque)
---@field private SelectionBarTranslucentMID UMaterialInstanceDynamic @Select bar dynamic material (translucent)
---@field private CloseButtonMID UMaterialInstanceDynamic @Close button dynamic material  (opaque)
---@field private CloseButtonTranslucentMID UMaterialInstanceDynamic @Close button dynamic material (translucent)
---@field private DragOperationComponent UViewportDragOperationComponent
local AVREditorDockableWindow = {}

