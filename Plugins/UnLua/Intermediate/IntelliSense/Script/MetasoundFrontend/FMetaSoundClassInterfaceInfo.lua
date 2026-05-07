---Condensed set of class data that is serialized to editor-only asset tag data,
---allowing editor scripts and code to query MetaSounds without loading them
---in entirety.
---@class FMetaSoundClassInterfaceInfo
---@field public DefinedInterfaces TArray<FMetasoundFrontendInterfaceMetadata> @Interfaces metadata associated with interfaces defined by this class.
---@field public SearchInfo FMetaSoundClassSearchInfo @Editor-only search info
---@field public Inputs TArray<FMetaSoundClassVertexInfo> @Collection of identifiable input vertex data cached in query for fast access & serializability (ex. in asset tags)
---@field public Outputs TArray<FMetaSoundClassVertexInfo> @Collection of identifiable output vertex data cached in query for fast access & serializability (ex. in asset tags)
---@field public InheritedInterfaces TArray<FMetasoundFrontendVersion> @Interfaces metadata associated with a given class definition.
local FMetaSoundClassInterfaceInfo = {}
