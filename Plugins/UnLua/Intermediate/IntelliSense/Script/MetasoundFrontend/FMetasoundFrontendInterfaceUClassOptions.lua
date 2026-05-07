---Options used to restrict a corresponding UClass that interface may be applied to.
---If unspecified, interface is assumed to be applicable to any arbitrary UClass.
---@class FMetasoundFrontendInterfaceUClassOptions
---@field public ClassPath FTopLevelAssetPath @Path to MetaSound class interface can be added to (ex. UMetaSoundSource or UMetaSound)
---@field public bIsModifiable boolean @True if user can add or remove the given class directly to or from the inherited interface UI, false if not.
---@field public bIsDefault boolean @True if interface should be added by default to newly created MetaSound assets, false if not.
local FMetasoundFrontendInterfaceUClassOptions = {}
