---Represents an interactive floating UI panel in the VR Editor
---@class AVREditorFloatingUI : AVREditorBaseActor
---@field public CreationContext FVREditorFloatingUICreationContext @All params used to create this panel if this panel has a UMG widget and was created via BP. Invalid otherwise.
---@field protected UserWidget UUserWidget @UMG user widget we're drawing, or nullptr if we're drawing a Slate widget
---@field protected WidgetComponent UVREditorWidgetComponent @When in a spawned state, this is the widget component to represent the widget
---@field protected WindowMeshComponent UStaticMeshComponent @The floating window mesh
---@field private UserWidgetClass TSubclassOf<UObject> @Class of the UMG widget we're spawning
local AVREditorFloatingUI = {}

