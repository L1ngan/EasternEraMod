---API for dealing with mode-level selection in the UV editor.
---Selections are stored in a list of objects, one object per asset that contains a
---selection, all of the same type (vert/edge/tri), none empty. Selections are
---considered to be referring to the UnwrapCanonical mesh of the corresponding target.
---There are also functions to enable automatic highlighting of the current selection,
---and to enable a selection mechanic in the viewport (to which tools can respond via
---OnSelectionChanged broadcasts).
---@class UUVToolSelectionAPI : UUVToolContextObject
---@field protected Targets TArray<UUVEditorToolMeshInput>
---@field protected MechanicAdapter UUVEditorMechanicAdapterTool
---@field protected HighlightMechanic UUVToolSelectionHighlightMechanic
---@field protected SelectionMechanic UUVEditorMeshSelectionMechanic
---@field protected EmitChangeAPI UUVToolEmitChangeAPI
local UUVToolSelectionAPI = {}

