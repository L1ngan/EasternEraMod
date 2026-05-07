---@class FMetasoundFrontendDocument
---@field public Metadata FMetasoundFrontendDocumentMetadata
---@field public Interfaces TSet<FMetasoundFrontendVersion>
---@field public RootGraph FMetasoundFrontendGraphClass
---@field public Subgraphs TArray<FMetasoundFrontendGraphClass>
---@field public Dependencies TArray<FMetasoundFrontendClass>
---@field private ArchetypeVersion FMetasoundFrontendVersion
---@field private InterfaceVersions TArray<FMetasoundFrontendVersion>
---@field private IdCounter integer @Used for generating deterministic IDs per document. Serialized to avoid id collisions if deterministic IDs are ever serialized (not ideal, but can occur in less common commandlet use cases such as resaving serialized assets procedurally).
local FMetasoundFrontendDocument = {}
