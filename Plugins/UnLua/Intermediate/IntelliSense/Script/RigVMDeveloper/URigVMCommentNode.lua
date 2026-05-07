---Comment Nodes can be used to annotate a Graph by adding
---colored grouping as well as user provided text.
---Comment Nodes are purely cosmetic and don't contribute
---to the runtime result of the Graph / Function.
---@class URigVMCommentNode : URigVMNode
---@field private CommentText string
---@field private FontSize integer
---@field private bBubbleVisible boolean
---@field private bColorBubble boolean
local URigVMCommentNode = {}

---Returns the current user provided text of this comment.
---@return string
function URigVMCommentNode:GetCommentText() end

---Returns the current user provided font size of this comment.
---@return integer
function URigVMCommentNode:GetCommentFontSize() end

---Returns the current user provided bubble color inheritance of this comment.
---@return boolean
function URigVMCommentNode:GetCommentColorBubble() end

---Returns the current user provided bubble visibility of this comment.
---@return boolean
function URigVMCommentNode:GetCommentBubbleVisible() end

