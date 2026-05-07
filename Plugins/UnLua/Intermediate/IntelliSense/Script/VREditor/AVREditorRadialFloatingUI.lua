---Represents an interactive floating UI panel in the VR Editor
---@class AVREditorRadialFloatingUI : AVREditorBaseActor
---@field protected WidgetComponents TArray<UVREditorWidgetComponent> @When in a spawned state, this is the widget component to represent the widget
---@field protected WindowMeshComponent UStaticMeshComponent @The floating window mesh
---@field protected ArrowMeshComponent UStaticMeshComponent @The arrow indicator mesh
---@field protected CentralWidgetComponent UVREditorWidgetComponent @The central helper widget
local AVREditorRadialFloatingUI = {}

