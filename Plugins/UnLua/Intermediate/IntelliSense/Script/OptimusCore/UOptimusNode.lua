---@class UOptimusNode : UObject
---@field private DisplayName string @The display name to show. This is non-transactional because it is controlled by our action system rather than the transacting system for undo.
---@field private GraphPosition FVector2D @Node layout data
---@field private Pins TArray<UOptimusNodePin> @The list of pins. Non-transactional for the same reason as above.
---@field private ExpandedPins TSet<string> @The list of pins that should be shown as expanded in the graph view.
---@field private DiagnosticLevel EOptimusDiagnosticLevel
local UOptimusNode = {}

---Sets the position in the graph UI that the node should be shown at.
---@param InPosition FVector2D
---@return boolean
function UOptimusNode:SetGraphPosition(InPosition) end

---Returns the node class name. This name is immutable for the given node class.
---@return string
function UOptimusNode:GetNodeName() end

---Returns the node class category. This is used for categorizing the node for display.
---@return string
function UOptimusNode:GetNodeCategory() end

---Returns the position in the graph UI where the node is shown.
---@return FVector2D
function UOptimusNode:GetGraphPosition() end

---Returns the display name to use on the graphical node in the graph editor.
---@return string
function UOptimusNode:GetDisplayName() end

