---Editor-only page default for more desirable customization behavior in representing
---Frontend Literal value. Should never be serialized as generation is non-deterministic.
---@class FMetasoundEditorMemberPageDefault
---@field public PageName string @Selectable PageName
---@field public PageID FGuid @Used for hash and mirrors document-stored value. Defaults to random value to allow for assignment in post-edit change. Allows for name collisions if user is amidst renaming or rebasing values
local FMetasoundEditorMemberPageDefault = {}
