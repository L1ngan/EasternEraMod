---@class UOptimusNode_Comment : UOptimusNode
---@field public CommentColor FLinearColor @Color to style comment with
---@field public FontSize integer @Size of the text in the comment box
---@field public Comment string @Comment to show
---@field public bBubbleVisible boolean @Whether to show a zoom-invariant comment bubble when zoomed out (making the comment readable at any distance).
---@field public bColorBubble boolean @Whether to use Comment Color to color the background of the comment bubble shown when zoomed out.
---@field private Size FDeprecateSlateVector2D
local UOptimusNode_Comment = {}

