---@class FMetasoundFrontendDocumentMetadata
---@field public Version FMetasoundFrontendVersion
---@field public MemberMetadata TMap<FGuid, UMetaSoundFrontendMemberMetadata> @Map of MemberID to metadata used to constrain how literals can be manipulated with the editor context. This can be used to implement things like numeric ranges, hardware control parameters, etc.
local FMetasoundFrontendDocumentMetadata = {}
