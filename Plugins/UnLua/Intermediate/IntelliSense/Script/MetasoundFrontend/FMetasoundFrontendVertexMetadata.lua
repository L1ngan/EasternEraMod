---Metadata associated with a vertex.
---@class FMetasoundFrontendVertexMetadata
---@field private DisplayName string @Display name for a vertex
---@field private DisplayNameTransient string @Display name for a vertex if vertex is natively defined (must be transient to avoid localization desync on load)
---@field private Description string @Description of the vertex.
---@field private DescriptionTransient string @Description of the vertex if vertex is natively defined (must be transient to avoid localization desync on load)
---@field public SortOrderIndex integer @Order index of vertex member when shown as a node.
---@field public bIsAdvancedDisplay boolean @If true, vertex is shown for advanced display.
---@field private bSerializeText boolean @Whether or not the given metadata text should be serialized or is procedurally maintained via auto-update & the referenced registry class (to avoid localization text desync).  Should be false for classes serialized as externally-defined dependencies or interfaces.
local FMetasoundFrontendVertexMetadata = {}
