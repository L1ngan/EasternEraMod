---@class UEdGraphNode_Comment : UEdGraphNode
---@field public CommentColor FLinearColor @Color to style comment with
---@field public FontSize integer @Size of the text in the comment box
---@field public bCommentBubbleVisible_InDetailsPanel boolean @Whether to show a zoom-invariant comment bubble when zoomed out (making the comment readable at any distance).
---@field public bColorCommentBubble boolean @Whether to use Comment Color to color the background of the comment bubble shown when zoomed out.
---@field public MoveMode integer @Whether the comment should move any fully enclosed nodes around when it is moved
---@field public NodeDetails string @Details field if more info is needed to be communicated (will show up in tooltip)
---@field public CommentDepth integer @comment Depth
local UEdGraphNode_Comment = {}

