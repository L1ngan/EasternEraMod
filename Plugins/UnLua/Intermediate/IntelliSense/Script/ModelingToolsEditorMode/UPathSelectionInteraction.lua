---UPathSelectionInteraction is a simple drag-interaction for Selection, which essentially just
---selects/deselects any element hit by the cursor.
---Currently no attempt is made to (eg) subsample, so a fast-moving cursor will skip over some faces.
---@class UPathSelectionInteraction : UObject
---@field protected SelectionInteraction TWeakObjectPtr<UModelingSelectionInteraction>
local UPathSelectionInteraction = {}

