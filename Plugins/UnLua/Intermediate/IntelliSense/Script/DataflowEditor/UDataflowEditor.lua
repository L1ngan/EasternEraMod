---The actual asset editor class doesn't have that much in it, intentionally.
---Our current asset editor guidelines ask us to place as little business logic as possible
---into the class, instead putting as much of the non-UI code into the subsystem as possible,
---and the UI code into the toolkit (which this class owns).
---However, since we're using a mode and the Interactive Tools Framework, a lot of our business logic
---ends up inside the mode and the tools, not the subsystem. The front-facing code is mostly in
---the asset editor toolkit, though the mode toolkit has most of the things that deal with the toolbar
---on the left.
---@class UDataflowEditor : UBaseCharacterFXEditor
---@field private EditorContent UDataflowBaseContent @Dataflow editor is the owner of the object list to edit/process and the dataflow mode is the one holding the dynamic mesh components to be rendered in the viewport It is why the data flow asset/owner/skelmesh have been added here. Could be added in the subsystem if necessary
---@field private TerminalContents TArray<UDataflowBaseContent> @List of dataflow contents available in the graph and coming from all the terminal nodes
local UDataflowEditor = {}

