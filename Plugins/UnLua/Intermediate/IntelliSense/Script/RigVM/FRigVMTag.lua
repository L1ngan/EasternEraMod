---User applied tag
---@class FRigVMTag
---@field public Name string
---@field public Label string
---@field public ToolTip string
---@field public Color FLinearColor
---@field public bShowInUserInterface boolean @Enabling this will show tags in the user interface within the variant widgets and other places. Disabling this will interpret this tag as automation / scripting only.
---@field public bMarksSubjectAsInvalid boolean @Enabling this will mark the subject (asset, function etc) as (soft) deprecated. The content referring to variants with this tag will continue to work, but the user interface will suggest the user to upgrade to a later variant.
local FRigVMTag = {}
