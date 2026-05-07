---@class UMaterialExpressionComment : UMaterialExpression
---@field public SizeX integer
---@field public SizeY integer
---@field public Text string
---@field public CommentColor FLinearColor @Color to style comment with
---@field public FontSize integer @Size of the text in the comment box
---@field public bCommentBubbleVisible_InDetailsPanel boolean @Whether to show a zoom-invariant comment bubble when zoomed out (making the comment readable at any distance).
---@field public bColorCommentBubble boolean @Whether to use Comment Color to color the background of the comment bubble shown when zoomed out.
---@field public bGroupMode boolean @Whether the comment should move any fully enclosed nodes around when it is moved
local UMaterialExpressionComment = {}

