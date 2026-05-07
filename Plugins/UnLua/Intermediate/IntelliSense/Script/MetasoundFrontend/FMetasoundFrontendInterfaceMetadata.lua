---@class FMetasoundFrontendInterfaceMetadata
---@field public Version FMetasoundFrontendVersion @Name and version number of the interface
---@field public UClassOptions TArray<FMetasoundFrontendInterfaceUClassOptions> @If specified, options used to restrict a corresponding UClass that interface may be applied to.  If unspecified, interface is assumed to be applicable to any arbitrary UClass.
local FMetasoundFrontendInterfaceMetadata = {}
